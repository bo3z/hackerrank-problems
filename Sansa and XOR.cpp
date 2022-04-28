int sansaXor(vector<int> arr) {
    if ((arr.size()%2)==0) return 0;
    else {
        int res = arr[0];
        for (int i = 2 ; i < arr.size() ; i+=2)
            res = res ^ arr[i];
        return res;
    };
}

