// static constexpr is faster compared to evaluating pow(10, 9) + 7 every time
static constexpr int lim = 1000000007;

// By writing out a few examples, it can be seen that the
// sum contributed to the ith digits (sum of all the substrings
// from 0 to i, included) is given by the formula:
// digitSum[i] = (i + 1) * (digit) + 10 * digitSums[i - 1]
long substrings(string n) {
    vector<long> digitSums(n.size(), 0);
    digitSums[0] = n[0] - '0';
    long ans = n[0] - '0';
    
    for (int i = 1; i < n.size(); i++) { 
        digitSums[i] = ((i + 1) * (n[i]-'0') + (10 * digitSums[i - 1]))%lim;
        ans = (ans+digitSums[i])%lim;
    }
    return (ans % lim);
}

