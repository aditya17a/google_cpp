#include <iostream>
using namespace std;
int shoe_cost = 225;

void GetInput(int& WeeklySales){
x: cout <<"Please enter the weekly sales (number of pairs of shoes sold): " << endl;
if(!(cin >> WeeklySales)){
	cout << "Please enter only integers.\n";
	cin.clear();
	cin.ignore(100000, '\n');
	goto x;
	} 
}

void CalcMethod1(int WeeklySales){
float weekly_salary = 600;
cout << "Your salaries using method 1:\n";
cout << "Weekly: " << "$" << weekly_salary << endl;
cout << "Monthly: " << "$" << weekly_salary*4 << endl;
cout << "Yearly: " << "$" << weekly_salary*52 << endl;
}

void CalcMethod2(int WeeklySales){
x: cout <<"Please enter the number of hours per week for method 2: " << endl;
int hours;
if(!(cin >> hours)){
	cout << "Please enter only integers.\n";
	cin.clear();
	cin.ignore(100000, '\n');
	goto x;
	} 
float weekly_salary = 7*hours + 0.1*WeeklySales*shoe_cost;
cout << "Your salaries using method 2:\n";
cout << "Weekly: " << "$" << weekly_salary << endl;
cout << "Monthly: " << "$" << weekly_salary*4 << endl;
cout << "Yearly: " << "$" << weekly_salary*52 << endl;
}

void CalcMethod3(int WeeklySales){
float weekly_salary = 20*WeeklySales + 0.2*WeeklySales*shoe_cost;
cout << "Your salaries using method 3:\n";
cout << "Weekly: " << "$" << weekly_salary << endl;
cout << "Monthly: " << "$" << weekly_salary*4 << endl;
cout << "Yearly: " << "$" << weekly_salary*52 << endl;
}


int main() {
int WeeklySales;
GetInput(WeeklySales);
cout << WeeklySales;
CalcMethod1(WeeklySales);
cout << endl << endl;
CalcMethod2(WeeklySales);
cout << endl << endl;
CalcMethod3(WeeklySales); 
cout << endl << endl;
return 0;
}

