#include <stdio.h>

double TaylorSeries(double powX, double termN); 

int main(){
	double TSresult = TaylorSeries(1, 50);
	printf("The TS_Sum = %lf\n", TSresult);
}

double TaylorSeries(double powX, double termN){
	static double fact = 1, denom = 1;
	double result, finalSum;
	printf("testing2\n");
	if (termN == 0){
		return 1;
	}
	result = TaylorSeries(powX, termN - 1);
	fact = fact * powX;
	denom = denom * termN;
	finalSum = result + fact/denom;
	//printf("fact = %lf, denom = %lf, finalSum = %lf\n", fact, denom, finalSum);
	return finalSum;
}