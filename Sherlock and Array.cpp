typedef unsigned long long ull;
string balancedSums(vector<int> arr) {
    ull ls = 0;
    ull rs = 0;
    for (auto &x : arr)
        rs+=x;
        
    for (int i = 0 ; i < arr.size() ; i++) {
        rs -= arr[i];
        if (rs == ls)
            return "YES";
        ls += arr[i];
    }
    return "NO";
}

