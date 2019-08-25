/*
============================================================================================================================
About_this_code: 	 Further implementation on the topic array of finding any missing element and duplicated element in C++.
Compiler: 		 GCC, GNU Compiler Collection, "g++ -std=c++0x diagonalMatrix.cpp -o compilefile"
Author: 		 Cheung Tsz Yin
Github:			 kevin909cty
Date:   		 25 / 08 / 2019
Comment: 		 Please feel free to contact me if there are any mistake or code that 
			 can be further improve. Thank you very much! ^_^ 
Contact email: 	 	 cheungkevinviola909@gmail.com
============================================================================================================================
*/
#include <stdio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

class Matrix{
private:
	int size;
	int** ptr;
	int* singleDiagonal;
public:
	Matrix(){}
	Matrix(int passinSize){
		size = passinSize;
		ptr = new int*[size];
		singleDiagonal = new int[size];
		for(int i = 0; i < size; i++){
			ptr[i] = new int[size];
		}
		for(int i = 0; i < size; i ++){
			for(int j = 0; j < size; j++){
				if(i == j){
					/*Generating pseudorandom number for matrix.
				 	Sequence of the integer generate will be the same.*/
					ptr[i][j] =  (rand() % 10); 
					singleDiagonal[i] = ptr[i][j];
				}
				else{
					ptr[i][j] = 0;
				}
			}
		}
	}
	~Matrix(){delete []ptr, delete []singleDiagonal;}
	void display();
	void singleDisplay();
};

int main(){
	int size;
	cout << "\n*******************************************\n";
	cout << "** Please input the Diagonal Matrix Size: ";
	cin >> size;
	printf("** The size you entered is: %d\n", size);
	cout << "*******************************************\n";

	Matrix newMatrix(size);
	//newMatrix.display();
	newMatrix.singleDisplay();

	return 0;
}

void Matrix::display(){
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			printf("%d ", ptr[i][j]);
		}
		cout << "\n";
	}
}

void Matrix::singleDisplay(){
	for(int i = 0; i < size; i++){
		printf("%d ", singleDiagonal[i]);
	}
	cout << "\n";
}