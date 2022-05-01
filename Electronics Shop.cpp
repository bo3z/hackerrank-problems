int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int ans = -1;
    for (auto &k : keyboards) 
        for (auto &d : drives) 
            if (((k+d) > ans) && ((k+d) <= b))  ans = k+d;
    return ans;
}

