int pickingNumbers(vector<int> a) {
    // First, sort array in ascending order
    sort(a.begin(), a.end());
    
    // Starting from each element, find subsequent elements
    // Such that their absolute difference is <= 1
    // This only works with a sorted array
    int sol = 0;
    for (int i = 0; i < a.size()-1 ; i++) {
        int current = 1; 
        for (int j = i+1; j < a.size() ; j++) {
            if (abs(a[i]-a[j]) <= 1) current++;
            else break;
        }
        if (current > sol) sol = current;
    }
    return sol;
}

