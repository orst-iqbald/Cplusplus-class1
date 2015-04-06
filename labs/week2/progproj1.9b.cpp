/*Prog Filename: Programming Project 1.9b_ Week 2 Assigment
 *  * Author: Danish Iqbal
 *  **Date: 7/4/14
 *    **Description:Looping Program to tellyou how many coupons you've won and how many andies and gumballs they're worth. 10 coupons for a candy bar and 3 for a gumball
 *      **Input: coupons
 *        **Output: How many candies it's worth and gumbals with perfernce or candies
 *        */

#include<iostream>
using namespace std;

int main()
{
   int coupons;
   int total;	   

   cout<<"How many coupons do you have?\n";
   cin>> coupons;
   
   int candies = coupons/10;
   total = candies*10;

   while (candies>0)
   {
    cout<<"You had this many "<< candies << "coupons for candies and now you have "<< candies-1<<"coupons for candies\n";
   candies--;
   }

   int gumballs = (coupons%10)/3;
   total = total + gumballs*3;
   while (gumballs>0)
   {
    cout<<"You had this many "<< gumballs << "coupons for gumballs and now you have "<< gumballs-1<<"coupons for gumballs\n";
   gumballs--;
   }
  
   cout<<"You have a total of "<<(coupons - total)<<" coupons remaining\n";

return 0;
}
