from yogi import scan

n = scan(int)
while n is not None:
    print("true" if es_primer_perfecte(n) else "false")
    n = scan(int)
