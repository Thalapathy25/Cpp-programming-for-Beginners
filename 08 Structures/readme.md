## C++ Structures
- `Structure` is a collection of variables of different data types under a single name. 
- It is similar to a class in that, both holds a collecion of data of different data types.

### Syntax of Structure
```cpp
struct structure_name  
{  
     // member declarations.  
}
```
In the above declaration, a structure is declared by preceding the `struct` keyword followed by the identifier(structure name). 
Inside the curly braces, we can declare the member variables of different types.

**Example**
```cpp
struct Student  
{  
    char name[20];  
     int id;  
     int age;  
}
```
In the above case, `Student` is a structure contains three variables `name`, `id`, and `age`. When the structure is declared, no memory is allocated. 
When the variable of a structure is created, then the memory is allocated.

### Create the instance of Structure
Structure variable can be defined as:
```cpp
<structure name> <instance name>;
```
**Example**
```cpp
Student st;
```
Here, `st` is a structure variable of type `Student`. 
When the structure variable is created, the memory will be allocated. 
`Student` structure contains one `char` variable and two `integer` variable. 
Therefore, the memory for one char variable is `1` byte and two ints will be `2 * 4 = 8`. 
The total memory occupied by the `st` variable is `9` byte.

### Access the variable of Structure:
The variable of the structure can be accessed by simply using the instance of the structure followed by the `dot(.)` operator and 
then the field of the structure.

**Example:**
```cpp
st.id = 4;
```
In the above statement, we are accessing the id field of the structure Student by using the `dot(.)` operator and assigns the value `4` to the `id` field.
