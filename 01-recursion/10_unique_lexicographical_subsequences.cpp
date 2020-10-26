#include <iostream>
#include <set>
#include <string>

using namespace std;

void solve(string ip, string op, set <string>& S){
	

	if(ip.length() == 0){			//Base Condition
		S.insert(op);
		return;
	}
	
	string op1 = op;
	string op2 = op;
	
	op2.push_back(ip[0]);
	ip.erase(ip.begin() + 0);		//Smaller input
	
	solve(ip, op1, S);					//Calls on smaller input
	solve(ip, op2, S);
	
}

int main(){
	
	string ip = "aac";
	string op = "";
	set <string> S;
	
	solve(ip, op, S);
	
	for(auto i:S){
		cout << i << " ";
	}
	
	return 0;
}
