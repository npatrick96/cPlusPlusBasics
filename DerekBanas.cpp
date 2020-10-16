#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "math.h"

using namespace std;

int main(){
  std::cout << "---------------------" << '\n';
  
  // NEXT ::: HELLO WORLD
  char HELLO[] = "HELLO WORLD PROGRAM";
  std::cout << HELLO << '\n';
  char hello[] = "Hello World!";
  cout << hello <<endl;
  std::cout << "---------------------" << '\n';
  
  // NEXT ::: TYPES: CHAR, INT, SHORT, LONG, CONST, ETC.
  std::cout << "TYPES: CHAR, INT, ETC." << '\n';
  char myGrade = 'B';
  
  const double PI = 3.14; // value can not be changed
  
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
  std::cout << "---------------------" << '\n';
  
  // NEXT ::: ARITHMETIC ARITHMETIC
  std::cout << "ARITHMETIC ARITHMETIC" << '\n';
  
  cout << "division - 4/5 " << 4/5 << endl;
  
  cout << "float division - 4/5 " << (float) 4/5 << endl;
  std::cout << "---------------------" << '\n';
  
  // NEXT ::: IF STATEMENTS
  std::cout << "IF STATEMENTS" << '\n';
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
  std::cout << "---------------------" << '\n';
  
  // NEXT ::: SWITCH STATEMENTS
  std::cout << "SWITCH STATEMENTS" << '\n';
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
  std::cout << "---------------------" << '\n';
  
  // NEXT :: TERNARY OPERATORS
  std::cout << "TERNARY OPERATORS" << '\n';
  
  int x  = 5;
  int y = 2;
  int largestNum = (x>y) ? x : y;
  
  cout << "the largestNum is : ";
  cout << largestNum << endl;
  std::cout << "---------------------" << '\n';
  
  
  // NEXT :: ARRAYS 
  std::cout << "ARRAYS" << '\n';
  int myFavNums[5];
  
  int badNums[5] = {4, 12, 12, 13 ,14};
  
  std::cout << "1st Bad Number: " << badNums[0] << '\n';
  std::cout << "---------------------" << '\n';
  
  // NEXT :: MULTI DIMENSION ARRAYS 
  std::cout << "MULTI DIMENSION ARRAYS" << '\n';
  char myMultiDimArr[2][2] = {{'1', '2'},{'a','b'}};
                                        
  std::cout << "2nd number: " << myMultiDimArr[0][1]<< '\n';                                      
  std::cout << "2nd letter: " << myMultiDimArr[1][1]<< '\n';
  
  myMultiDimArr[0][1] = '3'; // change values in array
  myMultiDimArr[1][1] = 'c'; // change values in array
  
  std::cout << "2nd new number: " << myMultiDimArr[0][1]<< '\n';                                      
  std::cout << "2nd new letter: " << myMultiDimArr[1][1]<< '\n';
  
  std::cout << "---------------------" << '\n';
  
  // NEXT :: FOR LOOPS
  std::cout << "FOR LOOPS" << '\n';
  
  for (int i = 0; i <=10; i++) {
    std::cout << i << ' ';
  }
  std::cout << '\n';
  
  for (int j = 0; j < 2; j++) {
    for (int k = 0; k < 2; k++) {
      cout << myMultiDimArr[j][k];
    }
    cout << endl;
  }
  std::cout << "---------------------" << '\n';
  
  // NEXT :: WHILE LOOPS
  std::cout << "WHILE LOOPS" << '\n';
  
  int randNum = (rand() % 100) + 1;
  
  while (randNum != 100){
    std::cout << randNum << ' ';
    randNum = (rand() % 100) + 1;
  }
  cout << randNum << endl;
  
  int index = 1;
  while (index <= 10){
    cout << index << " ";
    index++;
  }   
  cout << endl;   
  
  
  std::cout << "---------------------" << '\n';                            
  
  // NEXT :: DO WHILE LOOPS
  // https://youtu.be/Rub-JsjMhWY?t=1193
  
  return 0;
}