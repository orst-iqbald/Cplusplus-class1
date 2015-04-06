#include <iostream>
using namespace std;

int main()
{
	bool  answer;
	cout <<"Do you like vim?\n";
	cin >> answer;

	if (answer == 1)
	{
		cout <<"You llove vim!";
	}
	else
	{
		cout <<"You hate vim?";
	}
	cout <<endl;
	return 0;
}
