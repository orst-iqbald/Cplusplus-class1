#include <iostream>
#include <cstdlib>
using namespace std;

void rand_int(const int &min, const int &max, int &val);
int main()
{
	int min; // your min value
	int max; // your max value
	int val; // the random value that's output

	cout << "What's your max range?\n";
	cin >> max;
	cout << "Whats' your min range?\n";
	cin >> min;

	rand_int(min, max, val);

return 0;
}

void rand_int(const int &min, const int &max, int &val)
{
	int range; // the range -- difference between max and min   
	range = (max - min); // calculation of range
        val = (rand() % range + min); // random number generation 
        cout << "Your min is " << min << " your max is " << max <<"and your random # is "<< val <<endl;
}



