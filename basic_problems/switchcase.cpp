/*
Problem statement
Programming languages have some conditional / decision-making statements that execute when some specific condition is fulfilled.
Switch-case is one of the ways to implement them.
In a menu-driven program, the user is given a set of choices of things to do (the menu) and then is asked to select a menu item.
There are 2 choices in the menu:
Choice 1 is to find the area of a circle having radius 'r'.
Choice 2 is to find the area of a rectangle having dimensions 'l' and 'b'.
You are given the choice 'ch' and an array 'a'.
If ‘ch’ is 1, ‘a’ contains a single number ‘r’. If ‘ch’ is 2, ‘a’ contains 2 numbers, ‘l’ and ‘b’.
Consider the choice and print the appropriate area.
Example :
Input: ‘ch’ = 2 and ‘a’ = [3, 2]
Output: area = 6
Explanation: Since the choice ‘ch’ is 2, we have to print the area of the rectangle having ‘l’ = 3 and ‘b’ = 2, which is 6.

Problem link : https://www.codingninjas.com/studio/problems/switch-case-statement_8357244?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int val1,val2;
	cout<<"Enter the values of x and y: ";
	cin>>val1>>val2;
	int cas;
	cout<<"Enter 1 to find area of circle and 2 to find area of rectangle: ";
	cin>>cas;
	switch(cas){
		case 1:
			cout<<M_PI*val1*val2;
			break;
		case 2:
			cout<<val1*val2;
			break;
		default:
			cout<<"Enter the correct choice";
	}
	return 0;
}
