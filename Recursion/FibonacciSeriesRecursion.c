/*
======================================================================================
About_this_code: My self-exercise to implement the fionacci series by using recursion.
Compiler: 		 GCC, GNU Compiler Collection, "gcc -o compilefile FibonacciSeriesRecursion.c"
Author: 		 Cheung Tsz Yin
Github:			 kevin909cty
Date:   		 14 / 07 / 2019
Comment: 		 Please feel free to contact me if there are any mistake or code that 
			 can be further improve. Thank you very much! ^_^ 
Contact email: 	 cheungkevinviola909@gmail.com
p.s.:			 This code only works where "term <= 46". Beyond 46 will return a wrong value.
======================================================================================
*/
#include <stdio.h>

int fibon(int n);

int main(){
	int term = 46; //Looking for ther 46th term (shd = 1836311903) of the Fibonacci Series.
	printf("The %dth term of the Fibonacci Series = %d,\n", term, fibon(term));
}

int fibon(int n){
	if (n == 0){
		return 0;
	}
	if (n == 1){
		return 1;
	}
	else{
		return fibon(n - 2) + fibon(n - 1);
	}
}