#include <iostream>
#include <stack>

using namespace std;

void solve(stack <int>& s, int k){
	
	if(k == 1){					// Base condition
		s.pop();
		return;
	}
	
	int temp = s.top();			
	s.pop();
	
	solve(s, k-1);			
	
	s.push(temp);			//Induction step
	
}

stack <int> midDel(stack <int>& s){

	if(s.size() == 0)				//Boundary condition
		return s;
	
	int k = s.size()/2 + 1;			// For odd size deletes middle element, for even size deletes 2nd middle element from the top.
	cout << k << endl;
	
	solve(s, k);					
	
	return s;
	
}


int main(){
	
	stack <int> s;
	
	for(auto& item : {11,22,33,44})	// stored in stack as (top)44,33,22,11 so 22 will get deleted as per definition of k
		s.push(item);
			
	midDel(s);
	
	while(!s.empty()){
		cout << s.top() << " ";
			s.pop();
	}
}
