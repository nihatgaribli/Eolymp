a, b, c = map(int , input().split())
if a % 2 == 0 or b % 2 == 0 or c % 2 == 0:
    if a % 2 == 1 or b % 2 ==1 or c % 2 ==1:
        print("Yes")
    else:
        print("No")
else:
    print("No")