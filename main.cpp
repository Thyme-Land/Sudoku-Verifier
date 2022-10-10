/** ------------------- **/
/** DO NOT MODIFY START **/
/** ------------------- **/
#include <iostream>
#include "sudoku_row_checker.h"
#include "tests.h"

using namespace std;

void personalTests();

int main() {
  SudokuRowChecker checker;
  string input="", cont="y";
  
  while (cont == "y"){
    cout << "1) setData 2) setDataString 3) unittests 4) personalTests\n";
    cin >> input;
    
    switch(stoi(input)){
      case 1:
        cout << "checker <--- ";
        cin >> input;
        checker.setData(input.c_str());
        checkAndClear(checker);
        break;
      case 2:
        cout << "checker <--- ";
        cin >> input;
        checker.setDataString(input);   
        checkAndClear(checker);
        break;
      case 3:
        cout << "     1) setData 2) setDataString 3) clear\n";
        cin >> input;
        unittests(stoi(input));
        break;
      case 4: 
        personalTests();
        break;
    }
  cout << "Continue(y/n)? \n";
  cin >> cont;
  }
} 
/** ----------------- **/
/** DO NOT MODIFY END **/
/** ----------------- **/


void personalTests(){
  cout << "Running My Tests...\n\n";
}