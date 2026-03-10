from yogi import *

m, n = scan(int), scan(int)
while m is not None and n is not None:
    v = []
    for i in range(0, n):
        v.append(read(float))
    print(posicio_maxim(v, m))
    m, n = scan(int), scan(int)
