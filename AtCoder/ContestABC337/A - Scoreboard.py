N = int(input())

x,y= 0,0

for _ in range(0, N):
    
    a,b = input().split()
    
    x += int(a)
    y += int(b)
    
if x > y :
    print('Takahashi')
elif y> x:
    print('Aoki')
else:
    print('Draw')