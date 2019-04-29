# -*- coding: utf-8 -*-
from __future__ import unicode_literals
import cv2
import numpy as np

lowerBoundb = np.array([100, 100, 102])
upperBoundb = np.array([130, 255, 255])

lowerBoundg = np.array([70, 50, 51])
upperBoundg = np.array([90, 255, 255])

cam = cv2.VideoCapture(1)
kernelOpen = np.ones((5, 5))
kernelClose = np.ones((20, 20))

while True:
    ret, img = cam.read()
    img = cv2.resize(img, (340, 220))

    # convert BGR to HSV
    imgHSV = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
    # create the Mask
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
    print("blue")
    print(len(contsb))
    print("green")
    cv2.drawContours(img, contsg, -1, (255, 0, 0), 3)
    print(len(contsg))

    cv2.imshow("maskb", maskb)
    cv2.imshow("maskg", maskg)
    cv2.imshow("cam", img)
    cv2.waitKey(10)