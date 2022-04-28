int countingValleys(int steps, string path) {
    int count = 0;
    int alt = 0;
    bool startedValley = false;
    for (auto &p : path) {
        if (p=='D' && alt == 0) startedValley = true;
        if (startedValley && alt == 0) {
            ++count;
            startedValley = false;
        }
        alt = (p=='D') ? (alt-1) : (alt+1);
    }
    return count;
}

