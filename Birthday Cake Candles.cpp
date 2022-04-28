int birthdayCakeCandles(vector<int> candles) {
    sort(candles.begin(), candles.end());
    unsigned int c = 0;
    for(int i = candles.size()-1 ; i >= 0 ; i--) {
        if(candles[i]==candles[candles.size()-1]) c++;
        else break;
    }
    return c;
}

