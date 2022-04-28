int maximizingXor(int l, int r) {
    int m = 0;
    for (int a = l ; a <= r; a++){
        for (int b = a ; b <= r ; b++) {
            if ((a^b)>m) m = a^b;
        }
    }
    return m;
}

