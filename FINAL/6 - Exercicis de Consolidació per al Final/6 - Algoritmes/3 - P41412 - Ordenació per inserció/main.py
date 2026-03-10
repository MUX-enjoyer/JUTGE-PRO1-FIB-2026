from yogi import *

for n in tokens(int):
    v = [read(float) for i in range(0, n)]
    ordena_per_insercio(v)
    for x in v:
        print(" {0:.4f}".format(x), end='')
    print()
