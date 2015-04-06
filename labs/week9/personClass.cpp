/* Name: Danish Iqbal
 * Date: 8/22/14
 * Description: Assignment 9, Question 1, creating a function that creates an object of a class and asks user to assign values to objects member values
 * Input: Name and age of person
 * Output: Name and age and age if there is birthday
 */


#include<iostream>
using namespace std;

class Person
{
public:
	char name[20];
	int age;
	void having_birthday();// increments age of person
};
void createinstance(Person& individual);
void printinstance(Person& individual);

int main(){
	Person individual; // creates the individual
	createinstance(individual);// fills in the values of the individual
	printinstance(individual);// print out ht evalues
	individual.having_birthday();// increments the age by one
return 0;
}
void createinstance(Person& individual){
	cout << "Enter name\n";	
	cin >> individual.name;
	cout << "Enter age\n";
	cin >> individual.age;
}
void printinstance(Person& individual){
	cout << "Name is " << individual.name << endl;
	cout << "Age is " << individual.age << endl;
}
void Person::having_birthday()
{
	age = age+1;
	cout << "After the birthday, the age is "<< age <<endl;
}
