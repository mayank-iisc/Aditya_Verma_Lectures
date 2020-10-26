/*
	Input: 	3
	Output: ((())) (()()) (())() ()(()) ()()()

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve(string op, int open, int close, vector <string>& result){
	
	if(open == 0 && close == 0){						//Base Condition
		//cout << op << " ";
		result.push_back(op);
		return;
	}
	
	if(open > 0){								            //Flow for open bracket in recursive tree
		string op1 = op;
		op1.push_back('(');
		
		solve(op1, open-1, close, result);		//Call on smaller input
	}
	
	if(close > open){							          //Flow for close bracket in recursive tree
		string op2 = op;
		op2.push_back(')');
		
		solve(op2, open, close-1, result);		//Call on smaller input
	}
}

vector <string> fun(int n){
	
	vector <string> result;
	
	string op = "";
	int open = n, close = n;
	
	solve(op, open, close, result);
	
	return result;
}

int main(){
	
	vector <string> result;
	int n = 3;
	
	result = fun(n);
	
	for(auto it: result){
		cout << it << " ";
	}
}
