#include <iostream>
using namespace std;

int main(){

    int x = 3;

//the val of x increased after the initial val of x is assigned to y
//hence the val of y is the val of x before it was increased 

int y = x++;
cout << "x: " << x << endl;
cout << "y: " << y << endl;



}