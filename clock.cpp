#include <iostream>

using namespace std;

int main()
{
int total_seconds;
x: cout << "Number of seconds: ";

if(!(cin >> total_seconds)){
cout << "Please enter only integers.\n";
cin.clear();
cin.ignore(1000, '\n');
goto x;
}

int hours = total_seconds/3600;
int minutes = (total_seconds%3600)/60;
int seconds = (total_seconds%3600)%60;

cout << "Hours: " << hours << endl;
cout << "Minutes: " << minutes << endl;
cout << "Seconds: " << seconds << endl;

return 0;

}
