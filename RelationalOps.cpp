#include <iostream>
using namespace std;

int main() {
    int a = 21;
    int b = 10;
    int c;
    if (a == b){
        cout << " Line 1- a is equal to b" << endl;
    } else {
        cout << "Line 1- a is not equal to b" << endl;
    }
    if (a < b){
        cout << "Line 2- b is gretaer than a" << endl;
    }else {
        cout << "line 2- a is greater the b" << endl;
    }
    if (a > b){
        cout << "Line 3- a is gretaer than b" << endl;
    }else {
        cout << "line 3- b is greater the a" << endl;
    }
//lets change the values of a and b
a = 5;
b = 20;
if (a <= b){
    cout << "Line 4- a is either less than or equal to b" << endl;
}
if (a >= b){
    cout << "Line 5- b is either greater than or equal to b" << endl;

}
return 0;
}
