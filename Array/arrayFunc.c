/*
===========================================================================================================================
About_this_code: 	 Array ADT with data as a struct and operations as functions.
					 Operation functions included:
					  - Initialize an array
					  - Display the array
					  - Append an element to an array 
					  - Insert an element at a certain index of an array
					  - Delete an element at a certain index of an array
					  - Linear Search
					  - Binary Search
Compiler: 		 GCC, GNU Compiler Collection, "gcc -o compilefile arrayFunc.c"
Author: 		 Cheung Tsz Yin
Github:			 kevin909cty
Date:   		 25 / 07 / 2019
Comment: 		 Please feel free to contact me if there are any mistake or code that 
			 can be further improve. Thank you very much! ^_^ 
Contact email: 	 	 cheungkevinviola909@gmail.com
===========================================================================================================================
*/

#include<stdio.h>
#include<stdlib.h>

/*
void append(struct Array arrayPassin, int value);
void insert(struct Array arrayPassin, int value int insertIndex);*/


typedef struct Array{
	int *ptr;
	int size;
	int length;
}arr;

int initialize(arr passinArray, int setSize);
void displayArray(arr passinArray);
int append(arr passinArray, int value);
int insert(arr passinArray, int valueAdd, int insertIndex);
int delete(arr passinArray, int valueDelete, int deleteIndex);
int linearSearch(arr passinArray, int key);

int main(){
	arr newArray;
	newArray.size = 10;
	newArray.ptr = (int*)malloc(newArray.size * sizeof(int));
	newArray.length = initialize(newArray, 5);
	displayArray(newArray);
	newArray.length = append(newArray, 999);
	newArray.length = insert(newArray, 3, 2);
	printf("\nArray after pass through all function operations...\n\n");
	displayArray(newArray);
	newArray.length = delete(newArray, 6, 999);
	printf("\nArray after pass through all function operations...\n");
	linearSearch(newArray, 3);
	displayArray(newArray);
	linearSearch(newArray, 88);
	return 0;
}

int initialize(arr passinArray, int setSize){
	passinArray.length = 0;
	for(int i = 0; i < setSize; i++){
		passinArray.ptr[i] = 0;
		passinArray.length++;
	}
	return passinArray.length;
}

void displayArray(arr passinArray){
	for(int i = 0; i < passinArray.length; i++){
		printf("passinArray[%d] = %d \n", i, passinArray.ptr[i]);
	}
	printf("Array Length:  = %d\n", passinArray.length);
}

int append(arr passinArray, int value){
	passinArray.ptr[passinArray.length] = value;
	passinArray.length++;
	return passinArray.length;
}

int insert(arr passinArray, int valueAdd, int insertIndex){
	for(int i = passinArray.length; i >= insertIndex; i--){
		passinArray.ptr[i + 1] = passinArray.ptr[i];
	}
	passinArray.length++;
	passinArray.ptr[insertIndex] = valueAdd;
	return passinArray.length;
}

int delete(arr passinArray, int valueDelete, int deleteIndex){
	for(int i = deleteIndex; i < passinArray.length; i++){
		passinArray.ptr[i] = passinArray.ptr[i + 1];
	}
	passinArray.length--;
	return passinArray.length;
}

int linearSearch(arr passinArray, int key){
	printf("\nLinear Search of value %d\n", key);
	for(int i = 0; i < passinArray.length; i++){
		if(key == passinArray.ptr[i]){
			printf("The key of %d is at the index of %d\n\n", key, i);
			return i;
		}
	}
	printf("The key of %d is not in the array\n", key);
	return -1;
}