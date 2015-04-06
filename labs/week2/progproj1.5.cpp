/*Author: Danish Iqbal
  ** Date: 7/4/14
  **Description: Program to tell when we've exceeded room capacity and are in violation of fire law regulation
  **Input: Room capacity and # of people in room
  **Output: whether is legal to hold meetings and if so, then how many more people can attend
*/

#include<iostream>
using namespace std;

int main()
{
//reading in how what the room capacity is and how many people are in the room

  int room_capacity;
  int people;

   cout<<"What is the room capacity?\n";
   cin>> room_capacity;
   cout<<"How many people are in the room?\n";
   cin>> people;

   if (people>room_capacity)
   {
      cout<<"Too many people. You're exceeding capacity by"<<(people - room_capacity)<<endl;
   }   
      else
   {
      cout<<"It's legal to have a meeitn in there and there can be an additional "<<(room_capacity-people)<<" `people\n";
   }

return 0;

}


