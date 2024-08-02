a,b,c,x,y = map(int, input().split())
lst1 = [a,b,c]
lst2 = [x,y]
lst1.sort()
lst2.sort()
if lst1[0] <= lst2[0]:
    if lst1[1] <= lst2[1]:
        print("YES")
    else:
        print("NO")
else:
    print("NO")