/* Problem statement
Sam is making a Triangular painting for a maths project.

An N-dimensional Triangle is represented by the lower triangle of the pattern filled with integers starting from 1.

For every value of �N�, help sam to print the corresponding N-dimensional Triangle.

Example:
Input: �N� = 3

Output: 
1
1 2 
1 2 3

Problem link : https://www.codingninjas.com/studio/problems/n-triangles_6573689?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
