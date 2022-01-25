#include <iostream>  
using namespace std;  
namespace first {    
    float calculate(float x, float y) {   
        cout << "Addition : " << x + y << endl;          
    }    
}    
namespace second {    
    float calculate(float x, float y) {   
        cout << "Subtraction : " << x - y << endl;   
    }    
}   
int main() {  
    first::calculate(20.2325, 10.1125);  
    second::calculate(20.2325, 10.1125);
    return 0;  
}  