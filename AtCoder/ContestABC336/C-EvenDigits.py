def b5(x):
    number = ''
    out = ''
    
    while x >= 5:
        number += str(x%5)
        x = x//5
        
    number += str(x%5)
    for s in reversed(number):
        out+=s
    return out


n = int(input())
s = int(b5(n-1))
str_n = str(s)
ans = ''
evens = {
    '0': '0',
    '1': '2',
    '2': '4',
    '3': '6',
    '4': '8',
}

for s in str_n:
    ans += evens[s]

print(ans)


