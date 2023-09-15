#!/bin/python3

import math
import os
import random
import re
import sys

from datetime import datetime

#
# Complete the 'timeConversion' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def strClock(x):
    if x < 10 :
        return f"0{x}"
    return str(x)

def timeConversion(s):
    # Write your code here
    
    # Parse the time string into a datetime object
    #t = datetime.strptime(s, '%I:%M:%S%p')
    # Format the datetime object into a 24-hour time string
    #return t.strftime('%H:%M:%S')
    
    sx = s[-2:]   
    hour = int(s[:2])
    
    if hour == 12 :
        if sx == 'AM':
            s = f"00{s[2:]}"
        
        return s[:-2]
    
    if sx == 'AM':
        return s[:-2]
    
    s = f"{strClock(hour+12)}{s[2:-2]}"
    
    return s

if __name__ == '__main__':
    
    s = input()

    result = timeConversion(s)

    print(result + '\n')

