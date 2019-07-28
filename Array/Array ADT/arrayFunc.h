/*
===========================================================================================================================
About_this_code: 	 The header file of this program.
Author: 		 Cheung Tsz Yin
Github:			 kevin909cty
Date:   		 28 / 07 / 2019
Comment: 		 Please feel free to contact me if there are any mistake or code that 
			 can be further improve. Thank you very much! ^_^ 
Contact email: 	 	 cheungkevinviola909@gmail.com
===========================================================================================================================
*/

#ifndef ARRAYFUNC_H_
#define ARRAYFUNC_H_

class Array{
private:
	int size;
	int length;
	int* ptr;
public:
	Array(){

	}
	Array(int conSize, int conLength){
		size = conSize;
		length = conLength;
		ptr = new int[size];
	}
	~Array();
	int getLength() const {return length;}
	int initialize(int setSize);
	void displayArray();
	int append(int value);
	int insert(int valueAdd, int insertIndex);
	int deleteFun(int valueDelete, int deleteIndex);
	int linearSearch(int key);
	void binarySet(int n);
	void binarySearch(int key, int low, int high);
	void swap(int index1, int index2);	
	int findMax();
	int findMin();
	int findSum();
	int sumRecursion(int n);
	int average();
	void reverse();
	bool checkSort();
	void merge(Array passinNewArray, Array passinMergeArray);	
};

#endif