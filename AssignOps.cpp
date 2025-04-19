#include <iostream>
using namespace std;
int main() {
    int a = 21, c;

c = a;
cout << "Line1- = Operator, value of c = : " << c << endl;

c += a;
cout << "Line2- = Operator, value of c = : " << c << endl;

c -= a;
cout << "Line3- = Operator, value of c = : " << c << endl;

c *= a;
cout << "Line4- = Operator, value of c = : " << c << endl;

c /= a;
cout << "Line5- = Operator, value of c = : " << c << endl;
c = 200;
c %= a;
cout << "Line6- = Operator, value of c = : " << c << endl;


c <<= 2;
cout << "Line7- = Operator, value of c = : " << c << endl;

c >>= 2;
cout << "Line8- >>= operator, value of c : " << c << endl;

c &= 2;
cout << "Line 9- &= operator, value of c : " << c << endl;

c ^= 2;
cout << "Line10- = Operator, value of c = : " << c << endl;

c |= 2;
cout << "Line11- = Operator, value of c = : " << c << endl;

return 0;


}
