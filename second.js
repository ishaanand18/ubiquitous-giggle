// let arr=[1,2,3,4,5];
// arr.forEach((num)=>{
//     console.log(num*num);
// });

// let marks=[77,89,99,86,90,87,98]; 
// let arr=marks.filter((val) => {
//     return val>90;
// });
//  console.log(arr);

let n= prompt("enter value of n");
let arr=[];
for (let i=0;i<n;i++){
    arr[i]=i+1;
}
console.log(arr);
let sum=arr.reduce((prev,res) => {
    return prev+res;
});
console.log(sum);
let pro=arr.reduce((prev,res) => {
    return prev*res;
});
console.log(pro);