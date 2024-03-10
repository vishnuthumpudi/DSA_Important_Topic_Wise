/* Problem statement
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Triangle.

Example:
Input: ‘N’ = 3

Output: 

  *
 ***
*****
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1  <= N <= 20
Time Limit: 1 sec

Problem link : https://www.codingninjas.com/studio/problems/star-triangle_6573671?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n-i-1;j++){
			cout<<" ";
		}
		for(int k = 0 ; k < 2*i+1 ;k++){
			cout<<"*";
		}
		for(int l =0; l < n-i-1;l++){
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
