//Prep for interviews:
//Round 1: Data Structures and Algorithms

//Problem 1 - Arrays and Strungs:
//How would you find the first non-repeating character in a given string?
//What is the time complexity of your solution?


function noRepeat(str) {
    let charCount = {}; // Step 1: Store frequency of each character

    // Step 2: Count each character in the string
    for (let char of str) {
        charCount[char] = (charCount[char] || 0) + 1;
    }

    // Step 3: Find the first character with a count of 1
    for (let char of str) {
        if (charCount[char] === 1) {
            return char; // Found the first non-repeating character
        }
    }

    return null; // If no non-repeating character found
}

console.log(noRepeat("javascriptrocks"));
