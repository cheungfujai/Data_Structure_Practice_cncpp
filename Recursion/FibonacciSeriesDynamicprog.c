/*
=========================================================================================================
About_this_code: Further Improve on the fionacci series by using recursion but in a dynamic programming.
			 It is the solution to solve the problem of excessive recursion, from the time complexity of 
			 O(2^n) to O(n).
Compiler: 		 GCC, GNU Compiler Collection, "gcc -o compilefile FibonacciSeriesDynamicprog.c"
Author: 		 Cheung Tsz Yin
Github:			 kevin909cty
Date:   		 14 / 07 / 2019
Comment: 		 Please feel free to contact me if there are any mistake or code that 
			 can be further improve. Thank you very much! ^_^ 
Contact email: 	 cheungkevinviola909@gmail.com
p.s.:			 This code only works where "term <= 46". Beyond 46 will return a wrong value.
=========================================================================================================
*/
#include <stdio.h>
#include <stdlib.h>

int fibon(int n, int* passinPtr);

int main(){
	int term = 46; //Looking for ther 10th term (shd = 55) of the Fibonacci Series.
	int* ptr = malloc(term * sizeof(int));
	for(int i = 0; i < term; i++) {
		*(ptr+i) = 0;					
    }
    int result = fibon(term, ptr);
	printf("The %dth term of the Fibonacci Series = %d,\n", term, result);
	free(ptr);
	return 0;
}

int fibon(int n, int* passinPtr){
	if (n <= 1 && *(passinPtr + n) == 0){
		*(passinPtr + n) = n;
		return n;
	}
	else{
		if(*(passinPtr + n - 2) == 0){
			*(passinPtr + n - 2) = fibon(n - 2, passinPtr);
		}
		if(*(passinPtr + n - 1) == 0){
			*(passinPtr + n - 1) = fibon(n - 1, passinPtr);
		}
		*(passinPtr + n) = *(passinPtr + n - 2) + *(passinPtr + n - 1);
		return *(passinPtr + n) ;
	}
}