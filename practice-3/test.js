// const dummyData = [
//     { name: "John Doe", age: 85 },
//     { name: "Jane Smith", age: 92 },
//     { name: "Mike Johnson", age: 78 },
//     { name: "Sarah Williams", age: 88 },
//     { name: "David Brown", age: 95 }
// ];

// dummyData.sort((a, b) => b.age - a.age);

// console.log(dummyData);


// let arr=[10,20,30,40]
// let arr1=arr;
// arr.pop();
// console.log(arr1);

// arr1.push(50)
// console.log(arr);
// console.log(arr1);

let arr=[1,4,5,7,2,1]
let squre=arr.map((n)=>{
   return n*n 
})
console.log(squre);


let even=arr.filter((n)=>n%2==0);
console.log(even);


let evenwithfind=arr.find((n)=>n%2==0);
console.log(evenwithfind);