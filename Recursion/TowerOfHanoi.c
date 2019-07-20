/*
===========================================================================================================================
About_this_code: 	 Recursive step to show the step of the Tower of Hanoi Problem.
Compiler: 		 GCC, GNU Compiler Collection, "gcc -o compilefile TowerOfHanoi.c"
Author: 		 Cheung Tsz Yin
Github:			 kevin909cty
Date:   		 20 / 07 / 2019
Comment: 		 Please feel free to contact me if there are any mistake or code that 
			 can be further improve. Thank you very much! ^_^ 
Contact email: 	 	 cheungkevinviola909@gmail.com
===========================================================================================================================
*/

#include <stdio.h>

int tower(int numDisk, int firstTower, int secondTower, int thridTower);

int main(){
	printf("Number of disk = %d\n", 10);
	printf("############printing_step############\n");
	tower(10, 1, 2, 3);
	return 0;
}	

int tower(int numDisk, int firstTower, int secondTower, int thridTower){
	if(numDisk > 0){
		tower(numDisk - 1, firstTower, thridTower, secondTower);
		printf("Moving disk from [%d] to [%d]\n", firstTower, thridTower);
		tower(numDisk - 1, secondTower, firstTower, thridTower);
	}
}
