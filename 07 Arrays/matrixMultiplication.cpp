#include <iostream>  
using namespace std;  
int main()  
{  
	int rows, cols, i, j, k;    
	cout<<"Enter the number of row : ";    
	cin>>rows;    
	cout<<"Enter the number of column : ";    
	cin>>cols;    
	int a[rows][cols], b[rows][cols], mul[rows][cols];
	
	cout<<"Enter the first matrix element : " << endl;    
	for(i=0; i < rows; i++) {    
		for(j=0; j < cols; j++) {
			cout << "Enter the element a[" << i << j << "] : ";    
			cin>>a[i][j];  
		}    
	}    
	
	cout<< endl << "Enter the second matrix element : " << endl;    
	for(i=0; i < rows; i++) {    
		for(j=0; j < cols; j++) {
			cout << "Enter the element b[" << i << j << "] : ";    
			cin>>b[i][j];  
		}    
	}    
	
	cout<< endl << "Multiply of the matrices : " << endl;    
	for(i=0; i < rows; i++) {    
		for(j=0; j <cols; j++) {    
			mul[i][j]=0;    
			for(k=0; k < cols; k++) {    
				mul[i][j] += a[i][k] * b[k][j];    
			}    
		}    
	}    
	  
	for(i=0; i < rows; i++) {    
		for(j=0; j < cols; j++) {    
			cout << mul[i][j] << " ";    
		}    
		cout << endl;    
	}    
	return 0;  
} 