n = bin(int(input()))
str = str(n)
ans = 0

for x in reversed(str):
    if x != '0' :
        break
    else:
        ans +=1

print(ans)