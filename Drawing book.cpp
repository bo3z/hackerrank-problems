int pageCount(int n, int p) {
    int b = p/2;
    int e = (n%2) ? (n-p)/2 : (n-p+1)/2;
    return min(b, e);
}

