#include<iostream>
using namespace std;

int main()
{
   int secret; /* secret number that player 1 enters*/
   char playagain='y'; /*while this is yes,loop keeps running. Boolean doesn't work here for soem reason*/
   
   int number; //number that player 2 has to guess. This changes w. each iteratoni of the loop
   int guesses=3;// number of guesses given initially
   int maxRange=100;// max range initially - 0 to 100
   int minRange=0;// min range intially
   
while (playagain=='y')// outer loop. There is a loop inside this. you get you by cin playagain == anything but a y
{
   cout<<"Enter in your seceret number to be guessed between 1 and 100\n";
   cin>> secret;
   cout<<"Now it's time for player 1 to guess a number between 1 and 100\n";

   while ((--guesses >= 0)&&(number!=secret))// run loop until guess go to 0 or till number guessed is right (ie number = secret)
   {
   cin>>number;//player enters his guess for each iteration of loop
      if (number > secret)//this is multilevel if stmt w. greater, less, or equal. Notice seperation of each w/ curly bracket
	{	
	maxRange = number;// place maxRange as the number the player guessed
	cout<<"You're too high and you have"<< guesses <<"more guesses and the number is between"<<minRange<<" and"<<maxRange<<endl;
      	}
      else if (number < secret)
	{
	minRange = number;// place min range as the lowest number player guessed
	cout<< "You're too low and you have"<< guesses <<"more guesses adn the number is between"<<number<<"and"<<maxRange<<endl;
        }
      else 
        {
	cout<< "Congrats! You're right. Wanna play again?\n";
	cin>>playagain; 
	}
   }
    
   if(guesses==-1)// still in the greater while loop for play again but out of guessing while loop. This tells you how close your guess was. multip level if stament
	if((secret-minRange)>(maxRange-secret))
	cout<<"You ran out of guesses and the secret number is "<< secret <<" Your closest guess was "<<(maxRange-secret);
        else
	cout<<"You ran out of guesses and the secret number is "<< secret <<" Your closest guess was"<<(secret-minRange);



	cout<< "do you want to play again?(y/n)\n";
   	cin>> playagain;// this controls the greater while loop. if you enter anything but a y then you'll get out of loop
	guesses=3;// resets guesses
	minRange = 0;//resets min and max range
	maxRange = 100;
/*    cout<<" now time for player 2\n"; 
*/
}
cout<<endl;
return 0;
}
