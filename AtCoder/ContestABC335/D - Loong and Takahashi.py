N = int(input())

grid = list([0]*N for _ in range(0,N))

grid[(N)//2][(N)//2] = 'T'

s1 = 1
s2 = 1
s3 = 2

count = 1

p = [(N)//2, (N)//2]

while (count<(N**2)):
    
    # s1
    p[0] += 1
    grid[p[0]][p[1]] = count
    count +=1
    
    # s2
    for t in range(0,s2):
        p[1] += 1
        grid[p[0]][p[1]] = count
        count +=1
    
    # s3_1
    for t in range(0,s3):
        p[0] -= 1
        grid[p[0]][p[1]] = count
        count +=1
    
    # s3_2
    for t in range(0,s3):
        p[1] -= 1
        grid[p[0]][p[1]] = count
        count +=1
    
    # s3_3
    for t in range(0,s3):
        p[0] += 1
        grid[p[0]][p[1]] = count
        count +=1
        
    s2+=2
    s3+=2
    
for i in range(0,N):
    line = ''
    for j in range(0,N):
        line += f'{grid[i][j]} '
    print(line[:len(line)-1])