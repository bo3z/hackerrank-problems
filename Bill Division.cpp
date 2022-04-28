void bonAppetit(vector<int> bill, int k, int b) {
    unsigned long long s = -bill[k];
    for(auto &b : bill) s+=b;
    double cost = 0.5*(double)s;
    if (b>cost) cout << (double)b - cost << endl;
    else cout << "Bon Appetit" << endl;
}

