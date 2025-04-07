#include <iostream>
using namespace std;

int main() {
    int numbersArray[5];

    int* pPointer = nullptr;
pPointer = numbersArray;
*pPointer = 10;

/*increment pointer using pointer arithmetic to assign the address of the second element to the pointer*/
pPointer++;
*pPointer = 20;

/*assign the address of the third element to the pointer */
pPointer = &numbersArray[2];
*pPointer = 30;//assigning value to third elemnt
/*assign the address of the fourth element to the pointer using pointer arithmetic*/
pPointer = numbersArray + 3;
*pPointer = 40;

pPointer = numbersArray;
*(pPointer +4) = 50;

//iteraate and output all the elements in the array
for (int n = 0; n < 5; n++){
    cout << numbersArray[n] << ", " << endl;
}

return 0;














}