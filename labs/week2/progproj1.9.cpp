/*Prog Filename: Programming Project 1.9_ Week 2 Assigment
 * Author: Danish Iqbal
**Date: 7/4/14
  **Description: Program to tellyou how many coupons you've won and how many andies and gumballs they're worth. 10 coupons for a candy bar and 3 for a gumball
  **Input: coupons
  **Output: How many candies it's worth and gumbals with perfernce or candies
*/

#include<iostream>
using namespace std;

int main()
{
   int coupons;
   
   cout<<"How many coupons do you have?\n";
   cin>> coupons;
   cout<<"You can buy"<< coupons/10 <<" candies and"<< (coupons%10)/3 <<" gumballs\n";


return 0;
}
