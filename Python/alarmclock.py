# Get the time from the ser that they want an alarm to go off
# make sure that time is a valid time
# trigger a sequence at the right time
# make the alarm either open a page or play a sound (.wav file?)

import os
import datetime
import math

def checkalarmtime(alarmtimeinput):
    if int(alarmtimeinput[0:2]) > 24 or int(alarmtimeinput[2:4]) > 59:
        return False
    else:
        return True
    

timeset = input("What time do you want the alarm set for, in military time? ")
while checkalarmtime(timeset) == False:
    print("You didn't enter a valid time! Try again!")
    timeset = input("What time do you want the alarm set for, in military time? ")

