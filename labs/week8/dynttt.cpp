#include<iostream>
#include<string>
using namespace std;

int main(){

        typedef char* tttarray;// notice this is a character array

	string filler = "0123456789";// this is where the array pick up the 1-9 values
        int length = 3; // 3 x 3 board
        int width =3;// 3 x 3 board
	int count =0;	// count is the reference to where you ar on the filler stirng

// Declaring the array
        int i, j;
        tttarray *t = new tttarray[3];// NOte this formation, tttarray pointer varialbe is a pointer of pointers.
        for(i=0; i < length; i++)
                t[i] = new char[3]; // this is the array of array

        for(i=0; i < length; i++)
                for(j=0; j<width; j++){
		    count++;
                    t[i][j] = filler[count];// this fills in the string from variables
		    }

// Printing out the tic tac toe board
	cout << "This is what you entered in your tic tac toe board\n";
        for (i=0; i < length; i++)
        {
                for (j=0; j<width; j++)
                     cout << t[i][j] << " ";
                cout << endl;
        }

// Do-while loop for each round of player 1 nad 2. Stops when you're greater than 3 since the game is effectively lost by then. 
int appearance = 0;
do{
	char spot;
	cout << "Player 1, enter in an X in a spot. Indicate which spot\n";
	cin >> spot;
        for (i=0; i < length; i++){
                for (j=0; j<width; j++)
		     if(t[i][j] == spot)
                      t[i][j] = 'X';// replacing the spot declared w/ X or O
        }
	
	cout << "This is what you entered in your tic tac toe board\n";
        for (i=0; i < length; i++)
        {
                for (j=0; j<width; j++)
                     cout << t[i][j] << " ";
                cout << endl;
        }

        cout << "Player 2, enter in an O in a spot. Indicate which spot\n";
        cin >> spot;
        for (i=0; i < length; i++){
                for (j=0; j<width; j++)
                     if(t[i][j] == spot)
                      t[i][j] = 'O';
        }

        cout << "This is what you entered in your tic tac toe board\n";
        for (i=0; i < length; i++)
        {
                for (j=0; j<width; j++)
                     cout << t[i][j] << " ";
                cout << endl;
        }
// HOw do you make this multidimensional into a function that counts x a

//      This is for the do-while loop so that when appearance of X is more than 3 then we end the rounds for player 1 and 2. 
        for(int i = 0; i<3; i++)
             for(int j=0; j <3; j++){
                 if (t[i][j]== 'X')
                    appearance++;
                 }

} while (appearance <4);

return 0;
}


