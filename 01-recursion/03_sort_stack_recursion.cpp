#include <iostream>
#include <stack>

using namespace std;

void insert(stack <int>& s, int temp){
	
	if(s.empty() || s.top() <= temp){				//Base Condition
		s.push(temp);
		return;
	}
	
	int val = s.top();						//Induction Steps
	s.pop();
	insert(s, temp);
	s.push(val);
}

void sort(stack <int>& s){
	
	if(s.size() == 1)						//Base Condition
		return;
	
	int temp = s.top();						//Induction Steps
	s.pop();
	sort(s);
	insert(s, temp);
}

int main(){
	
	stack <int> s;
	
	for(auto& item : {2,1,0,5,3})
		s.push(item);
	
	sort(s);
	
	while(!s.empty()){
		cout << s.top() << " ";
			s.pop();
	}
}
