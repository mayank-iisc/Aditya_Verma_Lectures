#include <iostream>
#include <stack>

using namespace std;

void insert(stack <int>& S, int ele){
	
	if(S.size() == 0){          // Base Condition
		S.push(ele);
		return;
	}
	
	int temp = S.top();
	S.pop();
	insert(S, ele);             // Hypothesis - call on smaller input
	S.push(temp);               // Induction Step
}

void reverse(stack <int>& S){

	if( S.size() == 1)            // Base Condition
		return;
	
	int ele = S.top();
	S.pop();
	reverse(S);                   // Hypothesis - call on smaller input
	insert(S, ele);               // Induction step - Another recursion
}

int main(){

	stack <int> S;
	S.push(50); S.push(40); S.push(30); S.push(20); S.push(10); // 50 - 40 - 30 - 20 - 10 - top
	
	while(!S.empty()){
	
		cout << S.top() << " ";
		S.pop();
	}
	
	S.push(50); S.push(40); S.push(30); S.push(20); S.push(10); // 50 - 40 - 30 - 20 - 10 - top
	cout << endl;
	
	reverse(S);
	
	while(!S.empty()){
	
		cout << S.top() << " ";
		S.pop();
	}
	

return 0;
}
