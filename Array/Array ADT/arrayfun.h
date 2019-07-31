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

#ifndef ARRAYFUN_H_
#define ARRAYFUN_H_

	class Array{
	private:
		int size;
		int length;
		int* ptr;
	public:
		int binaryMid = 0;
		Array(){}
		Array(int passinSize){
			size = passinSize;
			ptr = new int[size];
			for(int i = 0; i < passinSize; i++){
				ptr[i] = i;
				length++;
			}
		}
		Array(int passinSize, int passinLength){
			size = passinSize;
			length = passinLength;
			ptr = new int[size];
			for(int i = 0; i < passinLength; i++){
				ptr[i] = i;
			}}
		
		~Array(){delete []ptr;}
		int getLength(){return length;}
		void setLength(int passinLength){length = passinLength;}
		int* getPtr(){return ptr;}
		void setPtr(int* passinPtr){ptr = passinPtr;}
		//Function:
		void display();
		void append(int value);
		int* deleteFun(int value, int index);
		void linearSearch(int key);
		int* swap(int index1, int index2);
		int* binarySet(int n);
		void binarySearch(int key, int low, int high);
		int findMax();
		int findMin();
		int findSum();
		int sumRecursion(int n);
		int average();
		void reverse();
		bool checkSort();
		//void merge(Array passinNewArray, Array passinMergeArray);
	};

#endif 