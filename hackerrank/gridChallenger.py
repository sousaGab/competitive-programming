#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'gridChallenge' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING_ARRAY grid as parameter.
#

def gridChallenge(grid):
    # Write your code here
    g = []
    flag = True
    sz = len(grid[0])
    for x in grid:
        sorted_s = sorted(x)
        g.append(''.join(sorted_s))
        
    
    for j in range(sz):
        str1 = ''
        for i in range(len(g)): str1 += g[i][j]
        str2 = ''.join(sorted(str1))
        if str1 != str2: flag = False
            
    if flag : return 'YES'
    else: return 'NO'

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        grid = []

        for _ in range(n):
            grid_item = input()
            grid.append(grid_item)

        result = gridChallenge(grid)

        fptr.write(result + '\n')

    fptr.close()
