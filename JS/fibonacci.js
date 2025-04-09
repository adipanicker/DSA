// QUestion 2 - Fibonacci NUmber

// var fib = function (n) {
//   const arr = [0, 1];

//   for (i = 2; i <= n; i++) {
//     arr.push(arr[i - 1] + arr[i - 2]);
//   }
//   console.log(arr[n]);
// };
// fib(14);

const fib = function (n) {
  if (n <= 1) return n;

  return fib(n - 1) + fib(n - 2);
};
console.log(fib(6));
