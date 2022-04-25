
vector<int> gradingStudents(vector<int> grades) {
    vector<int> ans(grades.size(), 0);
    for (int i = 0 ; i < grades.size() ; i++){
        if (grades[i] < 38) 
            ans[i] = grades[i];
        else if (!((grades[i]+1) % 5)) 
            ans[i] = grades[i]+1;
        else if (!((grades[i]+2) % 5)) 
            ans[i] = grades[i]+2;
        else 
            ans[i] = grades[i];
    }
    return ans;
}
