/*Name: Danish Iqbal
 * Date: 8/22/14
 * Description: creating an object with and wihtout pointers and arrays
 * Input: There is a box that the user has to input dimensions in for in array format
 * Output: Dimension of box through array output and pointer output. 
 */

#include <iostream>
using namespace std;

class BoxDimension
{
public:
	int length;
	int width;
	int height;
};

int main(){

	BoxDimension package;
	    package.length = 3;
	    package.width = 4;
	    package.height=  5;

	BoxDimension *ptrpackage;
	ptrpackage = &package;
	
	cout << "Package length through non pointer is " << package.length << endl;
	cout << "Package length though pointer is " << ptrpackage->length << endl;
///// qeustion d -- accessing members through pointers

	BoxDimension gift_boxes[2];
	for(int i=0; i<2; i++){
                cout << "Enter in the length of the box\n";
		cin >> gift_boxes[i].length;
                cout << "Enter in the width of the box\n";
		cin >> gift_boxes[i].width;
                cout << "Enter in the height of the box\n";
		cin >> gift_boxes[i].height;
	}
// question e - accessing member of array
	for(int i=0; i<2; i++){
                cout << "Length of box "<< i << " is " << gift_boxes[i].length << endl;
                cout << "Width of box " << i << " is " << gift_boxes[i].width << endl;
                cout << "Heigh of box " << i << " is " << gift_boxes[i].height <<endl;
        }

/////// question f-- an array of pointers
	BoxDimension *ptrgift_boxes[2];
//	ptrgift_boxes[2] = new BoxDimension[2]; - - notice that this doesnt' work b/c it's calling a specific point the array instead of the whole array	
	for (int i=0; i <2; ++i)
		ptrgift_boxes[i] = &gift_boxes[i];

/* - - notice in heret that you can't do below becasue a pointer needs an address to store and not a valeu
        for(int i=0; i<2; i++){
		cout << "Enter in the length of the pointer box\n";
                cin >> ptrgift_boxes[i]->length;
                cout << "Enter in the width of the pointer box\n";
                cin >> ptrgift_boxes[i]->width;
                cout << "Enter in the height of the pointer box\n";
                cin >> ptrgift_boxes[i]->height;
        }	
*/
//question f (cont) -- accessing members of pointer array
        for(int i=0; i<2; i++){
                cout << "Length of pointer box "<< i << " is " << ptrgift_boxes[i]->length << endl;
                cout << "Width of pointer box " << i << " is " << ptrgift_boxes[i]->width << endl;
                cout << "Heigh of pointer box " << i << " is " << ptrgift_boxes[i]->height <<endl;        
	}	

return 0;
}

