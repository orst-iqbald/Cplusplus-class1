/* Name: Danish Iqbal
 * Date: 8/28/14
 * Description: Final Project
 * Input: Placing in the number of plackages that will be in your order and the country that the order will be shipped to
 * Output: The program will give you the total cost of your order and add an additional charge depending on the eligible country you ship to
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
// A. This struct creates the order, where an order is composed of many packages. You will notice in this program that despite having the actual weights of packages, logistics companies use a table to place a volumetric weight. They determine the cost of the order using the volumetric weight of the largest package.

// -----------------
// Requirement #21: Demonstrates definition anduse of at least one struct
// -----------------
struct package
{	
	int length;
	int width;
	int height;
	int weight;
};
// B. This class is basically a table that assigns a cost to each volumetric weight. There can only be integer volumetric weights and the highest volumetric weight is 125, since all packages are restricted to a height, length, and width of 5. 

//------------------
// Requirement #22: demonstratest defninition ans use of Class and atleast one object
// ----------------
class Cost{
	public:
	int weight[130];
	double cost[130];
};
//------------------
// Requirement #11: Demonstrates at least one funciton
// Requirement #12: Demonstrates general functional decomposition
// ----------------
void input(package[],int number);
// C. Funciton: This function assigns random height, width, length, and weight values to each of the packages you have in your order. 
void print(package[], int number);
// D. Function: This function assigns prints the values that were assigned to each of your packages
//------------------
// Requirement #15: Demosntrate function overloading
// -----------------
int search( const int a[][10], int size, int target);
// This fucntion searches for the "volumetric weight" in this made-up table. I know logistic companies use something like this, but this table is fake for this exercise. The function returns the volumetric weight of the largest box in your order. This will be later used ot determine the orders cost.
int search (int dim_array[], int number, int greatest, package[]);
// F. Function: This function uses the volumetric weight of the greatest box to return you the cost of the box
//------------------
// Requirement #17: Demonstrates recursion
// ----------------
int volume_filler(int volume);
// G. Function: This function uses recursion to fill in the volummetric array with values up till 130 (the greatest possible volume of our box)
void country(string country, int number);
// H. Function: This function uses the country you entered to add in extra costs to your order. 

int main(){
//-----------------
// Requirement #01: Demonstrates simple output
// Requirement #02: Demonstrates simple input
// ----------------
	int number;// Number of packages
	cout << "How many packages will be in your order\n";
	cin >> number;

//A. Creation of the packages in the order
//-----------------
// Requirement #19: Demonstrates a dynamically declared array
// ----------------
	package *b;// Creation of a dynamic pointer struct for an array of packages. The array represents your order
	b = new package[number];

	input(b, number);// Function to create packages and place in values for them
	print(b, number);// Function to print out the individual packages dimensions and weights
//-----------------
// Requirement #24: Demonstrates a pointer to a struct
// Requirement #14: Demonstrate passing mechanisms
// ---------------
	package *p[number];// To demonstrates poninters and pass by mechanisms I created another object in the struct which i will then make equivalent to object b.
	for(int i=0; i<number; ++i)
		p[i]=&b[i];

//B. This creates an array so we can find what volumetric value of each packaage is and what is the greatest package by volume in that order. This largest box will be used to determine the cost of the entire order. 
//-----------------
// Requirement #25: Demonstrates pointer to an object
// Requirement #07: Demonstrates one loop
// ----------------       
	 int dim_array[number];// an array that takes all the volumes of the boxes. Dim is dimension for short.
         int dim;// the "setter" that places the volumes of each of your packages in dim_array
//-----------------
// Requirement #13: Demonstrate scope (see int i inside for loop
// ----------------

        for(int i=0; i <number; i++){
//----------------
// Requirement #23: Demonstrate pointer to array as well as struct and the object in struct
// ---------------
                dim = (p[i]->length) * (p[i]->width) * (p[i]->height);// Using pointer to get the volume of each package
                dim_array[i] = dim;// Inserting the volume of each package into the dim_array
        }

// C. Function for finding the actual weight of the package with the greatest volumetric weight
	int greatest = dim_array[0];
	int actual_weight;
	actual_weight = search(dim_array, number, greatest, b);// Function of finding the actual weight of the package wiht the greatest volume in the order


//D. This creates the weight-volume matrix that will be used to find what the volumetric weight would be. This table is filled with all possible volumes of the packages (125 values). I will later compare this volumetric weight to the actual weight to show how much the cost would have been were it not for large packages.
//----------------
// Requirement #18: Demonstratest a multidimensional array
// ----------------
	int real_volume = 13;
	int weight_volume[real_volume][10];
        int volume =0;
        for (int i=0; i <real_volume; i++){
                for(int j=0; j<10; j++){
                        weight_volume[i][j] = volume_filler(volume);
     
                }
        }

//E. This funciton uses the weight_volume matrix we just made to search for the volumetric weight. This volumetric weight could be differnt thatn the actual weight and will be used to calculate the cost of the order
	int volumetric_weight;	
	volumetric_weight = search( weight_volume, real_volume, greatest);// Function to search and return the volumetric weight
	cout << "for your length, weight, height, your volumetric weight, which will be used to calculate the cost of your orders is, " << volumetric_weight << endl;

//F. Creating the Class for looking up the cost of package based on its volumetric weight.
	Cost weightCost;
		for(int i=0; i<130; i++){
			weightCost.weight[i] = i;
			weightCost.cost[i] = pow(i, 2)/4;
		}

//G. Output of the cost of the order based on the volumetric weight of the largest package in your order. 
	cout << "Has we used your actual weight, your cost would have been " << weightCost.cost[actual_weight] << "\n  but, since we are using volumetric weight your cost for the order will be " << weightCost.cost[volumetric_weight] <<endl;

	string countrie;
	cout << "Just when you thought the cost couldn't get more! Which country woudl you like to ship the order to.\n  Each package in the order wil be assessed a shipping price which you must pay in addition to the shipping price printed earlier!.\n Enter in only USA, CAN, AUS or ENG\n";
	cin >> countrie;
	country (countrie, number);;

return 0;
}

void input(package p[], int number)// fills in random values for the packages in the struct
{
//-------------------
// Requirement #08: Demonstrates one random number
// -----------------
	for(int i=0; i<number; i++){
		p[i].length = rand()%6;
		p[i].width = rand()%6;
		p[i].height= rand()%6;
		p[i].weight = rand()%11;
	}
}

void print(package p[], int number)// prints out the values of packages 
{ 
       	for(int i=0; i<number; i++){
		cout << "length for box " << i+1 << " is " << p[i].length << endl;
                cout << "width for box " << i+1 << " is " <<  p[i].width << endl;
                cout << "height for box  " << i+1 << " is " <<p[i].height << endl;
                cout << "weight for box " << i+1 << " is " << p[i].weight << endl;
	}
}


int search(const int a[][10], int size, int target)//This function searches the volume-weight matric array to find the volumetric weight of the greatest box, which is hte multiplied value of the array indexes. a[][10] is the weight volume array, and target is volume of the greatest box.
{
        int index =0;
        int jindex=0;
        bool found = false;

        for(index=0; index <size; index++)
                for(jindex=0; jindex<13; jindex++)
                        if (target = a[index][jindex]){
                            found = true;
                            break;
                        }

        if (found)
               return ((jindex+1)*(index+1));
        else
               return (0);
}

int search (int dim_array[], int number, int greatest, package p[])// This function search for the actual weight of the greatest package (by volume). The number here is hte number of packages in the order, and greatest is passed in as a place holder at dim_array[0]. The function calcculates the correct index of the greatest package (by volume) and uses that index to find the actual weight of that package. 
{
        int array_index=0;
        for(array_index = 0; array_index<number; array_index++)
                if(greatest < dim_array[array_index]){
                   greatest = dim_array[array_index];
                   break;
                }
              int actual_weight;
              actual_weight = p[array_index].weight;
              return (actual_weight+1);// +1 so incase we have a 0 for weight, we can assign it a weight
}

int volume_filler(int volume){
        if (volume >= 130)
                return volume;
        else
                return volume+1;
}
//-----------------
// Requirement #16: Demonstrates std::string and cstring
// --------------- 

void country( string country, int number){
      
//----------------
// Requirement #09: Demonstrate understanding of error categories
// Requirement #10: Demonstrates errors (syntax): Would help reduce error that may come from incorrect spelling or spellings that have part of the required countries. 
// Requirement #04: Demosntrate conditional statements
// -------------

        if((country != "USA") &&(country != "CAN") && (country !="ENG") && (country !="AUS"))
        do{
                cout<< "Invalid input, input only USA, CAN, ENG or AUS\n";
                cin >> country;
//----------------
// Requirement #05: demonsstrator logical operators
// ---------------
        }while ((country != "USA") &&(country != "CAN") && (country !="ENG") && (country !="AUS")); 
        
                if(country.find("E"))
                        cout << "for each package, add $4 to your order cost. That means add a total of " << 4*number << " to the order cost\n";
                else
                        cout << "for each package add $9 to your order cost. That means add a total of "<< 9*number << "to the order cost\n";
    
}
