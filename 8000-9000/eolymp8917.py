n = int(input())
z=0
while 2**z < n:
    z+=1
for i in range(1,z):
    print(2**i)