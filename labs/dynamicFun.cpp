#include <iostream>
using namespace std;

void fillArray(int a[], int length);
// Precondition is length of list
// Post condition: a[0] to a[length] is filled in by user by numbers

void printout(int a[], int length);
//Precondition: an array that's filled till length
//Post condition: prints each value in array till length 

void greatest(int a[], int length);
//Precondition: an array that's filled till length
//Post condition: spits out greatest value in array

void smallest(int a[], int length);
//Precondition: an array that's filled till length
//Post condition: spits out smallest value in array


int main(){

	int length;
	typedef int* IntPtr;// 1. here I make a pointer
	
	cout << "Enter the lenght of the list\n";
	cin >> length;
	IntPtr a; // 2. this assigns the pointer (which is an array) to array a
	a = new int[length];// 3. This says that array a will have length # of arrays, but length is single dimension so length itself will not have arrays.

	fillArray( a, length);
	// Fill in Array	
	
	printout( a, length);	
	//Print the Array

	greatest(a, length);
	//Search the Array for greatest value

	smallest(a, length);
	//Search array for smallest value

	// Delete the Array
  	delete [] a;


return 0;
}

void fillArray(int a[], int length){
        for(int i =0; i < length; i++){
                cout << "You're putting in value " << i << " of " << length << endl;
                cin >> a[i];
                }
	}

void printout(int a[], int length){
        cout << "You've put in the following values\n";
        for(int i =0; i < length; i++)
                cout << "The value of " << i << " is " << a[i] << endl;
	}

void greatest(int a[], int length){
        int greatest = a[0];// let's call a[0] the gretest value, just for placeholder purposes
        for(int i =0; i < length; i++){
                if(greatest < a[i]) // now if a[i] is greater than a[0], then greatest is a[i]
                   greatest = a[i];
        }
        cout <<"The greatest value is " << greatest << endl;
	}

void smallest(int a[], int length){
        int smallest = a[0];
        for(int i =0; i < length; i++){
                if(smallest > a[i])// see notes for greatest ot see how smallest works
                   smallest = a[i];
        }
        cout <<"The smallest value is " << smallest << endl;
	}
