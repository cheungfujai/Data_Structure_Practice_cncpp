#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "stringFun.h"

using namespace std;

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

bool String::palindrome(){ // Check if two stings are equal size and using same letters
	for(int i = 0, j = length - 2; i < (length - 1)/2; i++, j--){
		if(instring[i] == instring[j]){
			continue;
		}
		else{
			cout << "\nThe string input is not a palindrome\n";
			return false;
		}
	}
	cout << "\nThe string input is a palindrome\n";
	return true;
}

bool String::anagram(){
	char testString[] = "i am kevin";
	int record[26] = {0};
	for (int i = 0; instring[i] != '\0'; i++){
		if(instring[i] >= 65 && instring[i] <= 90){
			record[instring[i] + 32 - 97]++;
			record[testString[i] - 97]--;
		}
		else if(instring[i] >= 97 && instring[i] <= 122 || instring[i] == 32){
			record[instring[i] - 97]++;
			record[testString[i] - 97]--;
		}
		else{
			continue;
		}
	}
	for(int j = 0; record[j] < 26; j++){
		if(record[j] != 0){
			cout << "\nThe string input is not an anagram\n";
			return false;
		}
	}
	cout << "\nThe string input is an anagram\n";
	return true;
}

bool String::findDuplicate(){
	int counter = 0;
	for(int i = 0; instring[i] != '\0'; i++){
		for(int j = i + 1; instring[j] != '\0'; j++){
			if(instring[i] == 32){
				continue;
			}
			if(instring[i] == instring[j]){
				printf("\nThe character %c is duplicated\n", instring[i]);
				counter++;
			}
		}
	}
	if(counter != 0){
		return true;
	}
	else{
		cout << "\nNo duplicate character\n";
		return false;
	}
}

bool String::findDuplicate_hash(){
	int recordHash[26] = {0};
	int counter = 0;
	for(int i = 0; instring[i] != '\0'; i++){
		if(instring[i] == 32){
			continue;
		}
		if(recordHash[instring[i] - 97] == 1){
			printf("\n[HASH] The character %c is duplicated\n", instring[i]);
			recordHash[instring[i] - 97]++;
			counter++;
		}
		else if(recordHash[instring[i] - 97] > 1){
			recordHash[instring[i] - 97]++;
		}
		else{
			recordHash[instring[i] - 97]++;
		}
	}
	if(counter != 0){
		return true;
	}
	else{
		cout << "\n[HASH] No duplicate character\n";
		return false;
	}
}

void String::findDuplicate_bitwise(){
	long int setcount = 0;
	long int bitcount = 0;
	cout <<"\n******** Run Bitwise to check **********************\n\n";
	for(int i = 0; instring[i] != '\0'; i++){
		if(!(instring[i] >= 97 && instring[i] <= 122)){
			continue;
		}
		bitcount = 1;
		bitcount = bitcount << (instring[i] - 97);
		if((bitcount & setcount) > 1){
			printf("[Bitwise] The character [%c] is duplicated at index %d\n", instring[i], i);
		}
		else{
			setcount = setcount | bitcount;
		}
	}
	cout <<"\n****************************************************\n";
}