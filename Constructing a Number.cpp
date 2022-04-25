typedef unsigned long long int ull; 
ull sumDigits(int a) {
    ull sum = 0;
    while (a){
        sum+=a%10;
        a/=10;
    }
    return sum;
}


string canConstruct(vector<int> a) {
    ull sum = 0;
    for (int i = 0 ; i < a.size() ; i++) {
        sum+=sumDigits(a[i]);
    }
    if (!(sum%3)) return "Yes";
    return "No";
}
