from yogi import *

n1 = scan(int)
while n1 is not None:
    v1 = [read(float) for i in range(0, n1)]
    n2 = read(int)
    v2 = [read(float) for i in range(0, n2)]
    res = diferencia(v1, v2)
    n3 = len(res)
    print(n3)
    for x in res:
        print(" {0:.4f}".format(x), end='')
    print('\n')
    for i in range(0, 200):
        res2 = diferencia(v1, v2)
        if res2 != res:
            print("Resultats diferents amb la mateixa entrada!")
    n1 = scan(int)
