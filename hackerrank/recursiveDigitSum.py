#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'superDigit' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. STRING n
#  2. INTEGER k
#

def superDigit(n, k):
    
    arr = list(n)
    sd = 0
    for x in arr:
        sd += ord(x) - ord('1') +1
         
    n = str(sd*k)
    
    while(len(n)>1):
        k-=1
        arr = list(n)
        sd = 0
        for x in arr:
            sd += ord(x) - ord('1') +1 
        n = str(sd)
                    
    return sd

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = first_multiple_input[0]

    k = int(first_multiple_input[1])

    result = superDigit(n, k)

    fptr.write(str(result) + '\n')

    fptr.close()
