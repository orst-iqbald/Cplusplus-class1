// aprogram to print somethign using repetiion
#include <iostream>
using namespace std;

int main()
{
	int verse;
	//explain what kind of input we are looking for and get input
	cout<<"What would you like to do today?"<<endl;
	for(int verse=99; verse >0; --verse)
	{
		cout<<"There are"<<verse<<"bugs reported to squash,";
		cout<<verse<<" bugs to squash!"<<endl;
		cout<< "You fix one up, and test it around, "<<(verse -1)<<"bugs to squash!"<<endl;
	}
//
//	cout<<"[1] Sing \"99 bugs reported to squash!\" (really fast!)"<<endl;
//	cout<<"[-1] Quit this nonsense!"<<endl;
//	cin >>input;

	//Perform an action based on the input above
//	if(input == 1)
//	{
//		cout<<"Oh!"<<endl;
//		cout<<"then you quit, but you forgot to commit,leave you back at 99 bugs to squash"<<endl;
//	}
//	else if(input == -1)
//	{
//		cout<<"Yovu'e entered the number -1, we will now stop askign you questions"<<endl;
//	}
//	else
//	{
//		cout<<"You've enterd some invalid input, next time try to enter som vaild input"<<endl;
//	}
//
	cout<<endl;
	cout<<"Thanks for participating, now returning."<< endl;
	return 0;
}

