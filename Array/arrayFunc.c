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
#include <stdbool.h>

// Declare the class of array
typedef struct Array{
	int *ptr;
	int size;
	int length;
}arr;

// Operation function prototype
int initialize(arr passinArray, int setSize);
void displayArray(arr passinArray);
int append(arr passinArray, int value);
int insert(arr passinArray, int valueAdd, int insertIndex);
int delete(arr passinArray, int valueDelete, int deleteIndex);
int linearSearch(arr passinArray, int key);
void binarySet(arr passinArray, int n);
void binarySearch(arr passinArray, int key, int low, int high);
void swap(arr passinArray, int index1, int index2);
int findMax(arr passinArray);
int findMin(arr passinArray);
int findSum(arr arrayPassin);
int sumRecursion(arr passinArray, int n);
int average(arr passinArray);
void reverse(arr passinArray);
bool checkSort(arr passinArray);
void merge(arr passinArray, arr passinNewArray, arr passinMergeArray);

// Global variable
int binaryMid = 0; //For the function named [ "binarySearch" ].

// Main function 
int main(){

	// Program Initialisation 
	arr newArray;
	newArray.size = 10;
	newArray.ptr = (int*)malloc(newArray.size * sizeof(int));

	// Array ADT Operation starts here: 
	newArray.length = initialize(newArray, 5);
	newArray.length = append(newArray, 999);
	newArray.length = insert(newArray, 3, 2);
	newArray.length = delete(newArray, 6, 999);
	linearSearch(newArray, 3);
	linearSearch(newArray, 88);
	binarySet(newArray, 5);
	binarySearch(newArray, 9, 0, 5);
	printf("\nMax value in the array  = %d\n", findMax(newArray));
	printf("\nMin value in the array  = %d\n", findMin(newArray));
	printf("\nSum  = %d\n", findSum(newArray));
	printf("\nSum(Recursion)  = %d\n", sumRecursion(newArray, newArray.length - 1));
	printf("\nAverage = %d\n\n", average(newArray));
	reverse(newArray);
	reverse(newArray);
	printf("Is the array sorted? Bool = : %s\n\n", checkSort(newArray) ? "true" : "false");
	
	// Declare a new array for merging
	arr addedArray;
	addedArray.size = 10;
	addedArray.ptr = (int*)malloc(addedArray.size * sizeof(int));
	addedArray.length = initialize(addedArray, 5);
	binarySet(addedArray, 0);

	// Declare the merging array
	arr mergeArray;
	mergeArray.size = newArray.length + addedArray.length;
	mergeArray.ptr = (int*)malloc(mergeArray.size * sizeof(int));
	mergeArray.length = initialize(mergeArray, mergeArray.size);

	merge(newArray, addedArray, mergeArray);
	displayArray(mergeArray);


	// END_OF_PROGRAM
	return 0;
}

// Functions
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
	printf("\nArray Length:  = %d\n\n", passinArray.length);
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
	for(int i = 0; i < passinArray.length; i++){
		if(key == passinArray.ptr[i]){
			return i;
		}
	}
	return -1;
}

void swap(arr passinArray, int index1, int index2){
	int tmp = 0;
	tmp = passinArray.ptr[index1];
	passinArray.ptr[index1] = passinArray.ptr[index2];
	passinArray.ptr[index2] = tmp;
}

void binarySet(arr passinArray, int n){
	for(int i = 0; i < passinArray.length; i++){
		passinArray.ptr[i] = i + n;
	}
}

void binarySearch(arr passinArray, int key, int low, int high){
	if(low >= high){
		printf("Value is not found in the array\n");
	}
	else{
		binaryMid = (low + high) / 2;
		if(passinArray.ptr[binaryMid] == key){
			printf("BinarySearch Result: Value of %d is at the index of %d\n", key, linearSearch(passinArray, key));
		}
		else if (binaryMid <= key){
			return binarySearch(passinArray, key, low + 1, high);
		}
		else{
			return binarySearch(passinArray, key, low, high - 1);
		}
	}
}

int findMax(arr passinArray){
	int max = 0;
	for (int i = 0; i < passinArray.length; i++){
		if (passinArray.ptr[i] >= max){
			max = passinArray.ptr[i];
		}
	}
	return max;
}

int findMin(arr passinArray){
	int min = 99;
	for(int i = 0; i < passinArray.length; i++){
		if (passinArray.ptr[i] <= min){
			min = passinArray.ptr[i];
		}
	}
	return min;
}

int findSum(arr passinArray){
	int sum = 0;
	for(int i = 0; i < passinArray.length; i++){
		sum = sum + passinArray.ptr[i];
	}
	return sum;
}

int sumRecursion(arr passinArray, int n){
	if(n < 0){
		return 0;
	}
	else{
		return sumRecursion(passinArray, n - 1) + passinArray.ptr[n];
	}
}

int average(arr passinArray){
	int avg = findSum(passinArray) / (passinArray.length);
	return avg;
}

void reverse(arr passinArray){
	for(int i = 0, j = passinArray.length - 1; i < j; i++, j--){
		swap(passinArray, i, j);
	}
}

bool checkSort(arr passinArray){
	for(int i = 0; i < passinArray.length; i++){
		if(i == passinArray.length - 1){
			break;
		}
		else{
			if(passinArray.ptr[i] > passinArray.ptr[i + 1]){
				return false;
			}
			else{
				continue;
			}
		}
	}
	return true;
}

void merge(arr passinArray, arr passinNewArray, arr passinMergeArray){
	int i = 0, j = 0, k = 0;;
	while(k < passinMergeArray.length){
		if(passinArray.ptr[i] <= passinNewArray.ptr[j]){
			passinMergeArray.ptr[k] = passinArray.ptr[i];
			i++;
			k++;
		}
		else{
			passinMergeArray.ptr[k] = passinNewArray.ptr[j];
			j++;
			k++;
		}
	}
}