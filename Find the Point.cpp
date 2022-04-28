vector<int> findPoint(int px, int py, int qx, int qy) {
    vector<int> ans(2, 0);
    ans[0] = 2*qx - px;
    ans[1] = 2*qy - py;
    return ans;
}

