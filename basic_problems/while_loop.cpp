/* Problem statement
Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately.
Digits mean numbers, not places! That is, if the given integer is "132456", even digits are 2, 4, and 6, and odd digits are 1, 3, and 5.
Constraints
0<= 'n' <=10000

Example :
Input: 'n' = 132456
Output: 12 9

Explanation:
The sum of even digits = 2 + 4 + 6 = 12
The sum of odd digits = 1 + 3 + 5 = 9
Constraints
0<= 'n' <=10000

Example :
Input: 'n' = 132456
Output: 12 9

Explanation:
The sum of even digits = 2 + 4 + 6 = 12
The sum of odd digits = 1 + 3 + 5 = 9
Input format :
 The first line contains an integer 'n'.
Output format :
In a single line, print two space-separated integers, first the sum of even digits and then the sum of odd digits.

Problem link : https://www.codingninjas.com/studio/problems/sum-of-even-odd_624650?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int evSum=0 ,odSum =0,n;
    cin>>n;
    while(n>0){
        int last = n%10;
        if(n&1){
            odSum+=last;
        }
        else{
            evSum+=last;
        }
        n/=10;
    }
    cout<<evSum<<" "<<odSum;
    return 0;
}
