/*Name: DanishIqbal
 *Date: 8/17/ 14
 *Description: You input in the grades for the exams and quizzes and it give you back your final grade score
 *input: the scores of each exam and quiz
 *Output: grades and the total graes the student revieved
 *
 */

#include <iostream>
#include <string>
using namespace std;
struct StudentRecord// asks for the inputs for quiz and gardes
{
	int quiz_number;
	int quiz_grade;
	string exam;
	int exam_grade;
};

void getRecord(StudentRecord a[]); // Notice how these are not pass by reference and i think that's becaseu arrays are pointers?? This function gets ask for inputs into the struct. The student record is an array because you have 2 quizzes ad 2 tests 
void printRecord(StudentRecord a[]);// htis funciton prints out the graes
void getGrade(StudentRecord a[]);// this function calculates the final grade

int main(){
	
	StudentRecord input[2];// an array fo 2 because of two quizzes and 2 tests
	cout << "Enter in the record for the student\n";
	
	getRecord(input);
	printRecord(input);	
	getGrade(input);
	
return 0;
}

void getRecord(StudentRecord a[])// iterates through both quizzes and tests
{
	for(int i=0; i<2; i++){
		cout << "Enter in the quiz\n";
		cin >> a[i].quiz_number;
		cout << "Enter in quiz grade\n";
		cin >> a[i].quiz_grade;
		cout << "Enter in the exam, midterm first and final second\n"; // Enter in midterm first, final after
		cin >> a[i].exam;// Enter in midterm or final
		cout << "Enter in exam grade\n";
		cin >> a[i].exam_grade;
	}
}

void printRecord(StudentRecord a[])// prints out the inputs for grades
{
        for(int i=0; i<2; i++){
                cout << "Quiz " << a[i].quiz_number<< endl;;
                cout << "Quiz grade " << a[i].quiz_grade << endl;
                cout << "Exam  " << a[i].exam << endl;
                cout << "Exam grade " << a[i].exam_grade << endl;
        }
}

void getGrade(StudentRecord a[])// calculates grades by making 2 new variables, quiz total adn grade total. quiz total is used to place in the correct weight. 
{
	int quiz_total, grade_total;

	for(int i=0; i<2; i++)
		quiz_total =+ 10*a[i].quiz_grade;
	
	grade_total = .25*(quiz_total + a[0].exam_grade) + .5*(a[1].exam_grade);
	cout <<"Your grade for the course is "<<  grade_total << endl;

}
