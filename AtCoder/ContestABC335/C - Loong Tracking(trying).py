N, Q = input().split()
N = int(N)
Q = int(Q)


arr = list([i,0] for i in range(1, N+1))

h = 0

for _ in range(0, Q):
        
    q, v = input().split()
    
    if q == '1' :
        nxt = (h+N-1)%N
        if v == 'U':
            arr[nxt][1] = arr[h][1] + 1
            arr[nxt][0] = arr[h][0]
            
        elif v == 'D':
            arr[nxt][1] = arr[h][1] - 1
            arr[nxt][0] = arr[h][0]
            
        elif v == 'R':
            arr[nxt][0]  = arr[h][0] + 1
            arr[nxt][1] = arr[h][1]
            
        elif v == 'L':
            arr[nxt][0] = arr[h][0] - 1
            arr[nxt][1] = arr[h][1]
        h = nxt
    else:
        
        p = (int(v) + (h+N-1))%N
        print(f'{arr[p][0]} {arr[p][1]}')
    
