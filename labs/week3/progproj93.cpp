#include <iostream>
#include <string>
using namespace std;

main()
{
	string name, f_name, m_name, l_name;
	
	cout << "Enter in your name in format first name, middle name, last name\n";
	cin >> name;
	
	cout << name.length() << endl;
	cout << name.substr(name.find(" "), 1000) << endl;
	

return 0;
}
