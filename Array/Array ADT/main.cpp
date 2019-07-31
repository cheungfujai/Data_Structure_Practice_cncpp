/*
===========================================================================================================================
About_this_code: 	 Array ADT with data as a struct and operations as functions in C++.
Compiler: 		 GCC, GNU Compiler Collection, "g++ -lctypt -std=c++0x main.cpp -o compilefile"
Author: 		 Cheung Tsz Yin
Github:			 kevin909cty
Date:   		 28 / 07 / 2019
Comment: 		 Please feel free to contact me if there are any mistake or code that 
			 can be further improve. Thank you very much! ^_^ 
Contact email: 	 	 cheungkevinviola909@gmail.com
===========================================================================================================================
*/
#include <iostream>
#include "arrayfun.h"

using namespace std;

int main(){
	int size = 10;
	int length = 5;
	Array newArray(size, length);
	newArray.append(852);
	newArray.deleteFun(852, length);
	newArray.linearSearch(4);
	newArray.swap(0, 4);
	newArray.binarySet(0);
	newArray.binarySearch(7, 0, size - 1);
	newArray.findMax();
	newArray.findMin();
	cout << "The sum is " << newArray.findSum() << "\n";
	cout << "The sum return using recursion is " << newArray.sumRecursion(size - 1);
	cout << "The average is " << newArray.average() << "\n\n";
	newArray.reverse();
	newArray.display();
	cout << "Is the array sort?  ->  " << std::boolalpha << newArray.checkSort() << "\n" << std::endl; 
}