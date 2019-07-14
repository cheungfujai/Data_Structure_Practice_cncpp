/*
======================================================================================
About_this_code: My self-exercise to implement the fionacci series by using iteration.
Compiler: 		 GCC, GNU Compiler Collection, "gcc -o compilefile FibonacciSeries.c"
Author: 		 Cheung Tsz Yin
Github:			 kevin909cty
Date:   		 14 / 07 / 2019
Comment: 		 Please feel free to contact me if there are any mistake or code that 
			can be further improve. Thank you very much! ^_^ 
Contact email: 	 cheungkevinviola909@gmail.com
======================================================================================
*/
#include <stdio.h>

int main(){
	int last2 = 0, last1 = 1;
	int sum, n, inputN = 7; //Looking for ther 7th term of the Fibonacci Series.
	for (n = 0; n < inputN; n++){
		if (inputN <= 2){
			printf("The %dth term of the Fibonacci Series = %d,\n", inputN, inputN);
			return n;
		}
		sum = last2 + last1;
		if(n >= 1){
			last2 = last1;
			last1 = sum;
		}
	}
	printf("The %dth term of the Fibonacci Series = %d,\n", inputN, sum);
	return sum;
}