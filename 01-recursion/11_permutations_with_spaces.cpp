//For better visualization, replaced space with underscore

#include <iostream>
#include <string>

using namespace std;

void solve(string ip, string op){
	
	if(ip.length() == 0){				  //Base Condition
		cout << op << " ";
		return;
	}
	
	string op1 = op;
	string op2 = op;
	
	op1.push_back('_');					  //Follow the recursive tree 	// Make sure to push a char '_' and not a string "_" 
	op1.push_back(ip[0]);
	
	op2.push_back(ip[0]);
	
	ip.erase(ip.begin()+0);				//Smaller input
	
	solve(ip, op1);						    //Recursive calls
	solve(ip, op2);
	
}

int main(){
	
	string ip = "ABC";
	string op = "";
	
	op.push_back(ip[0]);          //As the first character doesn't have a preceding space character, it should not be part of recursive calls.
	ip.erase(ip.begin() + 0);
	
	solve(ip, op);
}
