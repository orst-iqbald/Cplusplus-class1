/*Name: Danish Iqbal
 *Date : 8/17/14
 *Description: Ask for grades from the command line nad uses them to calculate final grade. remake of gradeClass.cpp in command line input form
 *Input: grades for all test and quizzes via command line
 *output: final grade
 */

#include <iostream>
#include <cstdlib>

using namespace std;
struct StudentRecord
{
        int quiz1_grade;
	int quiz2_grade;
        int exam_grade;
	int final_grade;
};

//void getRecord(StudentRecord a[]);
void printRecord(StudentRecord& a);// notice how the pass by reference is used here and not w/ arrays. is that b/c arrays are pointers afterall?????. This prints the student record that you eter in 
void getGrade(StudentRecord& a);// htis calculate the student grade


int main(int argc, char *argv[]){

        StudentRecord a;// a is the instance of the student record
		
	a.quiz1_grade = atoi(argv[1]);// notice hwo argv is not a 2d array perhaps becaeu of hte conversion of atoi
        a.quiz2_grade = atoi(argv[2]);			
	a.exam_grade = atoi(argv[3]);
	a.final_grade = atoi(argv[4]);

	printRecord( a);// Prints the record
        getGrade( a);// Calculates the grades
        
return 0;
}

void getGrade(StudentRecord& a)
{
        int quiz_total, grade_total;
	quiz_total = 10*(a.quiz1_grade + a.quiz2_grade);
	
        grade_total = .25*(quiz_total + a.exam_grade) + .5*(a.final_grade);
        cout <<"Your grade for the course is "<<  grade_total << endl;

}
void printRecord(StudentRecord& a){      
        cout << "Quiz 1 grade " << a.quiz1_grade<< endl;;
        cout << "Quiz 2 grade " << a.quiz2_grade << endl;
        cout << "Exam grade " << a.exam_grade << endl;
        cout << "Final grade " << a.final_grade << endl;
}
