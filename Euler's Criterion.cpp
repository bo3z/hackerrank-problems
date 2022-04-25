int legendre(int a, int p){
        if (a == 1) return 1;
        
        int l = 1;
        
        while (a!=0) {
            // Property of even a 
            while (a%2==0) {
                a /= 2;
                int rem = p % 8;
                if (rem == 3 || rem == 5) l = -l; 
            }
            
            // Swap, by quadratic reciporcity
            int temp = p;
            p = a;
            a = temp;
            
            // Quadratic reciprocity
            l = l * pow(-1, (a-1)*(p-1)/4);
            a %= p;

            
        }
        
        if (p == 1) return l;
        return 0; 
}
string solve(int a, int m) {
    int l = legendre(a, m);
    if (l == 1 || a == 0) return "YES";
    return "NO";
}
