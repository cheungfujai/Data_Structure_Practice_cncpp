/*
======================================================================================================================
About_this_code: 	My self-exercise to implement the nCr (Pascal Triangle) series by using recursion.
Compiler: 		 GCC, GNU Compiler Collection, "gcc -o compilefile nCr.c"
Author: 		 Cheung Tsz Yin
Github:			 kevin909cty
Date:   		 14 / 07 / 2019
Comment: 		 Please feel free to contact me if there are any mistake or code that 
			 can be further improve. Thank you very much! ^_^ 
Contact email: 	 	 cheungkevinviola909@gmail.com
======================================================================================================================
*/

// On_Progress

#include <stdio.h>
#include <stdlib.h>

int ncr(int n, int r, int*** ptr);

int main(){
	int n = 10, r = 6;
	int** ptr = malloc(n * sizeof(int));
	for (int i = 0; i < n; i++){
		ptr[i] = malloc((i + 1) * sizeof(int));
	}
	printf("The value of '%d' C '%d' = %d.\n", n, r, ncr(n, r, ptr));
}

int ncr(int n, int r, int** ptr){
	ptr[n][r] = 0;
	printf("testfunc %d\n", ptr[n][r]);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < i+1; j++){
			if (i == j || j == 0){
				ptr[i][j] = 1;
			}
			else if (j == 1 || j == i - 1){
				ptr[i][j] == i;
			}
			else{
				ptr[i][j] = ptr [i - 1][j - 1] + sptr[i - 1][j];
			}
		}
	}
	return *ptr[n][r];
}