#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "arrayfun.h"

using namespace std;

void Array::display(){
	for(int i = 0; i < size; i++){
		cout << "ptr[" << i << "]" << " = " << ptr[i] << "\n";
	}
	cout << "\nThe length = " << length <<"\n\n";
}

void Array::append(int value){
	ptr[length] = value;
	length++;
}

int* Array::deleteFun(int value, int index){
	for(int i = index; i < length; i++){
		ptr[i] = ptr[i + 1];
	}
	length--;
	return ptr;
}

void Array::linearSearch(int key){
	int count = 0;
	for(int i = 0; i < length; i++){
		if(key == ptr[i]){
			cout << "The value of " << key << "is in the array of index " << i <<"\n";
			count++;
		}
	}
	if(count == 0){
		cout << "The value of " << key << " is not in the array.\n";
	}
}

int* Array::swap(int index1, int index2){
	int tmp = 0;
	tmp = ptr[index1];
	ptr[index1] = ptr[index2];
	ptr[index2] = tmp;
	return ptr;
}

int* Array::binarySet(int n){
	length = 0;
	for(int i = 0; i < size; i++){
		ptr[i] = i + n;
		length++;
	}
	return ptr;
}

void Array::binarySearch(int key, int low, int high){
	if(low >= high){
		printf("Value is not found in the array\n");
	}
	else{
		binaryMid = (low + high) / 2;
		if(ptr[binaryMid] == key){
			printf("BinarySearch Result: Value of %d is at the index of %d\n", key, binaryMid);
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
	cout << "The max is " << max << "\n";
	return max;
}

int Array::findMin(){
	int min = 99;
	for(int i = 0; i < length; i++){
		if (ptr[i] <= min){
			min = ptr[i];
		}
	}
	cout << "The min is " << min << "\n";
	return min;
}

int Array::findSum(){
	int sum = 0;
	for(int i = 0; i < length; i++){
		sum = sum + ptr[i];
	}
	return sum;
}

int Array::sumRecursion(int n){
	if(n < 0){
		return 0;
	}
	else{
		return sumRecursion(n - 1) + ptr[n];
	}
}

int Array::average(){
	int avg = findSum() / length;
	return avg;
}

void Array::reverse(){
	for(int i = 0, j = length - 1; i < j; i++, j--){
		swap(i, j);
	}
}

bool Array::checkSort(){
	for(int i = 0; i < length; i++){
		if(i == length - 1){
			break;
		}
		else{
			if(ptr[i] > ptr[i + 1]){
				return false;
			}
			else{
				continue;
			}
		}
	}
	return true;
}

/*
void Array::merge(Array::passinNewArray, Array passinMergeArray){
	
}
*/