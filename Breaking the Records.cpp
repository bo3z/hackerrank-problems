vector<int> breakingRecords(vector<int> scores) {
    vector<int> ans(2, 0);
    int min = scores[0];
    int max = scores[0];
    for (int i = 1 ; i < scores.size() ; i++) {
        if (scores[i] > max) {
            ans[0]++;
            max = scores[i];
        }
        if (scores[i] < min) { 
            ans[1]++;
            min = scores[i]; 
        }
    }
    return ans;
}

