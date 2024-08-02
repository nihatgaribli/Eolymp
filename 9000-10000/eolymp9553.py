lst1 = list(map(int, input().split()))
lst2 = list(map(int, input().split()))

lst3 = lst1 + lst2

print(*sorted(lst3))