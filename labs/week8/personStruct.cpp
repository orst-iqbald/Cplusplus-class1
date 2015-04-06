/*Author: Danish Iqbal
 *Date: 8/17/14
 *Description: create a struct called person and create a fucntion that creates an instance of it and assign values th treturn the struct
 *Input: you enter in informatino fro the person for each struct element
 *Output: outputs elements in struct adn asks for input into th estruct
 */

#include<iostream>
using namespace std;

struct Id// this is the struct which will create an instance of person. i only use name and age as identifiers
{
	char name[20];
	int age;
};

void new_person(Id& identifier);// This function is used to enter in output for the elements of the struct. Notice how its' pass by reference with the actual struct 
void print_person(Id& identifier);// This function prints out the elements in each instacne of the struct

int main(){

	Id person;

	cout << "Enter identifiers for the person, name and age\n";
	new_person(person);

	print_person(person);

return 0;
}

void new_person(Id& identifier)
{
	cout << "Enter in the name\n";
	cin >> identifier.name;
	cout << "Enter in their age\n";
	cin >> identifier.age;
}

void print_person(Id& identifier)
{
        cout << "The name is " << identifier.name << endl;
        cout << "The age is " << identifier.age << endl;
	cout << "The 3rd character in your name is " << identifier.name[3] << endl;
}
