import cv2
import numpy as np
import serial
#from serial import Serial  # Serial imported for Serial communication
import time  # Required to use delay functions


ASerial = serial.Serial('COM112', 9600)  # Create Serial port object called arduinoSerialData
time.sleep(2)  # wait for 2 seconds for the communication to get established

lowerBound = np.array([0, 99, 100])
upperBound = np.array([10, 255, 255])

cam = cv2.VideoCapture(1)
kernelOpen = np.ones((5, 5))
kernelClose = np.ones((20, 20))
font = cv2.FONT_HERSHEY_SIMPLEX
#font = cv2.InitFont(cv2.CV_FONT_HERSHEY_SIMPLEX, 2, 0.5, 0, 3, 1)

while True:
    ret, img = cam.read()
    img = cv2.resize(img, (340, 220))

    # convert BGR to HSV
    imgHSV = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
    # create the Mask
    mask = cv2.inRange(imgHSV, lowerBound, upperBound)
    # morphology
    maskOpen = cv2.morphologyEx(mask, cv2.MORPH_OPEN, kernelOpen)
    maskClose = cv2.morphologyEx(maskOpen, cv2.MORPH_CLOSE, kernelClose)

    maskFinal = maskClose
    conts, h = cv2.findContours(maskFinal.copy(), cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_NONE)

    cv2.drawContours(img, conts, -1, (255, 0, 0), 3)
    print(len(conts))

    cv2.imshow("mask", mask)
    cv2.imshow("cam", img)
    cv2.waitKey(10)