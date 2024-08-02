n = int(input())
l = []
s = []
for i in range(0,n):
    t = int(input())
    l.append(t)
s = sorted(l)
for i in range(n-1,-1,-1):
    for j in range(0,n):
        if(s[i]==l[j]):
            print(j+1)
            l[j] = 10000
            break