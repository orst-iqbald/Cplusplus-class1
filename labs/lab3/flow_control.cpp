#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{	
	//create variables to stroe input
	int input = 0;

	//explain what kind of input we're looking for
	cout<<"Please enter a number from 1 to 3";
	cin>>input;
	
	if(input==1)
	{
		cout<<"You entered the number 1, the lonliest number"<< endl;
	}
	else if(input==2)
	{
		cout<<"You entered 2, perhaps the lonliest since 1"<<endl;
	}
	else if(input==3)
	{
		cout<<"You entered hte number 3, making it the 3rd wheel"<<endl;
	}
	else
		cout<<"You enterd som invalid input, next time try to neter som 			valid input"<<endl;
	return 0;
}
