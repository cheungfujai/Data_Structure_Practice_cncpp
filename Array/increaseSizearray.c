/*
===========================================================================================================================
About_this_code: 	 First small exercise to start with the revision of array.
Compiler: 		 GCC, GNU Compiler Collection, "gcc -o compilefile increaseSizearray.c"
Author: 		 Cheung Tsz Yin
Github:			 kevin909cty
Date:   		 23 / 07 / 2019
Comment: 		 Please feel free to contact me if there are any mistake or code that 
			 can be further improve. Thank you very much! ^_^ 
Contact email: 	 	 cheungkevinviola909@gmail.com
===========================================================================================================================
*/

#include <stdio.h>
#include <stdlib.h>

//int copyArray();
int* createArray(int size);
int* assignArray(int* passinPtr, int passinSize);
void printArray(int* passinPtr, int passinSize);
int* copyArray(int* biggerarray, int* smallerarray, int newS, int oldS);

int main(){
	int oldsize = 5;
	int newsize = 10;

	int* mainPtr = createArray(oldsize);
	assignArray(mainPtr, oldsize);
	printArray(mainPtr, oldsize);

	int* newPtr = createArray(newsize);
	copyArray(newPtr, mainPtr, newsize, oldsize);
	printArray(newPtr, newsize);

	return 0;
}

int* createArray(int size){
	int* ptr = (int*)malloc(size * sizeof(int));
	return ptr;
}

int* assignArray(int* passinPtr, int passinSize){
	for(int i = 0; i < passinSize; i++){
		passinPtr[i] = i;
	}
	return passinPtr;
}

void printArray(int* passinPtr, int passinSize){
	for(int i = 0; i < passinSize; i++){
		printf("passinPtr[%d] = %d\n", i, passinPtr[i]);
	}
}

int* copyArray(int* biggerarray, int* smallerarray, int newS, int oldS){
	printf("\n\nCopying_array......\n\n");
	for(int i = 0; i < newS; i++){
		if(i < oldS){
			biggerarray[i] = smallerarray[i];
		}
		else{
			biggerarray[i] = 0;
		}
	}
	free(smallerarray);
	biggerarray = smallerarray;
	biggerarray = NULL;
	return smallerarray;
}