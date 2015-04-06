#include <iostream>

using namespace std;


void value(int a[], int size);
int addarray(int a[], int size);
void check(int a[], int size);
int main(){
	
	int a[5];
	int size;
	size = 5;
	
	value(a, size); 
	check(a, size);
	cout << addarray(a, size)<< endl;
return 0;
}

void value(int a[], int size){
	cout << "Enter " << size << " values\n";	
	for (int i=0; i<size; i++){
		cin >> a[i];
		while (!cin){
//			if(cin.peek()!='\n' && cin.peek()!= '\r'){
			cin.clear();
			cin.ignore(999, '\n');
			cout << "Enter an integer only" << endl;
			cin >> a[i];
		}
//	}
}
}
/*
void value(int a[], int size){
	size = 5;
	for(int i=0; i<size; i++){
		if(!cin){
			cin.clear();
			cout << "Enter an integer"<< endl;
			cin >> a[i];
		}
		else{
			cout << "Enter value" << i << endl;
			cin >> a[i];
		}	
	}
}
*/
int addarray(int a[], int size){
	int sum =0;
	for(int i=0; i<size; i++)
		sum = sum + a[i];
	return sum;
} 

void check(int a[], int size){
	for (int i=0; i<size; i++)
		if (isdigit(a[i])){ 
			   cout << a[i] << "is an integer\n";
			   }
}


