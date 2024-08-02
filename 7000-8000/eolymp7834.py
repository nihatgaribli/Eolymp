n = int(input())
lst = []
for i in range(0,n):
    m = int(input())
    lst.append(m)
Max1 = max(lst)
lst.remove(Max1)
Max2 = max(lst)
print(Max1+Max2)