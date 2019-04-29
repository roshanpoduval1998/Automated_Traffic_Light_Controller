# -*- coding: utf-8 -*-
from __future__ import unicode_literals
import cv2
import numpy as np
import serial
import time


ASerial = serial.Serial('COM7', 9600)
time.sleep(2)

#for detecting red
lowerBoundr = np.array([0, 99, 100])
upperBoundr = np.array([10, 255, 255])

#for detecting blue
lowerBoundb = np.array([100, 100, 102])
upperBoundb = np.array([130, 255, 255])

#for detecting green
lowerBoundg = np.array([70, 50, 51])
upperBoundg = np.array([90, 255, 255])

cam = cv2.VideoCapture(1)
kernelOpen = np.ones((5, 5))
kernelClose = np.ones((20, 20))
print("start")
cars1 = 0
cars2 = 0
cars3 = 0
cars4 = 0


def capture(s):
    for i in range(100):
        ret, img = cam.read()
        img = cv2.resize(img, (340, 220))
        # time.sleep(2)
        # convert BGR to HSV
        imgHSV = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
        # create the Mask
        maskred = cv2.inRange(imgHSV, lowerBoundr, upperBoundr)
        # morphology
        maskOpenred = cv2.morphologyEx(maskred, cv2.MORPH_OPEN, kernelOpen)
        maskClosered = cv2.morphologyEx(maskOpenred, cv2.MORPH_CLOSE, kernelClose)

        maskFinalred = maskClosered
        contsred, h = cv2.findContours(maskFinalred.copy(), cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_NONE)

        #######

        maskb = cv2.inRange(imgHSV, lowerBoundb, upperBoundb)
        maskg = cv2.inRange(imgHSV, lowerBoundg, upperBoundg)
        # morphology
        maskOpenb = cv2.morphologyEx(maskb, cv2.MORPH_OPEN, kernelOpen)
        maskCloseb = cv2.morphologyEx(maskOpenb, cv2.MORPH_CLOSE, kernelClose)

        maskOpeng = cv2.morphologyEx(maskg, cv2.MORPH_OPEN, kernelOpen)
        maskCloseg = cv2.morphologyEx(maskOpeng, cv2.MORPH_CLOSE, kernelClose)

        maskFinalb = maskCloseb
        maskFinalg = maskCloseg
        contsb, hb = cv2.findContours(maskFinalb.copy(), cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_NONE)
        contsg, hg = cv2.findContours(maskFinalg.copy(), cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_NONE)

        cv2.drawContours(img, contsb, -1, (255, 0, 0), 3)
        cv2.drawContours(img, contsg, -1, (255, 0, 0), 3)


        if s == 1:
            cars1 = len(contsred) + len(contsb) + len(contsg);
            if i == 99:
            	if(cars1 == 0):
                    cars1 = 1
                print(cars1)
                ASerial.write(str(cars1).encode())
        elif s == 2:
            cars2 = len(contsred) + len(contsb) + len(contsg);
            if i == 99:
                if (cars2 == 0):
                    cars2 = 1
                print(cars2)
                ASerial.write(str(cars2).encode())
        elif s == 3:
            cars3 = len(contsred) + len(contsb) + len(contsg);
            if i == 99:
                if (cars3 == 0):
                    cars3 = 1
                print(cars3)
                ASerial.write(str(cars3).encode())
        elif s == 4:
            cars4 = len(contsred) + len(contsb) + len(contsg);
            if i == 99:
                if (cars4 == 0):
                    cars4 = 1
                print(cars4)
                ASerial.write(str(cars4).encode())

        cv2.drawContours(img, contsred, -1, (255, 0, 0), 3)
        cv2.imshow("maskred", maskred)
        cv2.imshow("maskgreen", maskg)
        cv2.imshow("maskblue", maskb)
        cv2.imshow("cam", img)
        cv2.waitKey(10)

x = 0
times = 0
while True:
   	if x == 0:
        ASerial.write("o".encode())
        x = 1

    if x == 2:
        ASerial.write("t".encode())
        x = 3

    if x == 4:
        ASerial.write("r".encode())
        x = 5

    if x == 6:
        ASerial.write("f".encode())
        x = 7


    msg = str((ASerial.readline()))
    print(msg)

    if "lane1" in msg:
        print("signal 1")
        capture(1)
        x = 2
        msg = " "

    if "lane2" in msg:
        print("signal 2")
        capture(2)
        x = 4
        msg = " "

    if "lane3" in msg:
        print("signal 3")
        capture(3)
        x = 6
        msg = " "

    if "lane4" in msg:
        print("signal 4")
        times = times + 1
        capture(4)
        x = 8
        msg = " "
        break