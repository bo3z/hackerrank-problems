int designerPdfViewer(vector<int> h, string word) {
    int m = 0;
    for (auto &w : word) {
        if (h[w-'a']>m) m = h[w-'a'];
    }
    return m*word.size();
}
