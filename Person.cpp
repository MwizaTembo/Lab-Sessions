#include "Person.h"


Person::Person(){
    mWeight = 0.0;
    mFirstName = " ";
    mAge = 0;

}
Person::~Person(){}

Person::Person(string Name, float newWeight){
   

}



Person Person::operator+(const Person& otherPerson){
Person person;

person.mWeight = this->mWeight + otherPerson.mWeight;
person.mFirstName = this->mFirstName + otherPerson.mFirstName;
person.mAge = this->mAge + otherPerson.mAge;
return person;

}
Person Person::operator==(const Person& otherPerson){

    Person names;

    names.mFirstName = this->mFirstName == otherPerson.mFirstName;
return names;
}

Person Person::operator!=(const Person& otherPerson){

    Person names;

    names.mFirstName = this->mFirstName != otherPerson.mFirstName;
return names;
}




Person Person::operator<(const Person& age){
    Person Age;

    Age.mAge = this->mAge < age.mAge;
    return Age;
}

Person Person::operator>(const Person& age){
    Person Age;

    Age.mAge = this->mAge >age.mAge;
    return Age;
}

Person::operator int(){
    return mAge;
}
Person::operator string(){
    return mFirstName;

}
Person::operator float(){
    return mWeight;
}