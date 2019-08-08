/*
============================================================================================================================
About_this_code: 	 Further implementation on the topic array of finding any missing element and duplicated element in C++.
Compiler: 		 GCC, GNU Compiler Collection, "g++ -std=c++0x array2.cpp -o compilefile"
Author: 		 Cheung Tsz Yin
Github:			 kevin909cty
Date:   		 08 / 08 / 2019
Comment: 		 Please feel free to contact me if there are any mistake or code that 
			 can be further improve. Thank you very much! ^_^ 
Contact email: 	 	 cheungkevinviola909@gmail.com
============================================================================================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Array{
private:
	int size;
	int length;
	int ptr[12] = {3, 7, 4, 9, 12, 4, 6, 1, 11, 2, 10, 12};
				// 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12
				// Missing: 	5, 8
				// Duplicated:	12, 4
public:
	Array(){
		size = 12;
		length = 12;
	}
	~Array(){
		//delete []ptr;
	}
	void display();
	void missing();
	void duplicating();
	int findMax();
	void check8();
};

void Array::missing(){
	int max = findMax();
	int* missingcheck = new int[max];
	for(int i = 1; i <= max; i++){
		missingcheck[i] = 999;
	}
	for(int j = 0; j < size; j++){
		missingcheck[ptr[j]] = ptr[j];
	}
	for(int i = 1; i <= max; i++){
		if(missingcheck[i] == 999){
			cout << "The missing element = " << i << "\n";
		}
	}
}

void Array::duplicating(){
	int max = findMax();
	int* missingcheck = new int[max];
	for(int i = 1; i <= max; i++){
		missingcheck[i] = 0;
	}
	for(int j = 0; j < size; j++){
		missingcheck[ptr[j]]++;
	}
	for(int i = 1; i <= max; i++){
		if(missingcheck[i] > 1){
			cout << "The duplicated element " << i << " duplicated " << missingcheck[i] - 1 <<" time\n";
		}
	}
}

void Array::display(){
	for(int i = 0; i < size; i++){
		cout << "ptr[" << i << "]" << " = " << ptr[i] << "\n";
	}
}

int Array::findMax(){
	int max = 0;
	for (int i = 0; i < size; i++){
		if (ptr[i] >= max){
			max = ptr[i];
		}
	}
	return max;
}

void Array::check8(){
	for(int i = 0; i < size; i++){
		for(int j = i + 1; j < size; j++){
			if (ptr[i] + ptr[j] == 8){
				printf("Value of %d + %d = 8\n", ptr[i], ptr[j]);
			}
		}
	}
}

int main(){
	Array newArray;
	newArray.check8();
}
