#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person{

public:

Person();
Person(string Name, float newWeight);


~Person();

//declaring a conversion operator
operator int();
operator string();
operator float();

//Overload the add operator
//to be able to add two objects together
Person operator + (const Person& otherPerson);
 Person operator == (const Person& otherPerson);

 Person operator !=(const Person& otherPerson);

 Person operator < (const Person& age);
 Person operator >(const Person& age);

private:
float mWeight;
string mFirstName;
int mAge;
};