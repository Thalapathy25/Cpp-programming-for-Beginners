## C++ Operators :- 
An operator is a symbol that tells the compiler to perform specific mathematical or logical manipulations. 
C++ is rich in built-in operators and provide the following types of operators :−
- Arithmetic Operators
- Unary Operators
- Relational Operators
- Logical Operators
- Bitwise Operators
- Assignment Operators
- Ternary Operator

### Arithmetic Operators

| Operator | Description	                                               | Example |
|----------|-------------------------------------------------------------|---------|
| +        | Adds two operands	                                         | a + b   |
| -	       | Subtracts second operand from the first	                   | a - b   |
| *	       | Multiplies both operands	                                   | a * b   |
| /	       | Divides numerator by de-numerator	                         | a / b   |
| %	       | Modulus Operator and remainder of after an integer division | a % b   |

### Unary Opeartors
| Operator | Description	                                               | Example   |
|----------|-------------------------------------------------------------|-----------|
| -	       | The minus operator changes the sign of its argument.	       | -b        |
| ++       | It is used to increment the value of the variable by 1.     | ++a       |
| --       | It is used to decrement the value of the variable by 1.     | --b       | 
| &        | It is used to return the memory address of a variable.      | &b        |
| !        | Use to reverses the logical state of its operand.           | !a        |
| sizeof() | This operator returns the size of its operand, in bytes     | sizeof(a) |

### Relational Operators

| Operator | Description	                                                                                                                   | Example |
|----------|---------------------------------------------------------------------------------------------------------------------------------|---------|
| ==       | Checks if the values of two operands are equal or not, if yes then condition becomes true.	                                     | a == b  |
| !=	     | Checks if the values of two operands are equal or not, if values are not equal then condition becomes true.	                   | a != b  |
| >        | Checks if the value of left operand is greater than the value of right operand, if yes then condition becomes true.             | a > b   |
| <	       | Checks if the value of left operand is less than the value of right operand, if yes then condition becomes true.	               | a < b   |
| >=	     | Checks if the value of left operand is greater than or equal to the value of right operand, if yes then condition becomes true. | a >= b  |
| <=       | Checks if the value of left operand is less than or equal to the value of right operand, if yes then condition becomes true.    | a <= b  |

### Logical Operators

| Operator | Description	                                                                                      | Example   |
|----------|----------------------------------------------------------------------------------------------------|-----------|
| &&       | Called Logical AND operator. If both the operands are non-zero, then condition becomes true.       | a && b    |
| \|\|	   | Called Logical OR Operator. If any of the two operands is non-zero, then condition becomes true.   |	a \|\| b  |
| !        | Called Logical NOT Operator. Use to reverses the logical state of its operand.                     | !(a && b) |


### Bitwise Operators

| Operator | Description	                                                                                                             | Example |
|----------|---------------------------------------------------------------------------------------------------------------------------|---------|
| &        | Binary AND Operator copies a bit to the result if it exists in both operands.                                             | a & b  |
| \|	     | Binary OR Operator copies a bit if it exists in either operand.	                                                         | a \| b  |
| ^        | Binary XOR Operator copies the bit if it is set in one operand but not both.                                              | a ^ b   |
| ~	       | Binary Ones Complement Operator is unary and has the effect of 'flipping' bits.	                                         | a ~ b   |
| <<	     | Binary Left Shift Operator. The left operands value is moved left by the number of bits specified by the right operand.   | a << b  |
| >>       | Binary Right Shift Operator. The left operands value is moved right by the number of bits specified by the right operand. | a >> b  |

### Assignment Operators
Assignment operators are used to assigning value to a variable. 
The left side operand of the assignment operator is a variable and the right side operand of the assignment operator is a value. 
The value on the right side must be of the same data type as the variable on the left side otherwise the compiler will raise an error. 
Examples :- __+=__, __-=__, __*=__, __/=__, __%=__,... etc

### Ternary Operator
There is also a short-hand if else, which is known as the __ternary operator__ because it consists of three operands. It can be used to replace multiple lines of code with a single line. It is often used to replace simple if else statements:

**Syntax**
```
variable = (condition) ? expressionTrue : expressionFalse;
```

**Example**
```cpp
#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
	int num;
	cout << "Enter the Number : ";
	cin >> num;
	printf("The Given Number %d is a %s\n", num,
		   (num % 2 == 0) ? "Even Number" : "Odd Number");
	return 0;
}
```
