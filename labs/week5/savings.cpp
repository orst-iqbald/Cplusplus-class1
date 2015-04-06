#include <iostream>
#include <cmath>
using namespace std;

float total(float principal, float interest, float years);
/* recursive function to calculate savings based on principal the intereste acrues and the time lenght. this is a float function and the interest is expected to be entered in decimal form - ie 10% is 0.1
 */

int main(){

	float principal;
	float interest;
	float years;
	
	cout << "Enter in principal, interest, and years respectively \n";
	cin >> principal;
	cin >> interest;
	cin >> years;
	
	cout << total(principal, interest, years) << endl;

return 0;
}
float total(float principal, float interest, float years){
	
	float sum;
	if (years <= 1) 
		return sum = principal*(pow(1+interest, years));// when this is 1 you have no interste to accur so the pow goes to the 0th power which is 1.
	else
		return sum = sum + total(principal, interest, (years-1));// years are decremented till they reach 1 where you just add the base:

}
	
