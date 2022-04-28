
int getTotalX(vector<int> a, vector<int> b) {
    sort(b.begin(), b.end());
    vector<int> divB(b[b.size()-1]+1, 0);
    
    for (int i = 1 ; i < divB.size() ; i++) {
        for(auto &bb : b) {
            if(!(bb%i)) divB[i-1]++;
        }
    }
     
    int sol = 0;
    for(int i = 1 ; i < divB.size() ; i++) {
        bool good = true;
        for (auto &aa : a) {
            if (divB[i-1]!=b.size() || (i%aa)) {
                good = false;
                break;
            }
        }
        if (good) sol++;
    }
    return sol;
}

