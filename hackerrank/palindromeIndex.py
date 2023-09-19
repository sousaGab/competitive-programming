#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'palindromeIndex' function below.
#
# The function is expected to return an INTEGER.
# The function accepts STRING s as parameter.
#

def palindromeIndex(s):
    
    def check(sub_str):
        return sub_str == sub_str[::-1]

    if s == s[::-1]:
        return -1

    for i in range(len(s) // 2):
        if s[i] != s[-(i + 1)]:
            if check(s[i + 1:len(s) - i]):
                return i
            elif check(s[i:len(s) - i - 1]):
                return len(s) - i - 1

    return -1



if __name__ == '__main__':

    q = int(input().strip())

    for q_itr in range(q):
        s = input()

        result = palindromeIndex(s)

        print(str(result) + '\n')
