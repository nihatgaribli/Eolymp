n , m = map(int , input().split())

matris = [[i + j * m + 1 for i in range(m)] for j in range(n)]
for row in matris:
    print(*row)