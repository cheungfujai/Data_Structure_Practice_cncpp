#ifndef ARRAYFUN_H_
#define ARRAYFUN_H_

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
		bool palindrome();
		bool anagram(); // Check if two stings are equal size and using same letters
		bool findDuplicate(); 
		bool findDuplicate_hash(); 
		void findDuplicate_bitwise();
	};

	#endif 