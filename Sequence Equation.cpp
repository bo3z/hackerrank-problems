vector<int> permutationEquation(vector<int> p) {
    vector<int> ans;
    for (int i = 0 ; i < p.size() ; i++){
        int t = 0;
        for(int j = 0 ; j < p.size() ; j++){
            if ((i+1)==p[j]) {
                t = j;
                break; 
            }
        }
        for(int j = 0 ; j < p.size() ; j++){
            if ((t+1)==p[j]) {
                ans.push_back(j+1);
                break; 
            }
        }
    }
    return ans;
}

