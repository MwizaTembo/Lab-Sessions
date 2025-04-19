#include <iostream>
#include "Rectangle.h"

int main(){
Rectangle instance1;

float input1, input2;

cout << "Enter length: " << endl;

cin >> input1;

instance1.setLength(input1);

cout << "Enter width: " << endl;
cin >> input2;

instance1.setWidth(input2);

cout << "Entered value for length is: " << instance1.getLength() << endl;
cout << "Entered value for width is: " << instance1.getWidth() << endl;
cout << "Area of the rectangle is: " << instance1.Area() << endl;

Rectangle instance2;

//instance2.Rectangle(input1, input2);

cout << "New Area: " << instance2.Area() << endl;

return 0;
}