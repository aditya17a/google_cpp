#include <iostream>
#include <string>

using namespace std;

#define assignment_weight 0.4
#define midterm_weight 0.15
#define final_weight 0.35
#define cp_weight 0.10

float input(string text)
{
float score;
x: cout << text;
if(!(cin >> score)){
	cout << "Please enter a floating point number.\n";
	cin.clear();
	cin.ignore(10000, '\n');
	goto x;
	}
return score;	
}

int main()
{
float ass1 = input("Enter the score for the first assignment: ");
float ass2 = input("Enter the score for the second assignment: ");
float ass3 = input("Enter the score for the third assignment: ");
float ass4 = input("Enter the score for the fourth assignment: ");
float mid_term = input("Enter the score for the midterm: ");
float final_exam = input("Enter the score for the final: ");
float cp = input("Enter the score for the section grade: ");

float final_grade = assignment_weight * (ass1 + ass2 + ass3 + ass4)/4 + midterm_weight * mid_term + final_weight * final_exam + cp_weight * cp;
cout << "The final grade is: " << final_grade << endl;
return 0;
}
