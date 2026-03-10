from yogi import scan

n = scan(int)
while n is not None:
    print("true" if es_multiple_3(n) else "false")
    n = scan(int)
