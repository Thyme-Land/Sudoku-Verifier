#include <iostream>
#include "sudoku_row_checker.h"
#include "string"

using namespace std;

void checkAndClear(SudokuRowChecker c){
    if (c.isValid()) {
       cout << "valid\n";
    } else {
       cout << "invalid\n";
    }
    c.clear();
}

void checkEmptyChar(){
      cout << "UnitTest/setDataString/Emptystring: ";
      SudokuRowChecker c1 = SudokuRowChecker();
      char s[] = "";
      c1.setData(s);
      checkAndClear(c1);
}

void checkEmptyString(){
      cout << "UnitTest/setDataString/Emptystring: ";
      SudokuRowChecker c1 = SudokuRowChecker();
      c1.setDataString("");
      checkAndClear(c1);
}
  
void checkClear(){
      cout << "UnitTest/clear/true:         ";
      SudokuRowChecker c = SudokuRowChecker();
      c.setDataString("123456789");
      checkAndClear(c);
      cout << "UnitTest/clear/true + clear: ";
      c.setDataString("123456789");
      c.clear();
      checkAndClear(c);
}
  
  
void unittests(int funcNum){
  switch(funcNum){
    case 1: 
    {
      checkEmptyChar();
      break;
    }
    case 2:
    {
      checkEmptyString();
      break;
    }
    case 3:
    {
      checkClear();
      break;
    }
  }
}
