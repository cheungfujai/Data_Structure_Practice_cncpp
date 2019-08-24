/*
============================================================================================================================
About_this_code: 	 Revising string and character array with this self-exercise.
Compiler: 		 GCC, GNU Compiler Collection, "g++ -std=c++0x main.cpp stringFun.cpp stringFun.h -o compilefile"
Author: 		 Cheung Tsz Yin
Github:			 kevin909cty
Date:   		 16 / 08 / 2019
Comment: 		 Please feel free to contact me if there are any mistake or code that 
			 can be further improve. Thank you very much! ^_^ 
Contact email: 	 	 cheungkevinviola909@gmail.com
============================================================================================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "stringFun.h"
using namespace std;

int main(){
	
	char* mainString = new char[50];
	cout << "'\nPlease input string to run the program: ";
	String objString(gets(mainString));
	objString.changeUpper();
	objString.changeLower();
	objString.countVowel();
	objString.countWord();
	objString.reverse();
	objString.displayString();
	objString.palindrome();
	objString.anagram();
	objString.findDuplicate();
	objString.findDuplicate_hash();
	objString.reverse();
	objString.findDuplicate_bitwise();
	return 0;

}