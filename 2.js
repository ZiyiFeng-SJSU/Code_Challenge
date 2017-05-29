var arr = [0, 1, 2, 3, 4, 5];
var idx = arr.length;
for (var i = (idx * 2)-1; i >= 0; i -= 2){
    idx -= 1;
    arr[i] = arr[idx];
    arr[i-1] = arr[idx];
}
console.log(arr);
