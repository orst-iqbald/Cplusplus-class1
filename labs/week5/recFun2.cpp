#include <iostream>
using namespace std;

int pyramid(int n);
int main(){
	
	int n;
	cout << "How many pins in the pyrmid?"<< endl;
	cin >> n;

	cout << pyramid(n) << endl;

return 0;
}

int pyramid(int n)
{
	if (n<=0)
		return 0;
	else
		return n +pyramid(n-1);
}
