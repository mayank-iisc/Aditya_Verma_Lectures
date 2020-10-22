#include <iostream>
#include <cmath>
 
using namespace std;

/* 	N will be an integer in the range [1, 30].
	K will be an integer in the range [1, 2^(N-1)].
*/

int kthGrammar(int N, int K) {
        
    if(N == 1 && K == 1)
        return 0;
        
    int length = pow(2, N-1);
    int mid = length / 2;
        
    if(K <= mid)
        return kthGrammar(N-1, K);
    else
        return !(kthGrammar(N-1, K-mid));
        
}

int main(){
	
	cout << kthGrammar(4,4);
}

