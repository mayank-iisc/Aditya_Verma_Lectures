//Calculates factorial of a number recursively

#include <iostream>

using namespace std;

long int factorial(int n){      //Hypothesis
	
	if(n == 0 || n == 1)          //Base Condition
	return 1;
	
	else
	return factorial(n-1) * n;    //Induction Step

}

int main(){

	cout << factorial(7);

}
