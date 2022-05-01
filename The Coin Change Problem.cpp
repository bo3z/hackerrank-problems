/*
Explanation: Generate a vector of size n, in which each 
index, represents the number of ways to obtain the ammount a
To obtain amount a using a specific coint, the amount needs to
be larger than or equal to that coin. The the number of ways to 
achieve that amount simply increments by the numbe of ways to
achieve (a - coin). Explanation thanks to: https://www.youtube.com/watch?v=jaNZ83Q3QGc
*/
long getWays(int n, vector<long> &c) {
    vector<long> combinations(n+1, 0);
    combinations[0] = 1;
    
    for(long &coin : c) {
        for (int i = 1 ; i < combinations.size() ; i++) {
            if (i>=coin)  combinations[i] += combinations[i-coin];
        }
    }
    return combinations[n];
}

