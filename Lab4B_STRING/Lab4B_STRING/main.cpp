/////////////////////////////////////////////////////////////////////////////////////
//                                                                     
// Filename:main.cpp
// Date: Oct 25, 2018
// Programmer: Shengkai Xu
//
// Description:
//    A word search program that searches an input data file for a word specified by the user.
// 
/////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////
//
// Class: main function
//                                                                   
// Description:
//    Main function to call function from source.cpp
// 
/////////////////////////////////////////////////////////////////////////////////////

#include "pch.h"
#include "header.h"

int main()
{
	
	processFile(infile, word, wordCount, nonVowelCount);

	



	inFile.close();
	return 0;

}
