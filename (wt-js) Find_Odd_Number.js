// Function to check if a string represents a valid positive integer
function isNumber(str) {
    return /^\d+$/.test(str);
}

// Function to print odd numbers between two values
function printOddNumbersBetween(input1, input2) {
    if (isNumber(input1) && isNumber(input2)) {
        const m = parseInt(input1, 10);
        const n = parseInt(input2, 10);

        // Ensure m is the smaller number and n is the larger number
        const [start, end] = m <= n ? [m, n] : [n, m];

        console.log(`The Odd Numbers Between ${start} and ${end}:`);

        // Print odd numbers between start and end
        for (let i = start; i <= end; i++) {
            if (i % 2 !== 0) {
                process.stdout.write(`${i} `);
            }
        }
        console.log();
    } else {
        console.log("Enter valid positive integers as values!");
    }
}

// Example usage
const input1 = prompt("Enter the first value: ");
const input2 = prompt("Enter the second value: ");

// Validate prompt inputs
if (input1 !== null && input2 !== null) {
    printOddNumbersBetween(input1.trim(), input2.trim());
} else {
    console.log("Input was cancelled or invalid.");
}
