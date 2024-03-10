/* Problem statement
Aryan and his friends are very fond of the pattern. For a given integer ‘N’, they want to make the Reverse N-Number Triangle.

Example:
Input: ‘N’ = 3

Output: 

1 2 3
1 2
1
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1  <= N <= 20
Time Limit: 1 sec

Problem link : https://www.codingninjas.com/studio/problems/reverse-number-triangle_6581889?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i = n; i > 0; --i){
		for(int j = 1; j <=i ; j++){
			cout << j<< " ";
		}
		cout<<endl;
	}
	return 0;
}
