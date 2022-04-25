typedef unsigned long long ull;
void plusMinus(vector<int> arr) {
    ull n = arr.size();
    ull pos = 0; ull neg = 0; ull zero = 0;
    for(int i=0; i<n; i++) {
        if (arr[i]>0) pos++;
        else if (!arr[i]) zero++;
        else neg++;
    }
    cout << (double)pos/(double)n << endl;
    cout << (double)neg/(double)n << endl;
    cout << (double)zero/(double)n << endl;
}
