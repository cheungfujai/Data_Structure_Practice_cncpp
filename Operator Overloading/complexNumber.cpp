  
/*
================================================================================================================================
About_this_code: 	 Revising C++ OOP and Operator Overloading. A simple implementation to show what I know.
Compiler: 		 GCC, GNU Compiler Collection, "g++ -std=c++0x complexNumber.cpp -o test"
Author: 		 Cheung Tsz Yin
Github:			 kevin909cty
Date:   		 13 / 10 / 2019
Comment: 		 Please feel free to contact me if there are any mistake or code that 
			 can be further improve. Thank you very much! ^_^ 
Contact email: 	 	 cheungkevinviola909@gmail.com
================================================================================================================================
*/
#include <iostream>
#include <stdio.h>
using namespace std;

class complex{
private:
	int real;
	int img;
public:
	complex(){
		real = 0;
		img = 0;
	}
	complex(int r, int i){
		real = r;
		img = i;
	}
	friend complex operator+(complex comObj1, complex cpmObj2);
	friend ostream & operator<<(ostream &out, complex&cTarget);
};

complex operator+(complex comObj1, complex comObj2){
	complex temp;
	temp.real = comObj1.real + comObj2.real;
	temp.img = comObj1.img + comObj2.img;
	return temp;
}

ostream & operator<<(ostream &out, complex&cTarget){
	out<<cTarget.real<<" + (i) "<<cTarget.img<<endl;
	return out;
}

int main(){
	
	complex c1(5, 8), c2(5, 5), c3;

	c3 = c1 + c2;
	cout<<c3;
	//cout << "TestCompile" << endl;
	return 0;
}