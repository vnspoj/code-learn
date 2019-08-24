def remainFib(n):
    n = int(n)
    f1, f2 = 5, 8
    j, gj = 1, 4
    while j < n:
        l = f1 + 1
        r = f2 - 1
        m = r - l + 1
        nj = j + m
        if nj >= n:
            j = n
            gj = r - (nj - n)
        else:
            j = nj
            gj = r
        tmp = f2
        f2 += f1
        f1 = tmp

    return gj


print(remainFib(3))
