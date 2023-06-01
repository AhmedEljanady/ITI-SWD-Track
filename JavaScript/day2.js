// var date = new Date();

//--------------------------//

// var x = email.slice(1, email.length - 1);
var check = function () {
  var email = prompt("enter your email");
  if (email.includes("@")) {
    if ("@" == email[0] || "@" == email[email.length - 1]) {
      return false;
    } else {
      return true;
    }
  } else {
    return false;
  }
};
// console.log(check());

//--------------------------//

// var charCount = function (lettre, str) {
//   var x = str.split();
//   var count = 0;
//   for (var i = 0; i < str.length; i++) {
//     if (lettre == str[i]) {
//       count++;
//     }
//   }
//   return count;
// };
// console.log(charCount("a", "ahmed"));

//--------------------------//
var student = [
  { name: "ahmed", degree: 100 },
  { name: "khaled", degree: 90 },
  { name: "hassan", degree: 80 },
  { name: "ali", degree: 50 },
  { name: "hossam", degree: 45 },
];
// var result1 = student.find((n) => n.degree > "90").name;
// console.log(result1);
// console.log("-------------------");
// var result2 = student.filter((n) => n.degree < 60);
// for (var i = 0; i < result2.length; i++) {
//   console.log(result2[i].name);
// }
// console.log("---------PUSH----------");
// student.push({ name: "mahmoud", degree: 70 });
// for (key in student) {
//   console.log(student[key]);
// }
// console.log("---------POP----------");
// student.pop();
// for (key of student) {
//   console.log(key);
// }
// console.log("---------SORT----------");
// var result3 = student.sort((a, b) => (a.name > b.name ? 1 : -1));
// console.log(result3);
console.log("---------REMOVE----------");
student.splice(3, 1);
console.log(student);
document.write(student);
console.log("---------ADD----------");
student.splice(
  2,
  0,
  { name: "osama", degree: 65 },
  { name: "nady", degree: 85 }
);
console.log(student);

//--------------------------//
// var largestSwap = function (n) {
//   var x = n.toString();
//   var y = [x[0], x[1]];
//   var z = y.reverse();
//   var a = z.join("");
//   var b = parseInt(a);
//   var c = n > b ? true : false;
//   return c;
// };
// console.log(largestSwap(27));
// console.log(largestSwap(43));
// console.log(largestSwap(72));
//--------------------------//

var re = /^[0-9]/;
re.test();
