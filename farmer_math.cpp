#include <iostream>
using namespace std;


int main () {

float horse = 10;
float pig = 3;
float rabbit = 0.5;

float total = 100;

//x + y + z = 100 = 10*x + 3*y + 0.5*z;

//total = x*horse + y*pig + z*rabbit;

for (int x = 1;x < total/horse; x++){
	for (int y = 1; y < total/pig; y++){
		for (int z = 1; z < total/rabbit; z++){
			if(horse*x + pig*y + rabbit*z == 100)
			cout << "Horses: " << x << "\nPigs: " << y << "\nRabbits: " << z << endl << endl; 

}
}
}
  

return(0);
}
