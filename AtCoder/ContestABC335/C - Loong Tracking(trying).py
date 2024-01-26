from collections import deque

N, Q = input().split()
N = int(N)
Q = int(Q)

l1 = list(i for i in range(1, N+1))
l2 = list(0 for _ in range(1, N+1))

x = deque(l1)
y = deque(l2)

for _ in range(0, Q):
    
    q, v = input().split()
    
    if q == '1' :
        if v == 'U':
            x.appendleft(x[0])
            y.appendleft(y[0]+1)
            
        elif v == 'D':
            x.appendleft(x[0])
            y.appendleft(y[0]-1)
            
        elif v == 'R':
            x.appendleft(x[0]+1)
            y.appendleft(y[0])
            
        elif v == 'L':
            x.appendleft(x[0]-1)
            y.appendleft(y[0])
            
        x.pop()
        y.pop()

    else:
        print(f'{x[int(v)-1]} {y[int(v)-1]}')
    
