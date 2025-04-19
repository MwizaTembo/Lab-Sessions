#include <iostream>
#include <cstring>

using namespace std;

int main() {

char str1[10] = "Hello";
char str2[10] = "World";
char str3[10];
int len;

//copying str1 to str3
strcpy( str3, str1);
cout << "strcpy ( str3, str1): " << str3 << endl;
//concatenate str1 and str2
strcat( str1, str2);
cout << "stcat ( str1,str2): " <<str1 << endl;

//total lenght of str1 after concatination
len = strlen(str1); //to read the lengh
cout << "str1len(str1): " << len << endl;



}