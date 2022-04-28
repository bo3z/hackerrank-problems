
string superReducedString(string s) {
    if (s.length() < 2) return s;
    if (s.length() == 2 && s[0]==s[1]) return "Empty String";
    for (int i = 0 ; i < s.size()-1 ; i++) {
        if (s[i] == s[i+1]) {
            return superReducedString(s.substr(0, i) + s.substr(i+2));
        }
    }
    return s;
}

