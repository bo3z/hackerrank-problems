#define pb(x) push_back(x)

/// Helper function - returns the binary representation of a number O(logN)
inline vector<bool> decimalToBinary(unsigned long x) {
    vector<bool> bits;
    while(x) {
        bits.pb(x%2);
        x/=2;
    }
    reverse(bits.begin(), bits.end());
    return bits;
}

// Time complexity O(logN)
long sumXor(long n) {
    /*
    * Binary sum is eual to bitwise XOR when there are no carry bit
    * Therefore, all x that satisfy the condition are such that x&n is 0
    * x&n is 0 only when the bits of x are 0 for the matching bits of 1 in n
    * It is sufficient to find 0-bits in n; these correspond to free bits in x
    * For p such bits, there are pow(2, p) possible numbers
    */
    
    // Corner cases
    if (n<=1) return 1;          
    
    // Count 0-bits in n
    vector<bool> bits = decimalToBinary(n);
    uint16_t zeros = 0;
    for (uint16_t i = 0 ; i < bits.size() ; ++i) {
        cout << bits[i] << endl;
        if (!bits[i]) ++zeros;
    }

    // Implement power of 2 as left shift
    return (2L << (zeros-1));
}

