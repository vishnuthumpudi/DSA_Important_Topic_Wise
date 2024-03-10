/* Problem statement
Sam is making a forest visualizer. An N-dimensional forest is represented by the pattern of size NxN filled with �*�.

An N/2-dimensional forest is represented by the lower triangle of the pattern filled with �*�.

For every value of �N�, help sam to print the corresponding N/2-dimensional forest.

Example:
Input:  �N� = 3

Output: 
* 
* *
* * *

Problem link : https://www.codingninjas.com/studio/problems/n-2-forest_6570178?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
