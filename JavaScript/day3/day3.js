// var reg = /\d*[02468]&/;
var reg = /[0-9]*(0|2|4|6|8)$/;
var isEven = function (num) {
  reg.test(num) ? console.log("true") : console.log("false");
};
isEven(579);

//-------------------------//

var newWindow;
function openWindow() {
  setTimeout(function () {
    newWindow = open(
      "day3-2.html",
      "_blank",
      "width=300,height=400,screenX=300,screenY=100"
    );
  }, 3000);
}

function closeWindow() {
  newWindow.close();
}
//-------------------------//
