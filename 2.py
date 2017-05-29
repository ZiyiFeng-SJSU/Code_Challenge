arr = [0, 1, 2, 3, 4, 5]
idx = len(arr)
for i in range(0, (idx * 2) - 1):
    idx -= 1
    i -= 2
    arr[i] = arr[idx]
    arr[i-1] = arr[idx]
console.log(arr)
