#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'lonelyinteger' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY a as parameter.
#

def lonelyinteger(a):
    
    dic = dict()
    
    for x in a:
        if x in dic:
            dic[x] += 1
        else :
            dic[x] = 1

    sorted_arr = sorted(dic.items(),key=lambda x:x[1])
    
    return sorted_arr[0][0]    


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    result = lonelyinteger(a)

    fptr.write(str(result) + '\n')

    fptr.close()
