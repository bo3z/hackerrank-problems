int migratoryBirds(vector<int> arr) {
    vector<int> count(5, 0);
    for(auto &c : arr) {
        count[c-1]++;
    }
    
    int max = count[0];
    int id = 1;
    for (int i = 1 ; i < 5 ; i++) {
        if (count[i]>max) {
            max = count[i];
            id = i+1;
        } 
    }
    return id;
}

