#ifndef SUDOKUROWCHECKER_H
#define SUDOKUROWCHECKER_H
#include <string>

using namespace std;

class SudokuRowChecker {

public:

  SudokuRowChecker( );

  void setData( const char * s );

  void setDataString( std::string s );

  void clear();

  bool isValid( ) const;

private:
	
	std::string sudokuRow;
	char sudokuArray[10];

	void loadArray();
};

#endif