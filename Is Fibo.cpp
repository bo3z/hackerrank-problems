typedef unsigned long long ull;
string isFibo(ull n) {
    ull a = 0;
    ull b = 1;
    ull c = a+b;
    while(c <= n) {
        if (c==n) return "IsFibo";
        a = b;
        b = c;
        c = a+b;
    }
    return "IsNotFibo";
}

