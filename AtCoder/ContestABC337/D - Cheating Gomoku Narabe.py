from collections import Counter

INF = 1<<63

def row_solve(row):
    w = len(row)
    result = INF
    c = Counter(row[:K])
    
    for i in range(w-K+1):
        
        if c['x'] == 0:
            result = min(result, c['.'])
        
        if i < w - K:
            c[row[i]] -=1
            c[row[i+K]] +=1
        
    return result  

def solve(T):
    w = len(T[0])
    if w < K:
        return INF
    result = INF
    for row in T:
        result = min(result, row_solve(row))
    return result

H, W, K = map(int, input().split())
S = [input() for _ in range(H)]
S2 = [list(a) for a in zip(*S)]

ans = min(solve(S), solve(S2))

if ans == INF:
    print(-1)
else:
    print(ans)
