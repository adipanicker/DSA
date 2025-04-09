//an array shows the days in which we can trade stocks.
//return the maximum profit we can make by buying and selling stocks in the given days

// Input prices = [7,1,5,3,6,4]  ----> Output: 5;

//Brute force solution;

// function maxProfit(prices) {
//   let globalProfit = 0;

//   for (let i = 0; i < prices.length - 1; i++) {
//     for (let j = i + 1; j < prices.length; j++) {
//       const currentProfit = prices[j] - prices[i];

//       if (globalProfit < currentProfit) globalProfit = currentProfit;
//     }
//   }
//   return globalProfit;
// }

// console.log(maxProfit([7, 1, 5, 3, 6, 4]));

//GREEDY ALGORITHM SOLUTION;

const maxProfit = function (prices) {
  let min = prices[0] || 0;
  let profit = 0;

  for (let i = 1; i < prices.length; i++) {
    if (prices[i] < min) {
      min = prices[i];
    }
    profit = Math.max(profit, prices[i] - min);
  }
  return profit;
};

console.log(maxProfit([7, 1, 5, 3, 6, 4]));
