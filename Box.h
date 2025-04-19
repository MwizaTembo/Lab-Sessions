#pragma once
#include <iostream>
using namespace std;

class Box
{
public:

Box();
//implementing a constructor
Box(const double newLength, const double newBreadth, const double newHeight);

~Box();// a deconstructor

//implementing getters and setters
double getVolume();
void setLength(double len);
void setBreadth(double bre);
void setHeight(double hei);

//overload + operator to add two Box objects
Box operator +(const Box& b);

private:

double length, breadth, height;//length, height and breadth of the box



};