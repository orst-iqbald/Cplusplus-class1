#include <iostream>

using std::cout;
using std::endl;

/*
 * 	demonstrate some pointer and array functionality intended for those who
 * 		already have a touch of exposure to pointers and arrays
 * 		*/
int main()
{
	int *int_ptr;
	int my_int = 5;
	int_ptr = &my_int;
	
	cout << "simple pointer dereference on int pointer: " << *int_ptr << endl << endl;
	
	const int arr_size = 3;
	int arr[arr_size] = {1, 2, 3};
	int_ptr = arr;
	
	cout << "int array for reference: ";
	for(int i = 0; i < arr_size; ++i)
	{
		cout << arr[i] << ", ";  //do not mind the end comma for now, use an if statement if it bothers you
	}
	cout << endl << endl;
	
	cout << "simple pointer dereference pointer to int array: " << *int_ptr << endl;
	cout << "array dereference 0 offset: " << int_ptr[0] << endl;
	cout << "array dereference 1 offset: " << int_ptr[1] << endl;
	cout << "array dereference 2 offset: " << int_ptr[2] << endl << endl;
	
	cout << "also doable with pointer arithmetic (offset 0): " << *(int_ptr + 0) << endl;
	cout << "also doable with pointer arithmetic (offset 1): " << *(int_ptr + 1) << endl;
	cout << "also doable with pointer arithmetic (offset 2): " << *(int_ptr + 2) << endl;
	
	return 0;
}
