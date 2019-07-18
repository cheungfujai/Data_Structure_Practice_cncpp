/*
===========================================================================================================================
About_this_code: 	My self-exercise to implement the nCr (Pascal Triangle) series by using recursion under the practice of
				 dynamic programming.
Compiler: 		 GCC, GNU Compiler Collection, "gcc -o compilefile nCr.c"
Author: 		 Cheung Tsz Yin
Github:			 kevin909cty
Date:   		 18 / 07 / 2019
Comment: 		 Please feel free to contact me if there are any mistake or code that 
			 can be further improve. Thank you very much! ^_^ 
Contact email: 	 	 cheungkevinviola909@gmail.com
===========================================================================================================================
*/

// On_Progress

#include <stdio.h>
#include <stdlib.h>

int ncr(int n, int r);

int main(){
	int n = 20, r = 10;
	printf("The result of nCr -> [%d]C[%d] = %d\n", n, r, ncr(n,r));

}

int ncr(int n, int r){
	int** ptr = (int**)malloc((n + 1) * sizeof(int*));
	for(int i = 0; i <= n; i++){
		ptr[i] = (int*)malloc((r + 1)* sizeof(int));
	}
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= i; j++){
			if(j == 0 || i == j){
				ptr[i][j] = 1;
			}
			else{
				ptr[i][j] = ptr[i - 1][j - 1] + ptr[i - 1][j];
			}
			//printf("%d ", ptr[i][j]);
		}
		//printf("\n");
	}
	return ptr[n][r];
}