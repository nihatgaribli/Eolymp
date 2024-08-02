n = int(input())
lst = []
for i in range(0,n):
    m = int(input())
    if m % 2 == 0:
        lst.append(m)
if len(lst) == 0:
    print("NO")
else:
    print(len(lst),"\n",*lst[::-1])