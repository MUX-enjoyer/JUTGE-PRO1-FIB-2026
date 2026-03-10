from yogi import scan

a, b = scan(int), scan(int)
while a is not None and b is not None:
    print(mcd(a, b))
    a, b = scan(int), scan(int)
