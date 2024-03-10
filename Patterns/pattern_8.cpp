/* Problem statement
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the Reverse N-Star Triangle.

Example:
Input: ‘N’ = 3

Output: 

*****
 ***
  *
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1  <= N <= 20
Time Limit: 1 sec

Problem link : https://www.codingninjas.com/studio/problems/reverse-star-triangle_6573685?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

*/

#include <bits/stdc++.h>
using namespace std;

void pattern8(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
        for(int j=0;j< 2*N -(2*i +1);j++){
            
            cout<<"*";
        }
         for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
        cout << endl;
    }
}

int main()
{   
    int N;
    cin>>N;
    pattern8(N);
    return 0;
}
