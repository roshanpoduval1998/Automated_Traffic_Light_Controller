# -*- coding: utf-8 -*-
from __future__ import unicode_literals
"""
Always install serial in PC by command pip install pySerial
and pip install serial
12 led 4 lane Traffic light switching. 
"""
import serial
from serial import Serial
import time
import random
import tkinter as tk
from tkinter import *

root = tk.Tk()
root.geometry("600x600")

ASerial= serial.Serial('COM6', 9600)

def operation():                 
        if (Lane1_count > Lane2_count) and (Lane1_count > Lane3_count) and (Lane1_count > Lane4_count):
                ASerial.write('1'.encode())
                a = 38
                b = 20
                c = 20
                d = 20
                for i in range(38):
                        label = tk.Label(root,text = "Lane 1 is open till seconds {}".format(a))
                        label.grid(row=0,column=0)
                        a-=1
                        time.sleep(1)
                        label.update()
                for i in range(20):
                        label = tk.Label(root,text = "Lane 2 is open till seconds {}".format(b))
                        label.grid(row=0,column=1)
                        b-=1
                        time.sleep(1)
                        label.update()
                for i in range(20):
                        label = tk.Label(root,text = "Lane 3 is open till seconds {}".format(c))
                        label.grid(row=1,column=0)
                        c-=1
                        time.sleep(1)
                        label.update()
                for i in range(20):
                        label = tk.Label(root,text = "Lane 4 is open till seconds {}".format(d))
                        label.grid(row=1,column=1)
                        d-=1
                        time.sleep(1)
                        label.update()

        elif (Lane2_count > Lane1_count) and (Lane2_count > Lane3_count) and (Lane2_count > Lane4_count):
                ASerial.write('2'.encode())
                a = 20
                b = 38
                c = 20
                d = 20
                for i in range(20):
                        label = tk.Label(root,text = "Lane 1 is open till seconds {}".format(a))
                        label.grid(row=0,column=0)
                        a-=1
                        time.sleep(1)
                        label.update()
                for i in range(38):
                        label = tk.Label(root,text = "Lane 2 is open till seconds {}".format(b))
                        label.grid(row=0,column=1)
                        b-=1
                        time.sleep(1)
                        label.update()
                for i in range(20):
                        label = tk.Label(root,text = "Lane 3 is open till seconds {}".format(c))
                        label.grid(row=1,column=0)
                        c-=1
                        time.sleep(1)
                        label.update()
                for i in range(20):
                        label = tk.Label(root,text = "Lane 4 is open till seconds {}".format(d))
                        label.grid(row=1,column=1)
                        d-=1
                        time.sleep(1)
                        label.update()

        elif (Lane3_count > Lane1_count) and (Lane3_count > Lane2_count) and (Lane3_count > Lane4_count):
                ASerial.write('3'.encode())
                a = 20
                b = 20
                c = 38
                d = 20
                for i in range(20):
                        label = tk.Label(root,text = "Lane 1 is open till seconds {}".format(a))
                        label.grid(row=0,column=0)
                        a-=1
                        time.sleep(1)
                        label.update()
                for i in range(20):
                        label = tk.Label(root,text = "Lane 2 is open till seconds {}".format(b))
                        label.grid(row=0,column=1)
                        b-=1
                        time.sleep(1)
                        label.update()
                for i in range(38):
                        label = tk.Label(root,text = "Lane 3 is open till seconds {}".format(c))
                        label.grid(row=1,column=0)
                        c-=1
                        time.sleep(1)
                        label.update()
                for i in range(20):
                        label = tk.Label(root,text = "Lane 4 is open till seconds {}".format(d))
                        label.grid(row=1,column=1)
                        d-=1
                        time.sleep(1)
                        label.update()

        elif (Lane4_count > Lane1_count) and (Lane4_count > Lane3_count) and (Lane4_count > Lane1_count):
                ASerial.write('4'.encode())
                a = 20
                b = 20
                c = 20
                d = 38
                for i in range(20):
                        label = tk.Label(root,text = "Lane 1 is open till seconds {}".format(a))
                        label.grid(row=0,column=0)
                        a-=1
                        time.sleep(1)
                        label.update()
                for i in range(20):
                        label = tk.Label(root,text = "Lane 2 is open till seconds {}".format(b))
                        label.grid(row=0,column=1)
                        b-=1
                        time.sleep(1)
                        label.update()
                for i in range(20):
                        label = tk.Label(root,text = "Lane 3 is open till seconds {}".format(c))
                        label.grid(row=1,column=0)
                        c-=1
                        time.sleep(1)
                        label.update()
                for i in range(38):
                        label = tk.Label(root,text = "Lane 4 is open till seconds {}".format(d))
                        label.grid(row=1,column=1)
                        d-=1
                        time.sleep(1)
                        label.update()
                        
        elif ((Lane1_count == Lane2_count))>((Lane3_count) and (Lane4_count)):
                ASerial.write('5'.encode())
                a = 38
                b = 38
                c = 20
                d = 20
                for i in range(38):
                        label = tk.Label(root,text = "Lane 1 is open till seconds {}".format(a))
                        label.grid(row=0,column=0)
                        a-=1
                        time.sleep(1)
                        label.update()
                for i in range(38):
                        label = tk.Label(root,text = "Lane 2 is open till seconds {}".format(b))
                        label.grid(row=0,column=1)
                        b-=1
                        time.sleep(1)
                        label.update()
                for i in range(20):
                        label = tk.Label(root,text = "Lane 3 is open till seconds {}".format(c))
                        label.grid(row=1,column=0)
                        c-=1
                        time.sleep(1)
                        label.update()
                for i in range(20):
                        label = tk.Label(root,text = "Lane 4 is open till seconds {}".format(d))
                        label.grid(row=1,column=1)
                        d-=1
                        time.sleep(1)
                        label.update()

        elif ((Lane1_count == Lane3_count))>((Lane2_count) and (Lane4_count)):
                ASerial.write('6'.encode())
                a = 38
                b = 20
                c = 38
                d = 20
                for i in range(38):
                        label = tk.Label(root,text = "Lane 1 is open till seconds {}".format(a))
                        label.grid(row=0,column=0)
                        a-=1
                        time.sleep(1)
                        label.update()
                for i in range(20):
                        label = tk.Label(root,text = "Lane 2 is open till seconds {}".format(b))
                        label.grid(row=0,column=1)
                        b-=1
                        time.sleep(1)
                        label.update()
                for i in range(38):
                        label = tk.Label(root,text = "Lane 3 is open till seconds {}".format(c))
                        label.grid(row=1,column=0)
                        c-=1
                        time.sleep(1)
                        label.update()
                for i in range(20):
                        label = tk.Label(root,text = "Lane 4 is open till seconds {}".format(d))
                        label.grid(row=1,column=1)
                        d-=1
                        time.sleep(1)
                        label.update()

        elif ((Lane1_count == Lane4_count))>((Lane2_count) and (Lane3_count)):
                ASerial.write('7'.encode())
                a = 38
                b = 20
                c = 20
                d = 38
                for i in range(38):
                        label = tk.Label(root,text = "Lane 1 is open till seconds {}".format(a))
                        label.grid(row=0,column=0)
                        a-=1
                        time.sleep(1)
                        label.update()
                for i in range(20):
                        label = tk.Label(root,text = "Lane 2 is open till seconds {}".format(b))
                        label.grid(row=0,column=1)
                        b-=1
                        time.sleep(1)
                        label.update()
                for i in range(20):
                        label = tk.Label(root,text = "Lane 3 is open till seconds {}".format(c))
                        label.grid(row=1,column=0)
                        c-=1
                        time.sleep(1)
                        label.update()
                for i in range(38):
                        label = tk.Label(root,text = "Lane 4 is open till seconds {}".format(d))
                        label.grid(row=1,column=1)
                        d-=1
                        time.sleep(1)
                        label.update()

        elif ((Lane3_count == Lane2_count))>((Lane1_count) and (Lane4_count)):
                ASerial.write('8'.encode())
                a = 20
                b = 38
                c = 38
                d = 20
                for i in range(38):
                        label = tk.Label(root,text = "Lane 1 is open till seconds {}".format(a))
                        label.grid(row=0,column=0)
                        a-=1
                        time.sleep(1)
                        label.update()
                for i in range(38):
                        label = tk.Label(root,text = "Lane 2 is open till seconds {}".format(b))
                        label.grid(row=0,column=1)
                        b-=1
                        time.sleep(1)
                        label.update()
                for i in range(38):
                        label = tk.Label(root,text = "Lane 3 is open till seconds {}".format(c))
                        label.grid(row=1,column=0)
                        c-=1
                        time.sleep(1)
                        label.update()
                for i in range(20):
                        label = tk.Label(root,text = "Lane 4 is open till seconds {}".format(d))
                        label.grid(row=1,column=1)
                        d-=1
                        time.sleep(1)
                        label.update()

        elif ((Lane4_count == Lane2_count))>((Lane1_count) and (Lane3_count)):
                ASerial.write('9'.encode())
                a = 20
                b = 38
                c = 20
                d = 38
                for i in range(20):
                        label = tk.Label(root,text = "Lane 1 is open till seconds {}".format(a))
                        label.grid(row=0,column=0)
                        a-=1
                        time.sleep(1)
                        label.update()
                for i in range(38):
                        label = tk.Label(root,text = "Lane 2 is open till seconds {}".format(b))
                        label.grid(row=0,column=1)
                        b-=1
                        time.sleep(1)
                        label.update()
                for i in range(20):
                        label = tk.Label(root,text = "Lane 3 is open till seconds {}".format(c))
                        label.grid(row=1,column=0)
                        c-=1
                        time.sleep(1)
                        label.update()
                for i in range(38):
                        label = tk.Label(root,text = "Lane 4 is open till seconds {}".format(d))
                        label.grid(row=1,column=1)
                        d-=1
                        time.sleep(1)
                        label.update()

        elif ((Lane3_count == Lane4_count))>((Lane2_count) and (Lane1_count)):
                ASerial.write('10'.encode())
                a = 20
                b = 20
                c = 38
                d = 38
                for i in range(20):
                        label = tk.Label(root,text = "Lane 1 is open till seconds {}".format(a))
                        label.grid(row=0,column=0)
                        a-=1
                        time.sleep(1)
                        label.update()
                for i in range(20):
                        label = tk.Label(root,text = "Lane 2 is open till seconds {}".format(b))
                        label.grid(row=0,column=1)
                        b-=1
                        time.sleep(1)
                        label.update()
                for i in range(38):
                        label = tk.Label(root,text = "Lane 3 is open till seconds {}".format(c))
                        label.grid(row=1,column=0)
                        c-=1
                        time.sleep(1)
                        label.update()
                for i in range(38):
                        label = tk.Label(root,text = "Lane 4 is open till seconds {}".format(d))
                        label.grid(row=1,column=1)
                        d-=1
                        time.sleep(1)
                        label.update()

        elif (Lane1_count == Lane2_count == Lane3_count) > (Lane4_count):
                ASerial.write('11'.encode())
                a = 38
                b = 38
                c = 38
                d = 20
                for i in range(38):
                        label = tk.Label(root,text = "Lane 1 is open till seconds {}".format(a))
                        label.grid(row=0,column=0)
                        a-=1
                        time.sleep(1)
                        label.update()
                for i in range(38):
                        label = tk.Label(root,text = "Lane 2 is open till seconds {}".format(b))
                        label.grid(row=0,column=1)
                        b-=1
                        time.sleep(1)
                        label.update()
                for i in range(38):
                        label = tk.Label(root,text = "Lane 3 is open till seconds {}".format(c))
                        label.grid(row=1,column=0)
                        c-=1
                        time.sleep(1)
                        label.update()
                for i in range(20):
                        label = tk.Label(root,text = "Lane 4 is open till seconds {}".format(d))
                        label.grid(row=1,column=1)
                        d-=1
                        time.sleep(1)
                        label.update()

        elif (Lane1_count == Lane2_count == Lane4_count) > (Lane3_count):
                ASerial.write('12'.encode())
                a = 38
                b = 38
                c = 20
                d = 38
                for i in range(38):
                        label = tk.Label(root,text = "Lane 1 is open till seconds {}".format(a))
                        label.grid(row=0,column=0)
                        a-=1
                        time.sleep(1)
                        label.update()
                for i in range(38):
                        label = tk.Label(root,text = "Lane 2 is open till seconds {}".format(b))
                        label.grid(row=0,column=1)
                        b-=1
                        time.sleep(1)
                        label.update()
                for i in range(20):
                        label = tk.Label(root,text = "Lane 3 is open till seconds {}".format(c))
                        label.grid(row=1,column=0)
                        c-=1
                        time.sleep(1)
                        label.update()
                for i in range(38):
                        label = tk.Label(root,text = "Lane 4 is open till seconds {}".format(d))
                        label.grid(row=1,column=1)
                        d-=1
                        time.sleep(1)
                        label.update()

        elif (Lane1_count == Lane4_count == Lane3_count) > (Lane2_count):
                ASerial.write('13'.encode())
                a = 38
                b = 20
                c = 38
                d = 38
                for i in range(38):
                        label = tk.Label(root,text = "Lane 1 is open till seconds {}".format(a))
                        label.grid(row=0,column=0)
                        a-=1
                        time.sleep(1)
                        label.update()
                for i in range(20):
                        label = tk.Label(root,text = "Lane 2 is open till seconds {}".format(b))
                        label.grid(row=0,column=1)
                        b-=1
                        time.sleep(1)
                        label.update()
                for i in range(38):
                        label = tk.Label(root,text = "Lane 3 is open till seconds {}".format(c))
                        label.grid(row=1,column=0)
                        c-=1
                        time.sleep(1)
                        label.update()
                for i in range(38):
                        label = tk.Label(root,text = "Lane 4 is open till seconds {}".format(d))
                        label.grid(row=1,column=1)
                        d-=1
                        time.sleep(1)
                        label.update()

        elif (Lane4_count == Lane2_count == Lane3_count) > (Lane1_count):
                ASerial.write('14'.encode())
                a = 20
                b = 38
                c = 38
                d = 38
                for i in range(20):
                        label = tk.Label(root,text = "Lane 1 is open till seconds {}".format(a))
                        label.grid(row=0,column=0)
                        a-=1
                        time.sleep(1)
                        label.update()
                for i in range(38):
                        label = tk.Label(root,text = "Lane 2 is open till seconds {}".format(b))
                        label.grid(row=0,column=1)
                        b-=1
                        time.sleep(1)
                        label.update()
                for i in range(38):
                        label = tk.Label(root,text = "Lane 3 is open till seconds {}".format(c))
                        label.grid(row=1,column=0)
                        c-=1
                        time.sleep(1)
                        label.update()
                for i in range(38):
                        label = tk.Label(root,text = "Lane 4 is open till seconds {}".format(d))
                        label.grid(row=1,column=1)
                        d-=1
                        time.sleep(1)
                        label.update()

        elif (Lane1_count == Lane2_count == Lane3_count == Lane4_count):
                ASerial.write('15'.encode())
                a = 38
                b = 38
                c = 38
                d = 38
                for i in range(38):
                        label = tk.Label(root,text = "Lane 1 is open till seconds {}".format(a))
                        label.grid(row=0,column=0)
                        a-=1
                        time.sleep(1)
                        label.update()
                for i in range(38):
                        label = tk.Label(root,text = "Lane 2 is open till seconds {}".format(b))
                        label.grid(row=0,column=1)
                        b-=1
                        time.sleep(1)
                        label.update()
                for i in range(38):
                        label = tk.Label(root,text = "Lane 3 is open till seconds {}".format(c))
                        label.grid(row=1,column=0)
                        c-=1
                        time.sleep(1)
                        label.update()
                for i in range(38):
                        label = tk.Label(root,text = "Lane 4 is open till seconds {}".format(d))
                        label.grid(row=1,column=1)
                        d-=1
                        time.sleep(1)
                        label.update()

        elif (Lane1_count != Lane2_count != Lane3_count != Lane4_count):
                ASerial.write('16'.encode())
                a = 20
                b = 20
                c = 20
                d = 20
                for i in range(20):
                        label = tk.Label(root,text = "Lane 1 is open till seconds {}".format(a))
                        label.grid(row=0,column=0)
                        a-=1
                        time.sleep(1)
                        label.update()
                for i in range(20):
                        label = tk.Label(root,text = "Lane 2 is open till seconds {}".format(b))
                        label.grid(row=0,column=1)
                        b-=1
                        time.sleep(1)
                        label.update()
                for i in range(20):
                        label = tk.Label(root,text = "Lane 3 is open till seconds {}".format(c))
                        label.grid(row=1,column=0)
                        c-=1
                        time.sleep(1)
                        label.update()
                for i in range(20):
                        label = tk.Label(root,text = "Lane 4 is open till seconds {}".format(d))
                        label.grid(row=1,column=1)
                        d-=1
                        time.sleep(1)
                        label.update()

for i in range(20):
        list = [6,7,8,9,1,3,5]
        Lane1_count = random.choice(list)
        Lane2_count = random.choice(list)
        Lane3_count = random.choice(list)
        Lane4_count = random.choice(list)
        if i==0:
                k = 30
                print("Traffic system initializing in 30 seconds")
                for i in range(30):
                        print("seconds :",format(k))
                        k-=1
                        time.sleep(.1)
        if i>=0:
                print("Traffic system started")
                print("Lane 1 vehicle density : {}".format(Lane1_count))
                print("Lane 2 vehicle density : {}".format(Lane2_count))
                print("Lane 3 vehicle density : {}".format(Lane3_count))
                print("Lane 4 vehicle density : {}".format(Lane4_count))
                operation()
                print("Wait lane Switching in process")


root.mainloop()
