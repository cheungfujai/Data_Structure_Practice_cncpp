/*
===========================================================================================================================
About_this_code: 	 Array ADT with data as a struct and operations as functions in C++.
Compiler: 		 GCC, GNU Compiler Collection, "gcc -o compilefile arrayFunc.c"
Author: 		 Cheung Tsz Yin
Github:			 kevin909cty
Date:   		 28 / 07 / 2019
Comment: 		 Please feel free to contact me if there are any mistake or code that 
			 can be further improve. Thank you very much! ^_^ 
Contact email: 	 	 cheungkevinviola909@gmail.com
===========================================================================================================================
*/
#include <iostream>
#include "arrayFunc.h"

using namespace std;

int main(){
	Array newArray(5, 5);

	// Array ADT Operation starts here: 
	newArray.initialize(5);
	newArray.append(999);
	newArray.insert(3, 2);
	newArray.deleteFun( 6, 999);

	newArray.linearSearch(3);
	newArray.linearSearch(88);
	newArray.binarySet(5);
	newArray.binarySearch(9, 0, 5);
	printf("\nMax value in the array  = %d\n", newArray.findMax());
	printf("\nMin value in the array  = %d\n", newArray.findMin());
	printf("\nSum  = %d\n", newArray.findSum());
	printf("\nSum(Recursion)  = %d\n", newArray.sumRecursion(newArray.length - 1));
	printf("\nAverage = %d\n\n", newArray.average());
	newArray.reverse();
	newArray.reverse();
	printf("Is the array sorted? Bool = : %s\n\n", newArray.checkSort() ? "true" : "false");
	
	// Declare a new array for merging
	Array addedArray(5, 5);
	addedArray.initialize(5);
	addedArray.binarySet(0);

	// Declare the merging array
	Array mergeArray(newArray.length + addedArray.length);
	mergeArray.length = mergeArray.initialize(newArray.length + addedArray.length);

	newArray.merge(addedArray, mergeArray);
	mergeArray.displayArray();


	// END_OF_PROGRAM
	return 0;
}