/* Name: Danish Iqbal
 * Date: 8/22/ 14
 * Description: Assign 9, project component - menu for users to choose differnt games and run them
 * Input: The game you want to play, if you want to play the same game again, and if you want to go back to the menu and play a different game
 * Output: Execution of the game you want to play
 */
	

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void begin_game(string game);// Function to play the game of your choice
void hello(string game);// hello world game
void echo(string game);// echo game - echoes back what you wrote
void guess(string game);// guess the number game
void game_again(int ans =1);// going back to menu function. 

int main(){

	game_again();// calls on a function to print out a message or you to choose a game  you want to play to execute
	
return 0;
}
//Choose which game to play
void begin_game(string game){
        if(game == "Hello")
                hello(game);
        else if(game == "Echo")
                echo(game);
        else if(game == "Guess")
                guess(game);
	else
		exit(1);
        }

//Game again message
void game_again(int ans){
        string game;//You enter in the name of the game you want to play
	cout << "Which game do you want to play. You can choose among: Hello, Echo, Guess, or Exit\n";
        cin >> game;
        if((game != "Hello") && (game != "Echo") && (game != "Guess") && (game != "Exit"))// do while loop for validation
                do{
                cout << "Invalid input, You can choose among: Hello, Echo, Guess, or Exit. Enter again.\n";
                cin >> game;
                }while((game != "Hello") && (game != "Echo") && (game != "Guess") && (game != "Exit"));
	begin_game( game);// calls on the game you want to play to execute
	}

// Game 1 Hello World
void hello(string game){
	string playagain = "Y";
	do{
		cout << "Hello World" << endl;
		cout << "Want to play again? Enter in Y or N" << endl;
		cin >> playagain;
		}while (playagain == "Y");
	game_again();
	}

// Game 2 Echo program
void echo(string game){
	string playagain = "Y";
	string line;
	do{
		cout << "Enter in a sentence or a word" << endl;
		cin.ignore(1000, '\n');
		getline(cin,line);
		cout << "Echoing back to you " << line << endl;
        	cout << "Want to play again? Enter in Y or N" << endl;
        	cin >> playagain;	
	}while (playagain =="Y");
        game_again();
	}

// Game 3 Guess the number
void guess(string game){
	string playagain = "Y";
	do{
	int number;// number to guess
	int guess;// the number that will be guessed by player 2
	int guesses =3;// total guesses
	//Section for player 1 to enter in the number	
	cout << "Player 1: Enter in the number btw 1 and 10 you'd like to be guessed by Player 2\n";
	cin >> number;
	if(number >10 || number <0)
		do{
        	cout << "Invalid. Enter in a number you'd like to be guessed that btw 1 & 10\n";
		cin >> number;
		}while (number >10 || number <0);
	// Section for player 2 to guess the number
	cout << "Player 2: Guess a number between 1 and 10, in three guesses\n";
	while((guesses-- <= 3) && (number !=guess) && (guesses >= 0)){
	        cin >> guess;
		if (number == guess)
			cout<< "you guessed right\n";
		else if(guess >10 || guess <0){
			cout << "you have to guess a number between 10 and 1" << endl;
			guesses++;
			}
		else if(guesses <1)
			cout << "You're out of guesses" <<endl;
		else
			cout << "guess again\n";
		}

        cout << "Want to play again? Enter in Y or N" << endl;
        cin >> playagain;
	}while(playagain == "Y");

	game_again();
	}

