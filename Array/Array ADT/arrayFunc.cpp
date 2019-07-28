#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "arrayFunc.h"

using namespace std;

int Array::initialize(int setSize){
	Array.length = 0;
	for(int i = 0; i < setSize; i++){
		ptr[i] = 0;
		length++;
	}
	return length;
}

void Array::displayArray(){
	for(int i = 0; i < length; i++){
		printf("passinArray[%d] = %d \n", i, ptr[i]);
	}
	printf("\nArray Length:  = %d\n\n", length);
}

int Array::append(int value){
	ptr[Array.length] = value;
	length++;
	return length;
}

int Array::insert(int valueAdd, int insertIndex){
	for(int i = length; i >= insertIndex; i--){
		ptr[i + 1] = ptr[i];
	}
	length++;
	ptr[insertIndex] = valueAdd;
	return length;
}

int Array::deleteFun(int valueDelete, int deleteIndex){
	for(int i = deleteIndex; i < length; i++){
		ptr[i] = ptr[i + 1];
	}
	length--;
	return length;
}

int Array::linearSearch(int key){
	for(int i = 0; i < ArrayArray.length; i++){
		if(key == ptr[i]){
			return i;
		}
	}
	return -1;
}

void Array::swap(int index1, int index2){
	int tmp = 0;
	tmp = ptr[index1];
	ptr[index1] = ptr[index2];
	ptr[index2] = tmp;
}

void Array::binarySet(int n){
	for(int i = 0; i < length; i++){
		ptr[i] = i + n;
	}
}

void Array::binarySearch(int key, int low, int high){
	if(low >= high){
		printf("Value is not found in the array\n");
	}
	else{
		binaryMid = (low + high) / 2;
		if(ptr[binaryMid] == key){
			printf("BinarySearch Result: Value of %d is at the index of %d\n", key, linearSearch(passinArray, key));
		}
		else if (binaryMid <= key){
			return binarySearch(key, low + 1, high);
		}
		else{
			return binarySearch(key, low, high - 1);
		}
	}
}

int Array::findMax(){
	int max = 0;
	for (int i = 0; i < length; i++){
		if (ptr[i] >= max){
			max = ptr[i];
		}
	}
	return max;
}

int Array::findMin(){
	int min = 99;
	for(int i = 0; i < length; i++){
		if (ptr[i] <= min){
			min = ptr[i];
		}
	}
	return min;
}

int Array::findSum(){
	int sum = 0;
	for(int i = 0; i < passinArray.length; i++){
		sum = sum + passinArray.ptr[i];
	}
	return sum;
}

int Array::sumRecursion(int n){
	if(n < 0){
		return 0;
	}
	else{
		return sumRecursion(passinArray, n - 1) + passinArray.ptr[n];
	}
}

int Array::average(){
	int avg = findSum(passinArray) / (passinArray.length);
	return avg;
}

void Array::reverse(){
	for(int i = 0, j = passinArray.length - 1; i < j; i++, j--){
		swap(passinArray, i, j);
	}
}

bool Array::checkSort(){
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

void Array::merge(Array passinNewArray, Array passinMergeArray){
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

Array::~Array(){
	delete []ptr;
}