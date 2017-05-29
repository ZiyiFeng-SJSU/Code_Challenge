function func(arr, a, b){
    var dif = b-a + 1;
    for (var i = b+1; i < arr.length; i++){
        arr[i-dif] = arr[i] + 1;
    }
    arr.length = arr.length - dif;
}

var arr = [5, 3, 1, -1, -3, -5]
func(arr, 2, 4);
console.log(arr);
