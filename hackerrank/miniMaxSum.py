#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'miniMaxSum' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def miniMaxSum(arr):
    arr.sort()
    sum = 0
    
    for x in arr:
        sum +=x
    
    maxSum = sum - arr[0]
    minSum = sum - arr[4]
    
    print(f"{minSum} {maxSum}")

if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
