S = input()

B = False
C = False

ans = 'Yes'

for s in S:
    
    if s == 'A' and (C or B):
        ans = 'No'
    
    if s == 'B' and C:
        ans = 'No'
            
    if s == 'B':
        B = True
        
    if s == 'C':
        C = True

print(ans)