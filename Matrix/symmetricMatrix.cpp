/*
============================================================================================================================
About_this_code: 	 Further implementation on the topic array of finding any missing element and duplicated element in C++.
Compiler: 		 GCC, GNU Compiler Collection, "g++ -std=c++0x symmetricMatrix.cpp -o compilefile"
Author: 		 Cheung Tsz Yin
Github:			 kevin909cty
Date:   		 30 / 09 / 2019
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
	int* ptr;
public:
	Matrix(int passinSize){
		size = passinSize;
		ptr = new int[size * size];
	}
	~Matrix(){delete []ptr;}
	
	void setArray(int i, int j, int passinvalueInput){
		ptr[size * i + j] = passinvalueInput;
	}
	int getArray(int i, int j){
		return ptr[size * i + j];
	}

	void display();
};

int main(){
	
	int matrixSize;
	int valueInput;
	cout << "\n********************************************\n";
	cout << "*** Please input the Diagonal Matrix Size: ";
	cin >> matrixSize;
	cout << "*** The size you entered is: " << matrixSize << endl;
	cout << "********************************************\n";

	Matrix newMatrix(matrixSize);
	for(int i = 0; i < matrixSize; i++){
		for(int j = 0; j < matrixSize; j++){
			if(j <= i){
				valueInput = j;
			}
			else{
				valueInput = i;
			}
			newMatrix.setArray(i, j, valueInput);
		}
	}
	newMatrix.display();

	return 0;

}

void Matrix::display(){
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			printf("%d ", ptr[size * i + j]);
		}
		printf("\n");
	}
}