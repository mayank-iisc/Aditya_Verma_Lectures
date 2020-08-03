#include <iostream>

using namespace std;

void print(int n){      //prints numbers from 1 to n
	
	if (n == 1){			    //Base Case
		cout << n << " ";
		return;
	}
	
	print(n-1);
	cout << n << " "; 		//Induction step
}

void revprint(int n){   //prints numbers from n to 1
	
	if (n == 1){			    //Base case
		cout << n << " ";
		return;
	}
	
	cout << n << " ";		  //Induction step
	revprint(n-1);
}

int main(){
	
	print(7);
	cout << endl;
	revprint(6);
}
