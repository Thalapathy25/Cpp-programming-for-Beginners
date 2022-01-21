## C++ Conditional Statements :- 
C++ has the following conditional statements:
- Use `if` to specify a block of code to be executed, if a specified condition is `true`.
- Use `else` to specify a block of code to be executed, if the same condition is `false`.
- Use `else if` to specify a new condition to test, if the first condition is `false`.
- Use `switch` to specify many alternative blocks of code to be executed.

### if statement :- 
Use the `if` statement to specify a block of C++ code to be executed if a condition is `true`.

**Syntax**
```cpp
if (condition) {
  // block of code to be executed if the condition is true
}
```
### if else statement :- 
Use the `else` statement to specify a block of code to be executed if the condition is `false`.

**Syntax**
```cpp
if (condition) {
  // block of code to be executed if the condition is true
} else {
  // block of code to be executed if the condition is false
}
```

### else if statement :- 
Use the `else if` statement to specify a new condition if the first condition is `false`.

**Syntax**
```cpp
if (condition1) {
  // block of code to be executed if condition1 is true
} else if (condition2) {
  // block of code to be executed if the condition1 is false and condition2 is true
} else {
  // block of code to be executed if the condition1 is false and condition2 is false
}
```

### switch statement :- 
- The `switch` expression is evaluated once.
- The value of the expression is compared with the values of each case.
- If there is a match, the associated block of code is executed.
- The `break` and `default` keywords are optional.

**Syntax**
```cpp
switch(expression) {
  case 1:
    // code block
    break;
  case 2:
    // code block
    break;
  case n:
    // code block
    break;
  default:
    // code block
}
```
