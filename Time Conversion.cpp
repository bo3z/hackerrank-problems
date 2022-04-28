string timeConversion(string s) {
    int h = stoi(s.substr(0, 2));
    bool isPM = s.substr(s.size()-2, 2) == "PM";
    if (isPM && h!=12) h+=12;
    if(!isPM && h==12) h-=12;
    string hStr = to_string(h);
    if (hStr.size() < 2) hStr = "0" + hStr;
    return hStr + s.substr(2, 6);
}

