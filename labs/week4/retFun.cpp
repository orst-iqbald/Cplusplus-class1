#include <iostream>
#include <string>
using namespace std;

void stringEqual( string str1, string str2);
int main(){

	string str1;
	string str2;

	cout << "Enter 1st string\n";
	getline(cin, str1);
	cout << "Enter 2nd string\n";
	getline(cin, str2);

	stringEqual(str1, str2); // call to function stringEquals
return 0;
}

void stringEqual( string str1, string str2) // actual funtion
{
        int str1len;
        int str2len;
        int right = 0;
        int i = 0;

        str1len=str1.length();
        str2len=str2.length();

while ( (str1.at(i) == str2.at(i)) && (str1len == str2len) && (i < (str1len - 1)))

//	if (str1len != str2len)
//	{
//	   cout << "These will not be equal\n";
//	}
//	else
//	{ 
//	  while (str1.at(i) == str2.at(i))
           {	 
		   right = right + 1;
		   i++;
           } 
//	 } 

	if ((right == (str1len-1)) && (str1len == str2len))
	   cout << "They're equal\n";
	   else
	   cout << "Not equal\n";	   
}

