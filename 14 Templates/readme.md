## C++ Templates
- A C++ template is a powerful feature added to C++. 
- It allows you to define the generic classes and generic functions and thus provides support for generic programming. 
- Generic programming is a technique where generic types are used as parameters in algorithms so that they can work for a variety of data types.

Templates can be represented in two ways:
1. Function templates
2. Class templates

### Function Template
- Generic functions use the concept of a function template. 
- Generic functions define a set of operations that can be applied to the various types of data.
- The type of the data that the function will operate on depends on the type of the data passed as a parameter.
- For example, Quick sorting algorithm is implemented using a generic function, it can be implemented to an array of integers or array of floats.
- A Generic function is created by using the keyword `template`.

**Syntax of Function Template**
```cpp
template < class Ttype> ret_type func_name(parameter_list)  
{  
    // body of function.  
}
```


### Class Template
- Class Template can also be defined similarly to the Function Template. 
- When a class uses the concept of Template, then the class is known as __generic class__.

**Syntax of Class Template**
```cpp
template<class Ttype>  
class class_name  
{  
   // body of class.  
}
```
