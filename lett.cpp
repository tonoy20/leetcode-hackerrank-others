#include <iostream>
using namespace std;
int main() {
   char myArray[]={'x','x','y','y'};
   int sizeOfArray = sizeof(myArray) / sizeof(myArray[0]);
   cout << sizeOfArray << endl;
   return 0;
}
