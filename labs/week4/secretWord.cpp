#include <iostream>
#include <string>

using namespace std;

int main(){

	string secret; //secret work
	string letter; //letters player two will guess
	string misses; //the word formation from all of player 2s guesses
	
	cout << "It's your turn, Player 1.  Enter in a string w/o space or numbers\n";
	cin >> secret; 
	misses = secret;// misses = secret so it's not an emply string
	
	for (int i = 0; i < secret.length(); i++)  // this inserts blanks into the word you're to guess
	  misses[i] = '-';
	
	int guesses = secret.length();// the number of guesses for player 2 is equivalent to the number of words

        cout << "Player 2  you have to guess the letters in " << guesses << " guesses\n";	
	
	while (-- guesses >= 0)// while loop that contains a for loop to check guess aginst each letter in the secret word
	{
	    cout << "enter in a letter\n";
	    cin >> letter;
		for (int x = 0; x < secret.length(); x++)
		   if (letter[0] == secret[x])
			{
			misses[x] = secret[x];//insert the position of x from the secret word into misses if the guess is correct
			cout << misses << endl;// running tally of what the whole word is looking like
			}
	}		
		
	cout<< "The secret word was " << secret << " and you guessed " << misses <<" the missing letters were\n";

	for (int i=0; i<secret.length(); i++)// this tells you what letter you had remaining
	    if (secret[i] != misses [i])
		cout << secret[i] << endl;
	

return 0;
}
