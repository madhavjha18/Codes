console.log('hi')
console.log()

let name = 'Madhav'
let age = 22
let exp = 'newbie'
 
// Table
console.table([name, age, exp])


// number => 2 to power 53
// bigint
// string => ""
// boolean => true/false
// null => standalone value
// undefined => 
// symbol => unique


// object

console.log(typeof undefined); // undefined
console.log(typeof null); // object

let score = "hitesh"

console.log(typeof score);
console.log(typeof(score));

let valueInNumber = Number(score)
console.log(typeof valueInNumber);
console.log(valueInNumber);


// "33" => 33
// "33abc" => NaN
//  true => 1; false => 0

let isLoggedIn = "hitesh"

let booleanIsLoggedIn = Boolean(isLoggedIn)
 console.log(booleanIsLoggedIn);

// 1 => true; 0 => false
// "" => false
// "hitesh" => true

let someNumber = 33

let stringNumber = String(someNumber)
console.log(stringNumber);
console.log(typeof stringNumber);

// *********************** Operations ***********************

let value = 3
let negValue = -value
console.log(negValue);

console.log(2+2);
console.log(2-2);
console.log(2*2);
console.log(2**3);
console.log(2/3);
console.log(2%3);

let str1 = "hello"
let str2 = " hitesh"

let str3 = str1 + str2
console.log(str3);

console.log("1" + 2);
console.log(1 + "2");
console.log("1" + 2 + 2);
console.log(1 + 2 + "2");

console.log( (3 + 4) * 5 % 3);

console.log(+true); //prints +1
console.log(-true); //prints -1 
console.log(+"");

let num1, num2, num3

num1 = num2 = num3 = 2 + 2

let gameCounter = 100
++gameCounter;
console.log(gameCounter);

console.log(null>=0);
console.log(null<=0);
console.log(null==0);
console.log(null<0 || null>0);

console.log(undefined == 0);
console.log(undefined >= 0);

console.log("2" == 2); // "2" is converted to int then compared
console.log("2" === 2); // === is used for strict checking in which both value and datatype is compared

const Id = Symbol('123')
const anotherId = Symbol('123');
console.log(Id === anotherId);


// Array, Objects, Functions

const heros = ["shaktiman", "naagraj", "doga"];
let myObj = {
    name: "hitesh",
    age: 22,
}

const myFunction = function(){
    console.log("hello world");
    
}
console.log(typeof heros);

// Stack (Primitive), Heap (Non-Primitive)

let myYoutubename = "hiteshchoudharydotcom" // string (primitive) stored in stack
let anothername = myYoutubename
anothername = "chaiaurcode"

console.log(myYoutubename); //not changed because anothername had copy of value from myYoutubename
console.log(anothername); 

let userOne = {   // object (non_primitive) stored in heap
email: "user@google.com",
upi: "user@ybl"
}
let userTwo = userOne
userTwo.email = "hitesh@google.com"
console.log(userOne.email);  //changed because userTwo had userOne reference not the value copy
console.log(userTwo.email);

