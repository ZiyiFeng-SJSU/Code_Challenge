var myObject = {
    val: "plant",
    func: function() {
        var self = this;  
        console.log("egg" + this.val);
        console.log("egg" + self.val);
        (function() {
            console.log("egg" + this.val);
            console.log("egg" + self.val);
        }());
      }
};
myObject.func();
