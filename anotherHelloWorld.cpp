#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "math.h"

using namespace std;

int main(){
  cout << "Hello World" <<endl;
  
  const double PI = 3.14;
  // value can not be changed
  
  char myGrade = 'B';
  
  bool isHappy = true;
  
  float favNum = 3.14;
  
  int zeroInt = 0; // 4 ints
  short int lowShortInt = -36767; // 2 bits
  short int highShortInt  = 36767; // 2 bits
  // 4 bits
  unsigned short int lowUnsignedShortInt = 0; // 2 bits
  unsigned int highUnsignedShortInt= 65535; // 4 bits
  //
  long int lowLongInt = -2147483647; // 8 bits
  long int highLongInt = 2147483647; // 8 bits
  
  unsigned long int lowUnsignedLongInt=  0 ; // 8 bits 
  unsigned long int highUnsignedLongInt  = 4294967295; // 8 bits
  
  cout << "Size of Ints " << sizeof(highUnsignedLongInt) << endl;
  
  cout << "High Long Int " << highLongInt << endl;
  
  long int highLongInt2 = pow(2,31)-1; //32bits ??
  
  cout << "High Long Int " << highLongInt2 << endl;
  
  
  
  cout << "division - 4/5 " << 4/5 << endl;
  
  cout << "float division - 4/5 " << (float) 4/5 << endl;
  
  // NEXT ::: IF STATEMENTS
  // https://youtu.be/Rub-JsjMhWY?t=10m13s
  
  return 0;
}