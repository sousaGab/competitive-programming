N = int(input())
A = list(input().split())
arr = [0]*N
d = {}
nxt = 0

for i in range(1, N+1):
    x = int(A[i-1])
    if x == -1 :
        arr[0] = i
    else :
        d[x] = i

for i in range(1, N):    
    arr[i] = d[arr[i-1]]

print(" ".join(map(str, arr)), end="")