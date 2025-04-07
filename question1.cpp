#include <iostream>
using namespace std;

int main(){

int* dynamicInteger = new int;
string* dynamicString = new string;

cout << "Enter an integer: " << endl;
cin >> *dynamicInteger;

cout << "Enter a string of characters: " << endl;
cin >> *dynamicString;

cout << "Value of dynamically allocated integer: " << *dynamicInteger<< endl;
cout << "Value of dynamically allocated string: " << *dynamicString<< endl;

delete dynamicInteger;
delete dynamicString;

return 0;


}