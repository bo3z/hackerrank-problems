def miniMaxSum(arr):
    arr.sort()
    mini = arr[0] + arr[1] + arr[2] + arr[3]
    maxi = arr[1] + arr[2] + arr[3] + arr[4]
    print(mini, maxi)

