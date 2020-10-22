#include <iostream>

using namespace std;

void solve(int N, char s, char d, char h , int &count){
	
	count++;
	if(N == 1){
		cout << "Placing Disk" << N << " from " << s << " to " << d << endl;	// Base condition for only 1 disk
		return;
	}
	
	solve(N-1, s, h, d, count);				// Place N-1 disks to helper with the help of destination
	
	cout << "Placing Disk" << N <<" from " << s <<" to " << d << endl;	//Place Nth disk directly to destination from source
	
	solve(N-1, h, d, s, count);				// Place N-1 disks from helper to destination with the help of source
}

int main(){
	
	int N = 3;							          // Number of plates
	
	char s = 's', d = 'd', h = 'h';		// source s, destination d, helper h
	int count = 0;						        // count of moves
	
	solve (N, s, d, h , count);
	
	cout << "Total " << count <<" moves";
}
