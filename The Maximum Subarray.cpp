vector<int> maxSubarray(vector<int> arr) {
    // Maximum subarray, based on the well known Kadane's algorithm
    int maxSubArr = INT32_MIN;
    int currentMax = 0;
    for (int i = 0 ; i < arr.size() ; i++){
        currentMax+=arr[i];
        if (maxSubArr < currentMax) maxSubArr = currentMax;
        if (currentMax < 0) currentMax = 0;
    }
    
    // Maximum subsequence
    int maxSubSeq = 0;
    int maxElement = arr[0];
    for (int i = 0 ; i < arr.size() ; i++){
        if (arr[i]>0) maxSubSeq+=arr[i];
        if (arr[i]>maxElement) maxElement = arr[i];
    }
    if (maxSubSeq==0) maxSubSeq = maxElement;
    
    return {maxSubArr, maxSubSeq};
}
