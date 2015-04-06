#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
using namespace std;

int main(){

	int length; // length of the array
        length = 10;
	char wordarray[27] = "abcefghijklmnopqrstuvwxyz"; // word arrray that wil be used to pick words from
	char newarray[length];	//the array that's the random "secret word"
	char guessarray[length]; // the array that the player will have to guess
		
	cout << wordarray << endl;

	for (int i =0; i <= length; i++)
	   newarray[i] = wordarray[(rand()%26)]; // randomely pick words from the alphabet to make an array
	cout << "This is what player 1 will have to guess " << newarray << endl;
	
	cout << "These are the choice of letters you have for your guesses" << endl;
	for(int i=0; i <= length; i++){
		 cout << newarray[i] <<endl;
		   }// this prints out the seperate letters in the array player 2 will have to guess.

	for(int i=0; i <= (length); i++)
	   guessarray[i] ='x'; // this replaces all the letters player 2 will have to guess w/ "x"s

	cout <<guessarray << endl;
	cout << "Player 2 guess form the following letters\n";


	int count = 0; // this is a counter for the number of occurance for each letter
	for (int i=0; i <length; i++){
	   count = 1;
	   for(int x=i; x <(length - i); x++){
	      if(newarray[i] == newarray[x])
		count++;
	      }
	  cout << newarray[i] << " occurs " << count << " times\n";
	}
		


	char guessletter[1];
	int guesses = length;// the number of guesses for player 2 is equivalent to the number of words

        cout << "Player 2  you have to guess the letters in " << guesses << " guesses\n";    

        while (-- guesses >= 0)// while loop that contains a for loop to check guess aginst each letter in the secret word
        {
            cout << "enter in a letter\n";
            cin >> guessletter[0];
                for (int x = 0; x < length; x++){
                   if (guessletter[0] == newarray[x])
                       {
			
                        guessarray[x] = newarray[x];//insert the position of x from the secret word into misses if the guess is correct
                        cout << guessarray << endl;// running tally of what the whole word is looking like
			}                        
        	      else{
		  	cout << "wrong letter. guess again" << endl;
			}
			}
	}

return 0;
}
