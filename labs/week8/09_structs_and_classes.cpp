#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

//a simple struct to represent a vehicle

struct vehicle
{
	string name;
	string make;
	string model;
	float mpg;
};


void set_vehicle(vehicle &v, string name, string make, string model, float mpg);
void print_vehicle(vehicle &v);

/*
 * 	creates vehicles, pointers to vehicles, an array of vehicles, and an array
 * 		of pointer to vehicle, then manipulates them to show how we can access
 * 			member variables in various ways
 */

int main()
{
	vehicle my_car; //part a of Winter 2014 exercise set 8
	vehicle *car_ptr; //part b of Winter 2014 exercise set 8

	const int CAR_COUNT = 2;
	vehicle car_lot[CAR_COUNT]; //first part of part e of Winter 2014 exercise set 8
	vehicle *car_ptrs[CAR_COUNT]; //first part of part f of Winter 2014 exercise set 8

	my_car.name = "Joseph's Car";
	my_car.make = "Ford";
	my_car.model = "Escort";
	my_car.mpg = 30.5;
	
	car_ptr = &my_car; //setup for part c of Winter 2014 exercise set 8

cout << "current address of car_ptr: " << car_ptr << endl;
/*
 * next line is broken because we do not know how to insert a struct as
 * a whole "thing" into an output stream, covered in the CS162 materials
 * with operator overloading
*/
	//cout << *my_car << endl;

	cout << "my_car's name: " << car_ptr->name << endl;
	cout << "my_car's make: " << car_ptr->make << endl;
	cout << "my_car's model: " << car_ptr->model << endl;
	cout << "my_car's mpg: " << car_ptr->mpg << endl << endl;


	car_lot[0] = my_car; //set first car in lot to the value of the past car
	set_vehicle(car_lot[1], "DaFocus", "Ford", "Focus", 31.22); //set members of second car
	
//	print members of cars
	for(int i = 0; i < CAR_COUNT; ++i)
		{
		cout << "current address of car " << i << " " << &car_lot[i] << endl;
		cout << "car " << i << "'s name: " << car_lot[i].name << endl;
		cout << "car " << i << "'s make: " << car_lot[i].make << endl;
													cout << "car " << i << "'s model: " << car_lot[i].model << endl;
													cout << "car " << i << "'s mpg: " << car_lot[i].mpg << endl << endl;
													}

	for(int i = 0; i < CAR_COUNT; ++i)
	{
		car_ptrs[i] = &car_lot[i]; //just pointing to the ones we already have
	}
	
	for(int i = 0; i < CAR_COUNT; ++i)
	{
		cout << "current address of car " << i << " " << car_ptrs[i] << endl; //no more reference operator because we have the pointers themselves
		cout << "car " << i << "'s name: " << (*car_ptrs[i]).name << endl; //can use dereferenced value directly or...
		cout << "car " << i << "'s make: " << car_ptrs[i]->make << endl; //can use arrow notation
		cout << "car " << i << "'s model: " << car_ptrs[i]->model << endl;
		cout << "car " << i << "'s mpg: " << car_ptrs[i]->mpg << endl << endl;
	}
	
/*
 * functions I have used to show off some relations between structs,
 * arrays, and functions (and to reduce my typing all those assignments)
 */

		//print_vehicle(car_lot[0]);
		//print_vehicle(car_lot[1]);

return 0;
}

/**
 * 	function to set values in struct passed in
 * 	 */
void set_vehicle(vehicle &v, string name, string make, string model, float mpg)
{
	v.name = name;
	v.make = make;
	v.model = model;
	v.mpg = mpg;
}

/**
 * 	prints member variables of struct reference passed in
 * 	 */
void print_vehicle(vehicle &v)
{
	cout << "My car's name: " << v.name << endl;
	cout << "My car's make: " << v.make << endl;
	cout << "My car's model: " << v.model << endl;
	cout << "My car's fuel economy in miles per gallon: " << v.mpg << endl;
}
