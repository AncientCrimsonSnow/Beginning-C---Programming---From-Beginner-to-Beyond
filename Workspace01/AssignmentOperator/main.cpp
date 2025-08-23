#include <iostream>

using namespace std;

int main(){
    
    int num2 {20};
    
    int* num1 = &num2;
    
    for(int i = 0; i < 1000; i++){
       cout << "num1 is " << *num1++ << endl; 
    }
    return 0;
}