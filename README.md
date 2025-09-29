# 🔁 Loops in C++

## 🎯 Aim  
To explore the use of **for**, **while**, and **do-while** loops in C++ through examples like star patterns, reversing numbers, password masking, and plus pattern generation.

---

## 📚 Theory  

Loops in C++ are control flow structures that allow the repeated execution of a block of code.  
They are used to automate repetitive tasks, iterate over collections or ranges, and simplify complex algorithmic operations.

---

## 🔢 For Loop  
Used when the number of iterations is known beforehand.  
It includes initialization, condition check, and increment/decrement.  
Ideal for counter-controlled loops and fixed iterations.

---

## 🔁 While Loop  
Used when the number of iterations is not known in advance.  
The condition is checked **before** the loop body.  
If true, the block executes; if false, the loop exits immediately.

---

## 🔂 Do-While Loop  
Similar to the while loop but guarantees the loop body runs **at least once**, since the condition is checked **after** the execution of the block.  
Perfect for input validation and menu loops.

---

## 📊 Comparison Table

| Feature                    | `for` Loop                         | `while` Loop                      | `do-while` Loop                     |
|---------------------------|-------------------------------------|-----------------------------------|-------------------------------------|
| Condition Check           | Before loop starts                  | Before loop starts                | After loop body executes            |
| Use Case                  | When iterations are known           | When condition must be evaluated before entry | When loop must run at least once |
| Initialization & Update   | Included in loop declaration        | Must be done separately           | Must be done separately             |
| Executes at Least Once?   | ❌ No                                | ❌ No                              | ✅ Yes                               |
| Syntax Simplicity         | Compact for counter-controlled loops | More flexible with condition-only | Useful for menus or retry prompts   |

---

## 📋 Algorithms

### ✅ Inverse Right Triangle Pattern  

1. Start  
2. Input: Read the desired height of the triangle `n` from the user  
3. Initialize: Set a counter `row = n`  
4. Outer loop: While `row >= 1`  
   - Initialize `col = 1`  
   - Inner loop: While `col <= row`  
     - Print `*`  
     - Increment `col`  
   - Print newline  
   - Decrement `row`  
5. End  

---

### ✅ Reverse PRN

1. Start  
2. Input: Read an integer PRN from the user  
3. Initialize variable for digit extraction  
4. While PRN > 0  
   - Extract last digit: `digit = PRN % 10`  
   - Print digit  
   - Remove last digit: `PRN = PRN / 10`  
5. End  

---

### ✅ Password Masking and Validation

1. Start  
2. Initialize a string `password` with predefined value  
3. Set attempt counter to 0 and max attempts to 3  
4. While attempts < max  
   - Prompt user to enter password character by character  
   - Display `*` for each input character  
   - If input matches stored password  
     - Print "System Unlocked"  
     - Exit  
   - Else  
     - Increment attempts  
     - Show remaining attempts  
5. If attempts exceed max  
   - Print "System Locked"  
6. End  

---

### ✅ Plus (`+`) Pattern  

1. Start  
2. Input: Read an **odd** integer `n`  
3. Set middle as `mid = n / 2`  
4. Loop: For `i = 0` to `n - 1`  
   - For `j = 0` to `n - 1`  
     - If `i == mid` or `j == mid`, print `*`  
     - Else print space  
   - Print newline  
5. End  

---

## 🧠 Conclusion  

Loops are fundamental to automating repetitive logic in C++.  
Whether you're iterating with a for loop, reacting dynamically with while, or ensuring execution with do-while, these structures are essential for efficient and dynamic programming.  
Mastering loops helps reduce redundancy and makes your code cleaner, more flexible, and powerful.
