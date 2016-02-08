#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
srand(time(NULL));

int secret = rand()%100 + 1;
int guess;

cout << "The secret number is:" << secret << endl;

do{
x:	cout << "Make a guess about the secret number (1-100). (-1 to quit): ";

	if (!(cin >> guess)) {
      	cout << "You entered a non-numeric." << endl;
      	cin.clear();
      	cin.ignore(10000,'\n');
	goto x;
    	}

	if (guess < -1 || guess > 100 || guess == 0) {
      	cout << "You entered an out of range number." << endl;
      	cin.clear();
      	cin.ignore(10000,'\n');
	goto x;
    	}

	if(guess == -1){
	cout << "Exiting game..." << endl;
	break;
	}

	if(guess == secret){
	cout << "You got it! Congratulations!!" << endl;
	break;
	}

	if(guess < secret)
	cout << "That's less. Go higher" << endl;

	if(guess > secret)
	cout << "That's high. Go lower" << endl;

}while (1);
cout << "All done." << endl;

return 0;
}
