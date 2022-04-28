int birthday(vector<int> s, int d, int m) {
    int sol = 0;
    for (int i = 0 ; i < s.size() ; i++) {
        int j = i;
        int sum = 0;
        while( ((j-i) < m) && (j < s.size()) ) {
            sum+=s[j];
            ++j;
        }
        if (sum==d) sol++;
    }
    return sol;
}
