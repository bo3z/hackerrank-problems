int sockMerchant(int n, vector<int> ar) {
    map<int, int> socks;
    for(auto &s : ar) {
        if (socks.find(s)!=socks.end()) {
            socks[s]++;
        } else {
            socks[s]=1;
        }
    }
    
    int sol = 0;
    for (auto &s : socks) {
        sol+=s.second/2;
    }
    return sol;
}

