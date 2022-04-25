int lowestTriangle(int trianglebase, int area) {
    int h = 2*area/trianglebase;
    if (h*trianglebase<2*area) ++h;
    return h;
}
