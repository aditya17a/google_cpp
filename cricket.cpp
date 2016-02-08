#include <iostream>
using namespace std;

int main () {
int chirps;
x:cout << "Number of chirps: ";

if(!(cin >> chirps)){
cout << "Please enter an integer.\n";
cin.clear();
cin.ignore(10000, '\n');
goto x;
}

float temp = (chirps+40)/4;
cout << "Temperature: " << temp << " degrees" << endl;

return 0;
}
