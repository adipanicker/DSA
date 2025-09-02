var userRole = "admin";
var access;
let isLoggedIn = true;
let userMessage;

//while using ternary operators try not to console.log or do any function
//rather assign the value to a variable first

if (isLoggedIn) {
  console.log("Welcome back!");
  if (userRole == "admin") {
    userMessage = "Welcome, admin!";
    access = "Access status: Full access granted";
  } else {
    userMessage = "Welcome, user!";
    access = "Access status: Partial access only";
  }
} else {
  console.log("Please log in to continue");
}

console.log("User Message:", userMessage);
console.log(access);
