#include<iostream>
using namespace std;

void int sort(int a, int b,int c);
/* this function sorts the values a, b, and c into smallest to largest. It does so by chekcing if a is small, middle or large and hten rearranging b and c accordingly
 */

int main(){

	int a;
	int b;
	int c;
	int small, middle, large; // this will be replaced by a, b, c later

	cout << "Enter values for a, b, and c repectively\n";
	cin >> a;
	cin >> b;
	cin >> c;

	sort (a, b, c) 

return 0;
}

void int sort(int a,int b,int c);{
	if ((a<b) && (a<c)) // checking if a is smallest
	  {
	  small = a;
	   	if (b<c)
			{
			middle = b;
			large = c;
			cout << small << middle << large <<endl;		
	   		}
	   	else
			{
			middle = c;
			large = b;
			cout << small << middle <<large <<endl;
	  		}	
	   }
        else if ((b<a) && (c<a))// check if a is largest
          {
           large = a;
                if (b<c)
                        {
                        small = b;
                        middle = c;
                        cout << small << middle << large << endl;
                        }
                else
                        {
                        small = c;
                        middle = b;
                        cout << small << middle << large << endl;
                        }
          }
	else // check if a is middle
	  { 
	  middle = a;
		if (b<c)
	        	{
			small = b;
	        	large = c;
			cout << small << middle << large << endl;
			}
		else
			{
			small = c;
			large = b;
			cout << small << middle << large << endl;
			}
	  } 
	
}
