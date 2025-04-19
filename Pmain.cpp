#include<iostream>
using namespace std;
#include "Person.h"
int main(){

Person Jane = Person("Jane", 60.0f);
Person John = Person("John", 75.0f);

float totatWeight = Jane + John;

cout << "Total Weigth: " << totatWeight << endl;

if (Jane == John){
    
cout <<"This is the same person" << endl;
}
if (Jane != John){
    cout << "This is NOT the same person" << endl;
}

int johnAge = John;
cout < "John's Age : " << johnAge << endl;

string janeFirstName = Jane;
cout << "Jane's first name " << janeFirstName << endl;

float janeWeight = Jane;
cout << "Jane's weight " << janeWeight << endl;

return 0;
}
