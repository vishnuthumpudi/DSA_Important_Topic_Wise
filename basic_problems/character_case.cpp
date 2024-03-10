/* Write a program that takes a character as input and prints 1, 0, or -1 according to the following rules.

1, if the character is an uppercase alphabet (A - Z).
0, if the character is a lowercase alphabet (a - z).
-1, if the character is not an alphabet.

Problem link : https://www.codingninjas.com/studio/problems/find-character-case_58513?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

*/

#include<bits/stdc++.h>
using namespace std;

// function to check whether the given character is an 
int charCase(char ch){
	if(ch>=65 && ch<=90) return 1;
	else if(ch>=97 && ch<=122) return 0;
	else return -1;
}

int main(){
	char ch;
	cout<<"Enter a character: ";
	cin>>ch;
	int val = charCase(ch);
	if(val==0){
		cout<<"The provided char is in lowercase";
	}else if(val==1){
		cout<<"The provided char is in Uppercase";
	}else{
		cout<<"The provided char is not in any of the Uppercase or lowercase case";
	}
	return 0;
}
