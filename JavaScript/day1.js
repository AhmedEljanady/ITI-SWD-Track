// alert("Welcome to my site");
// var name = prompt("enter your name: ");
// alert("Welcome " + name);

// var sum = function (a, b) {
//   var a = parseInt(prompt("enter first number: "));
//   var b = parseInt(prompt("enter second number: "));
//   return a + b;
// };
// var printSum = function () {
//   alert(sum());
// };

// var lessThanOrEqualToZero = function () {
//   var num = parseInt(prompt("enter number: "));
//   var x = isFinite(num) ? (num > 0 ? false : true) : "enter valid number";
//   //   if (isFinite(num)) {
//   //     if (num > 0) {
//   //       return false;
//   //     } else {
//   //       return true;
//   //     }
//   //   } else {
//   //     return "enter valid number";
//   //   }
//   return x;
// };
// var result = lessThanOrEqualToZero();
// alert(result);

var faculty = "Commerce";
switch (faculty) {
  case "FCI":
    console.log("You're eligible to Programing tracks");
    break;
  case "Engineering":
    console.log("You're eligible to Network and Embedded tracks");
    break;
  case "Commerce":
    console.log("You're eligible to ERP and Social media tracks");
    break;
  default:
    console.log("You’re eligible to SW fundamentals track");
}

var triArea = function (base, height) {
  var base, height;
  return (parseInt(base) * parseInt(height)) / 2;
};
console.log(triArea(7, 4));
