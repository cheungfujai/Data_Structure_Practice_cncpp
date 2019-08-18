/*
============================================================================================================================
About_this_code: 	 Revising string and character array with this self-exercise.
Compiler: 		 GCC, GNU Compiler Collection, "g++ -std=c++0x main.cpp -o compilefile"
Author: 		 Cheung Tsz Yin
Github:			 kevin909cty
Date:   		 16 / 08 / 2019
Comment: 		 Please feel free to contact me if there are any mistake or code that 
			 can be further improve. Thank you very much! ^_^ 
Contact email: 	 	 cheungkevinviola909@gmail.com
============================================================================================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class String{
	private:
		int length = 1;
		char* instring;
	public:
		//Construct&Destruct
		String(char* passInstring){
			instring = passInstring;
			for(int i = 0; passInstring[i] != '\0'; i++){
				length++;
			}
		}
		~String(){delete[] instring;}
		//Functions
		void displayString();
		char* changeUpper();
		char* changeLower();
		void countVowel();
		void countWord();
		char* reverse();
		void compareDifferent();
	};

int main(){
	
	char* mainString = new char[50];
	cout << "'\nPlease input string to run the program: ";
	String objString(gets(mainString));
	objString.changeUpper();
	objString.changeLower();
	objString.countVowel();
	objString.countWord();
	objString.reverse();
	objString.displayString();

	return 0;

}

void String::displayString(){
	printf("\nThe string you entered is: %s", instring);
	printf("\nThe length of the string : %d\n", length);
}

char* String::changeUpper(){
	for(int i = 0; instring[i] != '\0' ; i++){
		if(instring[i] >= 97 && instring[i] <= 122){
			instring[i]-=32;
		}
		else if(instring[i] >= 65 && instring[i] <= 90 || instring[i] == 32){
			continue;
		}
		else{
			cout << "Invalid String to change";
		}
	}
	return instring;
}

char* String::changeLower(){
	for(int i = 0; instring[i] != '\0' ; i++){
		if(instring[i] >= 65 && instring[i] <= 90){
			instring[i]+=32;
		}
		else if(instring[i] >= 97 && instring[i] <= 122 || instring[i] == 32){
			continue;
		}
		else{
			cout << "Invalid String to change";
		}
	}
	return instring;
}

void String::countVowel(){
	int counter = 0;
	for(int i = 0; instring[i] != '\0'; i++){
		if(instring[i] == 65 || instring[i] == 69 || instring[i] == 73 || instring[i] == 79 || instring[i] == 85 || instring[i] == 97 || instring[i] == 101 || instring[i] == 105 || instring[i] == 111 || instring[i] == 117){
			counter++;
		}
		else{
			continue;
		}
	}
	printf("\nNumber of vowel word = %d\n", counter);
}

void String::countWord(){
	int counter = 0;
	for(int i = 0; instring[i] != '\0'; i++){
		if(instring[i] == 32 && instring[i-1] != 32){
			counter++;
		}
	}
	counter++;
	printf("\nNumber of words in the string = %d\n", counter);
}

char* String::reverse(){
	char temp = '0';
	for(int i = 0, j = length - 2; i < (length - 1) / 2; i++, j--){
		temp = instring[i];
		instring[i] = instring[j];
		instring[j] = temp;
	}
	return instring;
}

void compareDifferent(){
	char* testString = "kevin is not here";
	int charHash[26] = {0};
	int testcount = 1;
	for(int i = 0; testString[i] != '\0'; i++){
		testcount++;
	}
	/* TO_BE_CONTINUE
	if(testcount >= length){
		for(int i = 0; testString[i] != '\n'; i++){
			if(instring[i] == '\0'){
				if((instring[i] >= 97 && instring[i] <= 122) || (testString[i] >= 97 && testString[i] <= 122)){

				}
				else if(){

				}
				else{
					continue;
				}
			}
			else{

			}
		}
	}
	else{
		for(int i = 0; instring[i] != '\n'; i++){
			if(testString[i] == '\0'){

			}
			else{
				
			}
		}
	}
	*/
}

		/*
		void palindrome();
		void anagram(); // Check if two stings are equal size and using same letters
	
		// Check duplicated letters in a string
		void findDuplicate(); 
		void findDuplicate_hash(); 
		void findDuplicate_bitwise(); cls

		
		// Print out all possibles permutation of a sting
		void permutation_backtrack(); 
		void permutation_recursion(); 
		void permutation_();
		*/