#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'plusMinus' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def plusMinus(arr):
    # Write your code here
    ps = ng = zr = 0
    for x in arr :
        if x > 0 :
            ps += 1
        elif x < 0 :
            ng += 1
        else:
            zr += 1
    
    ps = "{:.4f}".format(ps/len(arr))
    ng = "{:.4f}".format(ng/len(arr))
    zr = "{:.4f}".format(zr/len(arr))
    
    print(ps+'\n'+ng+'\n'+zr+'\n')
        
if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
