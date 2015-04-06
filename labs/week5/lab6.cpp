#include <iostream>
using namespace std;
	
int add_rec(int first, int second);
int add_it(int first, int second);
int mult_it(int first, int second);
int mult_rec(int first, int second);

int main(){
	int first;
	int second;

	cin >> first;
	cin >> second;
	
//	cout << add_it(first, second) << endl;
//	cout << add_rec(first, second) << endl;
//	cout << mult_it(first, second) << endl;
	cout << mult_rec(first, second) << endl;
return 0;
}

int add_it(int first, int second)
{
	int result = first;
	for(int current = 0; current < second; ++current)
	{
		result++;
	}
	return result;
}

int add_rec(int first, int second)
{
	if(second <=0)
	{
		return first;
	}
	else
	{
		return add_rec(++first, --second);
	}
}

int mult_it(int first, int second)
{
	int sum = 0;
	for(int current = 0; current < second; current++)
		sum = sum + first;
	return sum;
}

int mult_rec(int first, int second)
{
	int sum = first;
	if(second <=0){
		  return 0;
	}
	else{
		  return first + mult_rec(first, second-1);
	}
}


