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
  int age  = 70;
  int ageAtLastExam = 16;
  bool isNotIntoxicated = true;
  
  if ((age >= 1) && (age < 16)){
    cout << "You can not drive." << endl;
  }else if (!isNotIntoxicated){
    cout << "You can not drive." << endl;
  }else if (age >=80 && ((age > 100) || age - ageAtLastExam > 5)){
    cout << "You can not drive." << endl;
  }else{
    cout << "You can drive." << endl;
  }
  
  // NEXT ::: SWITCH STATEMENTS
  int greetingOption = 1;
  
  switch (greetingOption) {
    case 1:
      cout << "bonjour" << endl;
      break;
    case 2:
      cout << "hola" << '\n';
      break;
    case 3:
      cout << "hallo" << endl;
      break;
    default :
      cout << "hello" << endl;
    
    
  }
  
  // NEXT :: TERNARY OPERATORS
  int x  = 5;
  int y = 2;
  int largestNum = (x>y) ? x : y;
  
  cout << "the largestNum is : ";
  cout << largestNum << endl;
  
  // NEXT :: ARRAYS 
  
  // https://youtu.be/Rub-JsjMhWY?t=13m52s
  
  return 0;
}