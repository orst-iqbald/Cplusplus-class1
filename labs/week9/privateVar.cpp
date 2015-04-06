/*Name: Danish Iqbal
 * Date: 8/22/14
 * Description: Assign 8, question 2. A program that uses get and set functions to get name, age of a person
 * Input: Name and age
 * Output: Nam and age via get/set fucntion and age after birthday
 */

#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
        string name;
        int age;
public:
        void having_birthday();// increments age of person
	void setName(string);
	void setAge(int);
	string getName();
	int getAge();
};

int main(){
        Person individual;
        individual.setName("danish");
	individual.setAge(27);

        cout << "Name is " << individual.getName() << endl;
	cout << "Age is " << individual.getAge() << endl;
        individual.having_birthday();
	
	
return 0;
}

void Person::having_birthday()
{
        age = age+1;
        cout << "After birthday, age is " << age <<endl;
}
void Person::setName(string n){
	name = n;
}
void Person::setAge(int a){
	age=a;
}
string Person::getName(){
	return name;
}
int Person::getAge(){
	return age;
}
