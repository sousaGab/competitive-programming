N = int(input())

for x in range(0,N+1):
    for y in range(0,N+1):
        for z in range(0,N+1):
            if (x+y+z <= N):
                print(f'{x} {y} {z}')

    