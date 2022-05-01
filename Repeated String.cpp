long repeatedString(string s, long n) {
    long counter = 0;
    for (int i = 0 ; i < s.size() ; i++)
        if(s[i]=='a') ++counter;
    counter*=(n/s.size());
    for (int i = 0 ; i < n%s.size() ; i++)
        if(s[i]=='a') ++counter;
    return counter;
}

