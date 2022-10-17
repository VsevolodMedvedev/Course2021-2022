/*function sendInput() {
  var radio=document.getElementsByName("radio");
  for (var i=0;i<radio.length; i++) {
    if (radio[i].checked) {
      if(i==0){
        alert("Партер");
      } else {
        alert("Балкон");
      }
    } else {
      alert("Выберете один вариант");
    }
  }
}

function sendForm(){
  var nameBox = document.search.address1;
  var lastNameBox = document.search.address2;
  var city = document.search.city;
  alert(nameBox); // + " " + lastNameBox +"\n"+city);
}



function numTickets(){
  var el = document.getElementsByClassName ("numTickets");
  console.log("EL в Vanilla JS", el);
}

function showPrompt(text, callback) {
     showCover();
     let form = document.getElementById('prompt-form');
     let container = document.getElementById('prompt-form-container');
     document.getElementById('prompt-message').innerHTML = text;
     form.text.value = '';
}

function printAlert(txt){
  alert(txt);
}

function printConf(txt){
  confirm(txt);
}
*/

function myClick() {
  let a = document.getElementById('name').value;
  let b = document.getElementById('lastName').value;
  let c = document.getElementById('city').value;
  console.log(a+b+c);
}

var btn = document.getElementById("send");
btn.addEventListener("click", myClick);

















/*let input = document.querySelector('option');
console.log(input.value);
*/



//var a = document.querySelector('send').onclick;

/*var a = document.getElementById("name").value;
confirm("name");
var b = document.getElementById("lastName").value;
var c = document.getElementById("city").value;
var text = a+" "+b+" "+c;*/

//Отправка формы alert

/*var btn = document.getElementById("100")
btn.addEventListener("click", alert("a"));
*/
//Отправка формы confirm
/*var a = document.getElementById("name").value;
var txt = "asd";
var btn = document.getElementById("send")
btn.addEventListener("click", printConf(a));*/
