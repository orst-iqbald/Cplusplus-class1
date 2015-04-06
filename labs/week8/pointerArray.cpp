/*Name: Danish iqbal
 *Date: 8/17/14
 *Description - creates a struct for all your firend
 *input: input in the information of yoru friends
 *output: prints information of yoru friends
 */


#include<iostream>
#include<string>
using namespace std;

struct person
{
	string name;
	int age;
};

void set_person(person &p, string name, int age);// sets values -- notice pass by refrence
void print_person(person &p);

int main(){
	
	person *friends;// declaring pointer friends
	friends = new person[5];// assigning array to pointer
//The two lines below are correct
//	friends[0].age = 27;
//	cout << friends[0].age << endl;
	
	set_person(friends[0], "Joe", 21);// passing in specific refernce of array which is a friend
	set_person(friends[1], "Bob", 22);
        set_person(friends[2], "Dan", 23);
        set_person(friends[3], "Rob", 24);
        set_person(friends[4], "Abe", 25);
	
	for(int i=0; i<5; i++)
		print_person(friends[i]);// print out all friend
	
	
return 0;
}

void set_person(person &p, string name, int age)// notice how it's pass by vlaue
{
	p.name = name;
	p.age = age;
}

void print_person(person &p)
{
        cout << "Name is " << p.name << endl;
        cout << "Age is " << p.age << endl;
}
