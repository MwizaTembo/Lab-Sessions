#pragma once
#include "Box.h"

Box::Box(){
    length = 0.0;
    breadth = 0.0;
    height = 0.0;

}
Box::Box(const double newLength, const double newBreadth, const double newHeight){
    length = newLength;
    height = newHeight;
    breadth = newBreadth;

}
Box::~Box(){}

double Box::getVolume(){
    return length * breadth * height;
}
void Box::setLength(double len){
    length = len;
}
void Box::setHeight(double hei){
    height = hei;
}
void Box::setBreadth(double bre){
    breadth = bre;

}
Box Box::operator+(const Box& b){
    Box box;

    box.length = this->length + b.length;
    box.breadth = this->breadth + b.breadth;
    box.height = this->height + b.height;
    return box;
}
