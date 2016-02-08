#include <iostream>
#include <math.h>

using namespace std;

int main()
{
int number =0;
int i;
for (i=1;i<5000;i=i+2){
	number = number + i;
	//cout << i << endl;
	//cout << number << endl;
	for (int j = 1; j<number/2; j++){
		if(j*(j+1)/2 == number){
			cout << i << endl;
			cout << "Found a number: " << number << " Square of: " << sqrt(number) << " Series up to: " << j << endl;
			}
		}
	}


return 0;
}
