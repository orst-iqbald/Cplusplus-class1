/*name: Danish Iqbal
 *Date: 8/17/14
 *description: creates a person identifier and uses pointers
 *input: person date - name and age
 *output; prints out the name and age
 */

#include <iostream>

using namespace std;

struct Id// asks only for name and age
{
	char name[20];
	int age;
	
};

void fill_friends(Id a[]);// notice no pass by reference perhaps b/c array
void print_friends(Id a[]);
int main(){

	int *person_ptr;// creating of pointer
	Id person;// 
	
	cout << "Enter identifiers for this person, name age\n";
	cout << "Enter in the name\n";
	cin >> person.name;
	cout << "Enter in the age\n";
	cin >> person.age;
	
	person_ptr = &person.age;// assingment of pointer to address of element
	cout << "Person pointer" << person_ptr << endl;
	cout << "Accessing member in person pointer" << *person_ptr << endl;

	Id friends[5];// fills in friends
	fill_friends(friends);
	print_friends(friends);
	
	
return 0;
}

void fill_friends(Id a[])
{	
	for(int i=0; i <5; i++){
        	cout << "Enter in the name\n";
        	cin >> a[i].name;
        	cout << "Enter in their age\n";
       	 	cin >> a[i].age;
	}
}	

void print_friends(Id a[])
{
        for(int i=0; i<5; i++){
                cout << "Name " << a[i].name<< endl;;
                cout << "Age " << a[i].age << endl;
        }
}
