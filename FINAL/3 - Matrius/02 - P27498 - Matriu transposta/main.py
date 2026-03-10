from yogi import read, tokens

for n in tokens(int):
    m = [[read(int) for _ in range(n)] for _ in range(n)]
    transposa(m)
    for i in range(n):
        print(*m[i], '')
    print()
