#pragma once 
#include <iostream>
using namespace std;

class Rectangle{

private:

float length;
float width;


public:
Rectangle();
Rectangle(float len, float wid);
~Rectangle();

void setLength(float newLength);
float getLength();

void setWidth(float newWidth);
float getWidth();

float Area();



}; 