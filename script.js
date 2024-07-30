// console.log("hello");
// alert("Lets get started !");
// let h2=document.querySelector("h2");
// console.dir(h2.innerText)
// h2.innerText=h2.innerText+"from apna college students";

// let divs=document.querySelectorAll(".box");
// let idx=1;
// for (div of divs) {
//     div.innerText = `new unique text $(idx) `;
//     idx++;

let newbtn = document.createElement("button");
newbtn.innerText="click me!";
newbtn.style.backgroundColor="red";
newbtn.style.color="white";

document.querySelector("body").prepend(newbtn);
pa=decodeURIComponent.querySelector("para");
pa.classList.add("newclass");