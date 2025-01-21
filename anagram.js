//QUestion - Anagram
// if a word is made by rearranging the same letters

// const ana = function (s, t) {
//   if (s.length != t.length) return(false);
//   else {
//     s = s.split("").sort().join("");
//     t = t.split("").sort().join("");
//     console.log(s === t);
//   }
// };
// ana("caar", "racaa");

const Anagram = function (s, t) {
  if (s.length !== t.length) return false;

  let obj1 = {};
  let obj2 = {};

  for (i = 0; i < s.length; i++) {
    obj1[s[i]] = (obj1[s[i]] || 0) + 1;
    obj2[t[i]] = (obj2[t[i]] || 0) + 1;
  }

  for (const key in obj1) {
    if (obj1[key] !== obj2[key]) return false;
  }
  return true;
};

console.log(Anagram("car", "acr"));


/*
so basically kya karna hai ki two words hai and we need to check if they have same letters or na, 

first check if they have same length
create an hash map for each letter and their count if both are equal then print tru
 */


/* 
Two integer sum where i need to add two numbers in an array and get the target 


[1,4,5,7]

target 6
*/