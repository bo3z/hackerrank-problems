int hurdleRace(int k, vector<int> height) {
    sort(height.begin(), height.end());
    return (k < height[height.size()-1]) ? (height[height.size()-1] - k) : 0;
}

