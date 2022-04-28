def connectingTowns(n, routes):
    p = 1
    for r in routes:
        p = p*r
    return p % 1234567

