/* Problem statement
Sam is planting trees on the upper half region (separated by the left diagonal) of the square shared field.

For every value of ‘N’, print the field if the trees are represented by ‘*’.

Example:
Input: ‘N’ = 3

Output: 
* * *
* *
*
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1  <= T <= 10
1  <= N <= 25
Time Limit: 1 sec

Problem link : https://www.codingninjas.com/studio/problems/seeding_6581892?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i = n; i > 0; --i){
		for(int j = 0; j < i;  j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
