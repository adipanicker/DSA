// Question 1 - Palindrome number

// const isPalindrome = function (x) {
//   return x < 0 ? false : x === +x.toString().split("").reverse().join(""); // 121 -> "121"
// };

// const res = isPalindrome(121);
// console.log(res);

const arr = [5, 3, 7, 4, 1, 18, 8];

arr.sort((a, b) => b - a);

console.log(arr);
