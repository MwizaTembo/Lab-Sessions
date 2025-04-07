#include <iostream>
using namespace std;

int main(){
/*declare pointer and initialize it so that
it doesnt store a random number*/

int* pPointer = nullptr;
int integerVar = 5;

pPointer = &integerVar;
cout << "IntergerVar: " << integerVar << endl;

cout << "Address of IntegerVar: " << &integerVar << endl;

cout << "pPointer: " << pPointer << endl;

cout << "Address of pointer: " << &pPointer << endl;
return 0;



}