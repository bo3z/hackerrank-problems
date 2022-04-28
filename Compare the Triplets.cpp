vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> ans={0,0};
    for (int i=0; i<3; i++){
        if (a[i]>b[i]){
            ans[0]++;
        }
        if (b[i]>a[i]){
            ans[1]++;
        }
    }
    return ans;
}

