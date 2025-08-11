let testText = "The quick brown fox jumps over the lazy dog.";
let startTime, endTime;

function startTest() {
  document.getElementById("inputText").value = testText;

  let userInput = document.getElementById("userInput");
  userInput.value = "";
  userInput.readOnly = false;
  userInput.focus();

  document.getElementById("output").innerHTML = "";

  startTime = new Date().getTime();
}

function endTest() {
  endTime = new Date().getTime();

  document.getElementById("userInput").readOnly = true;

  var timeElapsed = (endTime - startTime) / 1000;
  var userTypedText = document.getElementById("userInput").value;
  let lengthofWords = userTypedText.length;
  var typedWords = userTypedText.split(/\s+/).filter(function (word) {
    return word !== "";
  }).length;

  var wpm = 0;

  if (timeElapsed !== 0 && !isNaN(typedWords)) {
    wpm = Math.round((typedWords / timeElapsed) * 60);
  }

  //display result
  var outputDiv = document.getElementById("output");
  outputDiv.innerHTML =
    "<h2>Typing Test Results: </h2>" +
    "<p>Length of string: </p>" +
    lengthofWords +
    "<p>Words Typed: " +
    typedWords +
    "</p>" +
    "<p>Time Elapsed: " +
    timeElapsed.toFixed(2) +
    " seconds</p>" +
    "<p>Words Per Minute (WPM): " +
    wpm +
    "</p>";
}
