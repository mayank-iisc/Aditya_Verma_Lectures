#include <iostream>
#include <vector>

using namespace std;

void insert(vector <int>& v, int temp){
	
	if(v.size() == 0 || v[v.size()-1] <= temp){
		v.push_back(temp);
		return;
	}
	
	int val = v[v.size()-1];
	v.pop_back();
	insert(v, temp);
	v.push_back(val);
}

void sort(vector <int>& v){
	
	if(v.size() == 1)			//Base Condition
		return;
		
	int temp = v[v.size()-1];
	v.pop_back();
	sort(v);
	insert(v, temp);
}

int main(){
	
	vector <int> vec{2,3,7,5,4,9};
	sort(vec);
	
	for(int i = 0; i < 6; i++){
		cout << vec[i] << " " ;
	}		
}