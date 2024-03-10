/*Problem statement
Sam is making a forest visualizer. An N-dimensional forest is represented by the pattern of size NxN filled with ‘*’.

For every value of ‘N’, help sam to print the corresponding N-dimensional forest.

Example:
Input: ‘N’ = 3

Output: 
* * *
* * *
* * *
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1  <= N <= 25
Time Limit: 1 sec

Problem link : https://www.codingninjas.com/studio/problems/n-forest_6570177?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
