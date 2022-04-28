string kangaroo(int x1, int v1, int x2, int v2) {
    bool integer = !((x1-x2)%(v2-v1));
    bool positive = ((double)(x1-x2)/(double)(v2-v1)) >= 0;
    return (integer && positive) ? "YES" : "NO";
}

