int diagonalDifference(vector<vector<int>> arr) {
    int d = 0;
    for(int i = 0 ; i < arr.size() ; i++)
        d+=(arr[i][i]-arr[i][arr.size()-1-i]);
    return (d>0) ? d : -d;
}

