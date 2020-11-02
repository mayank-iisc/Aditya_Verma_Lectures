#include <iostream>
#include <vector>

using namespace std;

//Places the position where Josephus should sit in ans.
int solve(vector <int>& v, int k, int index){
	
	if(v.size() == 1){
		return v[0];
	}
	index = ((index + k) % v.size());
	v.erase(v.begin() + index);
	
	solve(v, k, index);
}

int main(){
	
	int N = 40;		//No. of soldiers
	int k = 7;		//every kth soldier will be killed
	vector <int> v;
	int index = 0;
	
	k = k-1;		//As the numbers in vector start from 1 to N instead of 0.
	
	for(int i = 0; i < N; i++){
		v.push_back(i+1);
	}
	
	cout<< solve(v, k, index);
}
