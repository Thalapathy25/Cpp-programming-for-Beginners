## C++ Loops :- 

- Loops can execute a block of code as long as a specified condition is reached.
- Loops are handy because they save time, reduce errors, and they make code more readable.

### break statement :- 
the `break` statement terminates the smallest enclosing loop (i. e., while, do-while, for or switch statement)

### continue statement :-  
the `continue` statement skips the rest of the loop statement and causes the next iteration of the loop to take place.

### while Loop :- 
The `while` loop loops through a block of code as long as a specified condition is `true`.

**Syntax**
```cpp
while (condition) {
  // code block to be executed
}
```
### do while Loop :- 
The `do while` loop is a variant of the `while` loop. 
This loop will execute the code block once, before checking if the condition is `true`, then it will repeat the loop as long as the condition is `true`.

**Syntax**
```cpp
do {
  // code block to be executed
}
while (condition);
```

### for loop :- 
when you know exactly how many times you want to loop through a block of code, use the `for` loop instead of a `while` loop.

**Syntax**
```cpp
for (initialization; condition; increment/decrement) {
  // code block to be executed
}
```
