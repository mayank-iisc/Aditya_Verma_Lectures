#include <iostream>
#include <string>

using namespace std;

void solve(string ip, string op){
	
	if(ip.length() == 0){				//Base Condition
		cout << op << " ";
		return;
	}
	
	string op1 = op;				//Now we are simply following the recursive tree made by I/P O/P method
	string op2 = op;
	op2.push_back(ip[0]);				
	
	ip.erase(ip.begin()+0);				//smaller input
		
	solve(ip, op1);					//recursive calls
	solve(ip, op2);					//recursive calls
}

int main(){
	
	string ip = "abc";
	string op = "";
	
	solve(ip, op);
	
	return 0;
}
