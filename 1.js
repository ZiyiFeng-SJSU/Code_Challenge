var arr = [9, 8, 7, 6, 3, 2, 1];
for (var i = 0; i < arr.length-1; i++) {
    if (arr[i] % 2 == 1) arr[i] *= 2;
}
console.log(arr);
