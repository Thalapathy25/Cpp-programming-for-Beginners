## C++ Arrays
- Like other programming languages, array in C++ is a group of similar types of elements that have contiguous memory location.
- In C++ std::array is a container that encapsulates fixed size arrays. In C++, array index starts from 0. We can store only fixed set of elements in C++ array.

### Advantages of C++ Array :- 
- Code Optimization (less code)
- Random Access
- Easy to traverse data
- Easy to manipulate data
- Easy to sort data etc.

### Disadvantages of C++ Array :- 
- Fixed size

### C++ Array Types :- 
There are 2 types of arrays in C++ programming:
- Single Dimensional Array
- Multidimensional Array

### Single Dimensional Array :- 
- A single dimensional array is a group of elements having the same datatype and same name. 
- Individual elements are referred to using common name and unique index of the elements.

**Example program that find the average of the array**
```cpp
#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float sum=0.0, average;

    cout << "Enter the numbers of elements: ";
    cin >> n;
    float num[n];
    cout << endl;

    for(i = 0; i < n; ++i)
    {
        cout << "Enter number " << i + 1 << " : ";
        cin >> num[i];
        sum += num[i];
    }

    average = sum / n;
    cout << endl << "Average = " << average << endl;
    return 0;
}
```

### Multi-dimensional Arrays :- 
- The multidimensional array is also known as rectangular arrays in C++. 
- It can be two dimensional or three dimensional. 
- The data is stored in tabular form (row ∗ column) which is also known as matrix.

**Example program that transpose the given matrix**
```cpp
#include <iostream>
using namespace std;

int main() {
   int row, col, i, j;
   cout << "Enter no of rows : ";
   cin >> row;
   cout << "Enter no of columns : ";
   cin >> col;
   cout << "\nEnter elements of matrix: " << endl;
   int matrix[row][col], transpose[col][row]; 

   // Storing matrix elements
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < col; ++j) {
         cout << "Enter element " << "[" << i + 1 << j + 1 << "] : ";
         cin >> matrix[i][j];
      }
   }

   // Printing the a matrix
   cout << "\nEntered Matrix: " << endl;
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < col; ++j) {
         cout << " " << matrix[i][j];
         if (j == col - 1)
            cout << endl;
      }
   }

   // Computing transpose of the matrix
   for (int i = 0; i < row; ++i)
      for (int j = 0; j < col; ++j) {
         transpose[j][i] = matrix[i][j];
      }

   // Printing the transpose
   cout << "\nTranspose of Matrix: " << endl;
   for (int i = 0; i < col; ++i)
      for (int j = 0; j < row; ++j) {
         cout << " " << transpose[i][j];
         if (j == row - 1)
            cout << endl;
      }

   return 0;
}
```
