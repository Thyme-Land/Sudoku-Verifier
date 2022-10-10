#include <iostream>
#include <string>
#include <cstring>
#include "sudoku_row_checker.h"

using namespace std;

SudokuRowChecker::SudokuRowChecker(){
sudokuRow = "000000000";
loadArray();
}

void SudokuRowChecker::setData(const char * s){
		strcpy(sudokuArray, s);
 }

void SudokuRowChecker::setDataString( std::string s ){
sudokuRow = s;
loadArray();
}

void SudokuRowChecker::clear(){
sudokuRow = "000000000";
loadArray();
}

bool SudokuRowChecker::isValid( ) const{
	for (int i = 0; i < 9; i++){
		if(sudokuArray[i] == '\n'){
			return false;
		}
		for(int j = i; j > 0; j--){
			if(sudokuArray[j] == sudokuArray[j - 1]){
				return false;
			}
		}
	}
	return true;
}

void SudokuRowChecker::loadArray(){

	strcpy(sudokuArray,sudokuRow.c_str());
}
