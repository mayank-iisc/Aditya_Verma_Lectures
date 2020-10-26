/*	
	Input: 	a1B2
	Output:	a1b2, a1B2, A1b2, A1B2
*/

#include <iostream>
#include <string>

using namespace std;

void solve(string ip, string op){
	
	if(ip.length() == 0){					      //Base Condition
		cout << op << " ";
		return;
	}
	
	if(isalpha(ip[0])){						      //Follow recursive tree for alphabets
		string op1 = op;
		string op2 = op;
		
		op1.push_back(tolower(ip[0]));		//Op1 can always be small and Op2 can be capital
		op2.push_back(toupper(ip[0]));
		
		ip.erase(ip.begin() + 0);			    //Smaller input
		
		solve(ip, op1);						        //Recursive calls
		solve(ip, op2);
	}
	else{									              //Recurisve tree for non-alphabets
		string op1 = op;
		
		op1.push_back(ip[0]);				      //No changes needed in non-alphabets, direct push_back
		
		ip.erase(ip.begin()+0);				    //Smaller input
		
		solve(ip, op1);
		
	}
}

int main(){
	
	string ip = "a1B2";
	string op = "";
	
	solve(ip, op);
}
