#include <iostream>
using namespace std;

int main(){

	int *pointer_var;
	int var;
	cout << "User, please give an integer value\n";

	pointer_var = &var;
        cin >> var;

	cout << "The value you entered is " << var << endl;
	cout << "The value of your variable as dereferenced by the pointer is "<< *pointer_var << endl;
	cout << "The value of the  pointer for this variable is " << pointer_var << endl;
	cout << "The address of the variable is " << &var <<endl;

return 0;
}
