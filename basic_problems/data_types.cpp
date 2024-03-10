/*  Problem statement
Data type refers to the type of value a variable has and the way the computer interprets it.



Each data type has a different size. You’ve studied 5 different data types and the sizes of the data types:

Integer: 4 bytes
Long: 8 bytes
Float: 4 bytes
Double: 8 bytes
Character: 1 byte


You’re given a data type. Print its size in bytes.



Example :
Input: Long

Output: 8

Explanation: The size of a Long variable is given as 8 bytes. 

Link to problem : https://www.codingninjas.com/studio/problems/data-type_8357232?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
*/

#include<bits/stdc++.h>
using namespace std;

//function to return data type size
void showDataType(string type){
	if(type == "Integer" || type == "Float" || type == "integer" || type == "float" ) cout<<4;
	else if (type == "Long" || type == "Double"|| type == "long" || type == "double") cout<<8;
	else cout<<1;
}
int main(){
	string str;
	cout<<"Enter the type of the data type: ";
	cin>>str;
	showDataType(str);
	return 0;
}
