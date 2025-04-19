
#include <iostream>
using namespace std;

int SwapNumbers(int& para1, int& para2){

int temp = para1;
para1 = para2;
para2 = temp;
return para1;
return para2;

}


int main(){

int varA = 25;
int varB = 100;

cout << "VarA before swap: " << varA << endl;
cout << "VarB before swap: " << varB << endl;

SwapNumbers(varA, varB);

cout << "VarA after swap: " << varA << endl;
cout << "VarB after swap: " << varB << endl;

return 0;
}