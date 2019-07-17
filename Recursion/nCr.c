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
		for (int j = 0; j < i + 1; j++){
			ptr[i][j] = -1;
		}
	}
	printf("The value of '%d' C '%d' = %d.\n", n, r, ncr(n, r, &ptr));
	free(ptr);
}

int ncr(int n, int r, int*** ptr){
	printf("Bud here with value &d\n", (*ptr)[n][r]);
	if (n == r || r == 0){
		(*ptr)[n][r] = 1;
		return 1;
	}
	else if (r == 1 || r == n - 1){
		(*ptr)[n][r] == n;
		return n;
	}
	else{
		if((*ptr)[n][r] == -1){
			(*ptr)[n][r] = ncr(n - 1, r - 1, *(&ptr)) + ncr(n - 1, r, *(&ptr));
		}
		else{
			return (*ptr)[n][r];
		}
	}
}