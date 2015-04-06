#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

struct Package{
	int length;
	int width;
	int height;
	string items[];
	int weight;
};

class Order{
public:
        int cost();
      //  int total_weight();
        Package box;
};

void createPackage(Package[]);

int main(){

//1. Enter in the number of packages for the order
	int number_packages;
	cout<< "How many packages will this order have?\n";
	cin >> number_packages;

//	Package * pointer = new Package[number_packages];
	for(int i=0; i<number_packages; i++)
		createPackage(box)

//2. This creates an order for the total packages you'll have delivered	
	/*
	string box_array[3] = {"a", "b", "c"};

	for(int i=0; i<number_packages; i++){
	//	box_array[i];
		Package Box(i);
		createPackage(Box(i));
	}

	int total_weight;
	for(int i=0; i <number_packages; i++)
		total_weight =+ i.weight;

	cout << Box1.length <<endl;
*/
//3. This array is to calculate the cost of the order
	int cost[125][10];
        int price =0;
        for (int i=0; i <125; i++){
                for(int j=0; j<10; j++){
                        cost[i][j] = price;
                        price++;
                }
        }
/*
//4. Order creation
	Order cart;
	cart.total_weight();
//	for(int i=0; i<number_packages; i++)
*/
	



return 0;
}

void createPackage(Package box[]){
    for(int i=0; i <3; i++){		
	box.length = rand()%6;
	box.width = rand()%6;
	box.height = rand()%6;

	int item;
	item = rand()%5;
	int *i;
	i = new int[item];
        string products[7] = {"shirt", "pants", "skirt", "hat", "belt", "purse", "shoes"};    	
	for(int c =0; c < item; c++)
	box.items[c] = products[rand()%6];
	box.weight = rand()%11;
		
	}
}
/*
void Order::total_weight(){
	for(int i=0; i <number_packages; i++)
*/		

