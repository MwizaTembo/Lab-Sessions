#include <iostream>
using namespace std;

int main(){
    
int firstValue, secondValue;
 int* pPointer = nullptr;
 pPointer = &firstValue;
 *pPointer = 10;//indirection
 pPointer = &secondValue;
*pPointer = 20;

cout << "First value is: " << firstValue << endl;
cout << "Second value is: " << secondValue << endl;
return 0;

}