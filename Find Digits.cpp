int findDigits(int n) {
    uint8_t c = 0;
    int nCp = n;
    while(n>0) {
        uint8_t d = n%10;
        if (d!=0 && (nCp%d)==0) c++;
        n/=10;
    }
    return c;
}

