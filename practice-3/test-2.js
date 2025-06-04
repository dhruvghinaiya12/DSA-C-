let data = [
  {
    name: "test1",
    age: 21,
  },
  {
    name: "test2",
    age: 18,
  },
  {
    name: "test3",
    age: 23,
  },
  {
    name: "test5",
    age: 20,
  },
  {
    name: "test5",
    age: 19,
  },
];


let filterData= data.filter((e)=>e.age<20)

console.log(filterData);

let findData= data.find((e)=>e.age<20)

console.log(findData);
