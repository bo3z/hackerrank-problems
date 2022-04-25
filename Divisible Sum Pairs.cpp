int divisibleSumPairs(int n, int k, vector<int> ar) {
    int ans = 0;
    for (int i = 0 ; i < n-1 ; i++) 
        for (int j = i + 1; j < n ; j++) 
            ans = ((ar[i] + ar[j]) % k) ? ans : ans+1;
    return ans;
}

