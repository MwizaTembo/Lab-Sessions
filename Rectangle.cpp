#include "Rectangle.h"

Rectangle::Rectangle(){}


Rectangle::Rectangle(float len, float width){//initializing vals in the constructor
   length = 0.0;
  width = 0.0;

}
Rectangle::~Rectangle(){}//definition for destructor

void Rectangle::setLength(float newLength){

length = newLength;

}
float Rectangle::getLength(){

return length;

}
void Rectangle::setWidth(float newWidth){

    width = newWidth;
    
    }
    float Rectangle::getWidth(){
    
    return width;
    
    }

float Rectangle::Area(){

return length * width;

}