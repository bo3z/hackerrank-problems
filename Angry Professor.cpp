string angryProfessor(int k, vector<int> a) {
    int p = 0;
    for (auto &x : a) {
        if (x<=0) p++;
    }
    return (p>=k) ? "NO" : "YES";
}
