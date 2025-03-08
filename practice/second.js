// let n = 20; 

// const isPrime = (num) => {
//     if (num < 2) return false;
//     for (let j = 2; j * j <= num; j++) {
//         if (num % j == 0) return false;
//     }
//     return true;
// };

// for (let i = 1; i <= n; i++) {
//     if (isPrime(i)) {
//         console.log(i);
//     }
// }

// let arr=[1,34,5,3,67,3]
// let min=Number.MAX_VALUE;
// let max=Infinity;
// console.log(max);

// for(i=0;i<arr.length;i++){
//     if(arr[i]>max){
//         max=arr[i];
//     }
// }
// console.log(max);


// let arr = [1, 2, 3, 4, 5];
// let reversedArr = [];

// for (let i = arr.length - 1; i >= 0; i--) {
//     reversedArr.push(arr[i]);
// }
// arr=reversedArr

// console.log(arr);

// let arr=[1,2,3,4,0,6]
// let sorted=true;
// for(i=0;i<arr.length-1;i++){
//     if(arr[i]>arr[i+1]){
//         console.log("not sorted in accending order");
//         sorted=false;
//         break;
//     }
  
// }

// if(sorted){
//     console.log("sorted in accending order");
// }


// let arr = [1, 2, 2, 4, 5, 6, 6];
// let arr2 = [arr[0]]; 

// for (let i = 0; i < arr.length - 1; i++) {
//     if (arr[i] !== arr[i + 1]) {
//         arr2.push(arr[i + 1]); 
//     }
// }

// console.log(arr2); 
// let arr = [1, 2, 3, 4, 5, 6];
// let k = 3;

// let arr2 = arr.splice(0, k); 

// console.log(arr2);  
// arr = arr.concat(arr2);

// console.log(arr); 




const isprime=(num)=>{
    let count = 0;
    for(i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        return true;
    }
    else{
        return false;
    }
}

console.log(isprime(3));



let num = 274;
let reversed = 0;

while (num > 0) {
    let last = num % 10; 
    reversed = reversed * 10 + last; 
    num = (num - last) / 10; 
}

console.log(reversed); 
