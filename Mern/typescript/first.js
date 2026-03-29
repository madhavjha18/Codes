"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
let num = 24;
let num2 = 35;
console.log(num + num2);
console.log("hello");
let str = "madhav";
let arr1 = [1, "madhav", 523, "this is a string"];
console.log(arr1);
console.log(arr1.length);
const obj = {
    name: "Rohit",
    age: 20,
    gender: "Male",
};
//parttial all prop become optiona;
//required means all should be filler
// read only the prop can only be read write not allowed
const obj2 = {
    name: "Rohit",
    balance: 210,
    age: 20
};
;
const arr = [{ name: "Rohit", age: 20 }, { name: "Mohit", age: 18 }, { salary: 20, id: "2321" }];
// function in TS
function greet(a) {
    console.log(a);
    return a + 5;
}
console.log(greet(10));
function meet(msg, val) {
    console.log(msg, val);
}
meet("Anshika Verma", 4);
// default parameter
function neet(msg = "Jit") {
    console.log(msg);
}
neet();
neet("Bittu");
// Optional Parameter
function GATE(person) {
    console.log(person || "Mohan");
}
GATE("Rohit");
GATE();
// arrow function
const sum = (a, b) => {
    return a + b;
};
console.log(sum(3, 4));
const sqaureroot = (val) => {
    return val * val;
};
function placeOrder(order, callback) {
    const amount = order + 10;
    callback(amount);
}
placeOrder(10, (amount) => {
    console.log(amount);
});
// Rest Parameter
function total(...arr) {
    let ans = 0;
    arr.forEach((val) => ans = ans + val);
    console.log(ans);
}
total(2, 3, 1, 4, 123, 1, 12, 10);
;
const obj8 = {
    name: "Rohit",
    age: 20,
    salary: "chillar",
    id: 123
};
