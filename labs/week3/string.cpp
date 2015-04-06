#include<iostream>
#include<string>
using namespace std;

main()
{
	int word_count = 0;
	string my_str;
	cout << "Enter in a string\n";
	getline(cin, my_str);

	for(int i = 0; i < my_str.length(); i++)
	   cout << my_str.at(i) << endl;

  	for(int i = my_str.length() - 1; i >= 0; i--)
  	   cout << my_str.at(i) << endl;

	for(int i = 0; i < my_str.length(); i++)
	   if (my_str[i] != ' ')
		word_count = word_count + 1;
	
	cout <<"the phrase has this many letters "<< word_count<< endl;

	return 0;
}

