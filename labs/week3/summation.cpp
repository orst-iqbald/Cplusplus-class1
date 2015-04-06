#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int i;
	int in_var;
	int max_n = 20;	
	bool run_again=true;
	int total =1;	

	
     while (run_again)
	{
	total =0;
        cout<<" What value would you like ot stop the sum over funtion\n";
        cin >> in_var;	
	while (in_var<1 || in_var>max_n)
	   {
	   cout << "That value is invalid, please enter 1 through" << max_n << endl;
	   cin >>in_var;
	   }
	for(i = 1; i<=in_var; i++)
	   {
	   total = pow(i,5) + 10 + total;
	   cout << total;
	   cout << " value being added is " << i;
	   cout << endl;	
	   }
	cout<<"Do you want to play again?\n";
	cin >> run_again;
	 }
return 0;
}
