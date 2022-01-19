## C++ Data Types :- 

All variables use data-type during declaration to restrict the type of data to be stored. 
Therefore, we can say that data types are used to tell the variables the type of data it can store. 
Whenever a variable is defined in C++, the compiler allocates some memory for that variable based on the data-type with which it is declared. 
Every data type requires a different amount of memory.<br>

![data types](https://github.com/PrakashAnalyst/Cpp-programming-for-beginners/blob/main/02%20Data%20Types/images/datatypes.png)

### Data types in C++ is mainly divided into three types: 
1. **Primitive Data Types**: These data types are built-in or predefined data types and can be used directly by the user to declare variables. example: int, char , float, bool etc. Primitive data types available in C++ are: 
    - Integer
    - Character
    - Boolean
    - Floating Point
    - Double Floating Point
    - Valueless or Void
    - Wide Character

2. **Derived Data Types**: The data-types that are derived from the primitive or built-in datatypes are referred to as Derived Data Types. These can be of four types namely: 
    - Function
    - Array
    - Pointer
    - Reference

3. **Abstract** or **User-Defined Data Types**: These data types are defined by user itself. Like, defining a class in C++ or a structure. C++ provides the following user-defined datatypes: 
    - Class
    - Structure
    - Union
    - Enumeration
    - Typedef defined DataType

Here we only discuss about __primitive data types__ available in C++. 
- __Integer__: Keyword used for integer data types is int. Integers typically requires 4 bytes of memory space and ranges from -2147483648 to 2147483647. 
 
- __Character__: Character data type is used for storing characters. Keyword used for character data type is char. Characters typically requires 1 byte of memory space and ranges from -128 to 127 or 0 to 255. 
 
- __Boolean__: Boolean data type is used for storing boolean or logical values. A boolean variable can store either true or false. Keyword used for boolean data type is bool. 
 
- __Floating Point__: Floating Point data type is used for storing single precision floating point values or decimal values. Keyword used for floating point data type is float. Float variables typically requires 4 byte of memory space. 
 
- __Double Floating Point__: Double Floating Point data type is used for storing double precision floating point values or decimal values. Keyword used for double floating point data type is double. Double variables typically requires 8 byte of memory space. 
 
- __void__: Void means without any value. void datatype represents a valueless entity. Void data type is used for those function which does not returns a value. 
 
- __Wide Character__: Wide character data type is also a character data type but this data type has size greater than the normal 8-bit datatype. Represented by wchar_t. It is generally 2 or 4 bytes long. 
 
 

### Datatype Modifiers

As the name implies, datatype modifiers are used with the built-in data types to modify the length of data that a particular data type can hold. 

!['modifiers'](https://github.com/PrakashAnalyst/Cpp-programming-for-beginners/blob/main/02%20Data%20Types/images/modifiers.png)

**Data type modifiers** available in C++ are: 
- **Signed**
- **Unsigned**
- **Short**
- **Long**

Below table summarizes the modified size and range of built-in datatypes when combined with the type modifiers:

|Data Type              |	Size (in bytes)	| Range                           |
|-----------------------|-----------------|---------------------------------|
|short int	            | 2	              | -32,768 to 32,767               |
|unsigned short int     |	2	              | 0 to 65,535                     |
|unsigned int	          | 4	              | 0 to 4,294,967,295              |
|int	                  | 4	              | -2,147,483,648 to 2,147,483,647 |
|long int	              | 4	              | -2,147,483,648 to 2,147,483,647 |
|unsigned long int	    | 8	              | 0 to 4,294,967,295              | 
|long long int	        | 8	              | -(2^63) to (2^63)-1             |
|unsigned long long int | 8	              | 0 to 18,446,744,073,709,551,615 |
|signed char	          | 1	              | -128 to 127                     |
|unsigned char	        | 1	              | 0 to 255                        |
|float	                | 4	              |                                 |
|double	                | 8	              |                                 |
|long double	          | 12              |	                                |
|wchar_t	              | 2 or 4	        | 1 wide character                |

**Note :** Above values may vary from compiler to compiler. In the above example, we have considered GCC 32 bit. 
