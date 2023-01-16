v = input('')
n = float(v)
sn ="{:.4E}".format(n)

if v[0] == '+' or (n >=0 and v[0] != '-') :
    print('+'+ sn) 
else: 
    print(sn)