/*
	Input: N = 3
	Output: 111, 110, 101
*/
#include <iostream>
#include <string>

using namespace std;

void solve(int one, int zero, int N, string op){
	
	if(N == 0){
		cout << op << " ";
		return;
	}
	
	string op1 = op;
	op1.push_back('1');
	solve(one+1, zero, N-1, op1);
	
	if(one > zero){
		string op2 = op;
		op2.push_back('0');
		solve(one, zero+1, N-1, op2);
	}
}

int main(){
	int one = 0;
	int zero = 0;
	int N = 3;
	string op = "";
	
	solve(one, zero, N, op);
}
