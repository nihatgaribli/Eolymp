n = int(input())
lst = []
for i in range(0,n):
    k = int(input())
    lst.append(k)
print(*lst[::-1])