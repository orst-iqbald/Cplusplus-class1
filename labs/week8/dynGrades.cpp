#include<iostream>
using namespace std;

void fillArray(int **g, int students, int quizzes);// Notice how multi array call the arrayww/ a double pointer, whereas in single array i would have g[]
// Precondition is length of list
// Post condition: a[0] to a[length] is filled in by user by numbers

void printout(int **g, int students, int quizzes);
// Precondition: array that's filled with i,j -- student and quiz corresponding to each
// Postcondition: Spits out the student and the grades on the quizzes

void countGrades(int **g, int students, int quizzes);
// Precondition: needs array, students and their grades
// Post condition: Counts occurane of each grade 

int main(){

	typedef int* gradesarray;// declaring pointer

	int students; 
	int quizzes;

	cout << "Enter in the number of students followed by number of quizes\n";
	cin >> students >> quizzes;
	
	// Declaring both dimensions of the array
	int i, j;
	gradesarray *g = new gradesarray[students]; // declaring array g, which is pointed to. This will have an array of students (rows)
	for(i=0; i < students; i++)
		g[i] = new int[quizzes];// declaring an array where each row of students is an array holding quizzes

	fillArray(g, students, quizzes);
	//Fill in Array

	printout(g, students, quizzes);
	//Printing out array

	countGrades(g, students, quizzes);
	//Counting the occurance of each grade
	
//	delete [] g
return 0;
}

void fillArray(int **g, int students, int quizzes){
         int i, j;
	 for(i=0; i < students; i++)
                for(j=0; j<quizzes; j++){
                     cout << "Enter in grades for student " << i+1 << " quiz " << j+1 << endl;
                     cin >> g[i][j];
                }
	}

void printout(int **g, int students, int quizzes){
   	int i, j;
	cout << "This is what you entered for student and quiz\n";
        for (i=0; i < students; i++)
        {
                for (j=0; j<quizzes; j++)
                     cout << g[i][j] << " ";
                cout << endl;
        }
   	}	

void countGrades(int **g, int students, int quizzes){
        for(int a=1; a<6; a++){
                int appearance = 0;
                for(int i = 0; i<students; i++){
                     for(int j=0; j <quizzes; j++){
                        if (a == g[i][j])
                           appearance++;
                        }
                     }
                cout << a << " occurs " << appearance << " times "<< endl;
                }
	}
