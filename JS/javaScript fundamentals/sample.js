var globalVar = "I'm a global variable";
const globalConst = "I'm a global constant";
let globalLet = "Im a global, but scoped with let";

{
  var blockVar = "I'm a block-scoped var";
  let blockLet = "I'm a block-scoped let";
  const blockConst = "I'm a block-scoped const";

  //Block Scope
  console.log(blockVar);
  console.log(blockLet);
}

// Global scope
console.log(globalVar); // Output: "I'm a global variable"
console.log(globalLet); // Output: "I'm also global, but scoped with let"
console.log(globalConst); // Output: "I'm a global constant"
