int lonelyinteger(vector<int> a) {
    sort(a.begin(), a.end());
    for (int i = 0 ; i < a.size()-1; i+=2) {
        if (a[i]!=a[i+1]) return a[i];
    }
    return a[a.size()-1];
}
