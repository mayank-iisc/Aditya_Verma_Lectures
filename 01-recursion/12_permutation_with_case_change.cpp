/*
	Input = ab
	Output = ab, aB, Ab, AB

*/

#include <iostream>
#include <string>

using namespace std;

void solve(string ip, string op){
	
	if(ip.length() == 0){				    //Base Condition
		cout << op << " ";
		return;
	}
	
	string op1 = op;					     //Follow the recursive tree
	string op2 = op;
	
	op1.push_back(ip[0]);
	op2.push_back(toupper(ip[0]));
	
	ip.erase(ip.begin()+0);				//Smaller Input
	
	solve(ip, op1);						    //Recursive calls
	solve(ip, op2);
	
}

int main(){
	
	string ip = "ab";
	string op = "";
	
	solve(ip, op);
}
