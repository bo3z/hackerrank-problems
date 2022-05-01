def fibonacciModified(t1, t2, n):
    for i in range(3, n+1):
        tn = t1 + t2*t2
        t1 = t2
        t2 = tn
    return tn

