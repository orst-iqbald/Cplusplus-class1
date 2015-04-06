#include <iostream>
using namespace std;



int main(){
	
	double *d;
	double d1 = 7.8;
	double d2 = 10.0;
	double d3 = .009;
	double **dp;


	dp = &d;	
	d = &d1;
	cout << *d << endl;
	cout << d << endl;
	cout << &d << endl;
	cout << *dp << endl;

return 0;
}
