document.querySelector("input").addEventListener("mousedown", function (e) {
  if (e.button == 0) {
    alert("left button clicked");
  } else if (e.button == 1) {
    alert("middle button clicked");
  } else {
    alert("right button clicked");
  }
});
document.querySelector("input").addEventListener("keypress", function (e) {
  alert(e.key);
});

//----------------------//
var d = new Date();
var hour = d.getHours();
var min = d.getMinutes();
var sec = d.getSeconds();
var clockDiv = document.querySelector(".clock");
var interv;
document.querySelector(".st-clock").addEventListener("click", function () {
  alert("Clock Started");
  interv = setInterval(function () {
    clockDiv.innerHTML = `${hour}:${min}:${sec}`.fontsize(7).bold();
    if (sec < 59) {
      sec++;
    } else {
      sec = 0;
      min++;
    }
  }, 1000);
});
document.querySelector("body").addEventListener("keydown", function (e) {
  // console.log(e.altKey, e.key);
  if (e.altKey == true && e.key == "w") {
    clearInterval(interv);
    alert("Clock Stopped");
  }
});

//----------------------//
// var x = 0;
// var span = document.querySelector(".span1");
// var t = document.querySelector(".imgs").addEventListener("click", function () {
//   span.innerHTML = ++x;
// });
// var setint = setInterval(function () {
//   span.innerHTML = "GAME OVER!!";
//   document.querySelector(".span2").innerHTML = "High score: " + x;
//   x = 0;
// }, 5000);

var a = 0;
var span = document.querySelector(".span1");
var t = document.querySelector(".imgs");
t.addEventListener("click", function x() {
  span.innerHTML = ++a;
  setTimeout(function () {
    t.addEventListener("click", function () {
      span.innerHTML = "Game Over";
    });
    t.removeEventListener("click", x);
  }, 5000);
});

// ********************************************
document.querySelector(".op");
function opacity() {
  document.querySelectorAll(".op")[0].style.transition = "all .5s";
  document.querySelectorAll(".op")[1].style.transition = "all .5s";
  document.querySelectorAll(".op")[2].style.transition = "all .5s";
  document.querySelectorAll(".op")[3].style.transition = "all .5s";
}
opacity();
