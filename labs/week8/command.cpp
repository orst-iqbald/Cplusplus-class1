#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc, char *argv[]){
//////////////////////

	int length = 7;
        typedef char* IntPtr;

        IntPtr a;
        a = new char[7];

	//Filling in the array
	for(int i =0; i < argc; i++){
                cout << "You're putting in value " << i << " of " << length << endl;
                argv[i];
                }
	//Printing the array
        cout << "You've put in the following values\n";
        for(int i =0; i < length; i++)
                cout << "The value of " << i << " is " << argv[i] << endl;
        //Search for greatest
	int i = 0;
        int greatest = atoi(argv[0]);
        for(int i =0; i < 7; i++){
                if(greatest < atoi(argv[i]))
                   greatest = atoi(argv[i]);
        }
        cout <<"The greatest value is " << greatest << endl;
	//Delete the array
	delete [] a;

return 0;
}




