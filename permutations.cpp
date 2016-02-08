#include <iostream>
using namespace std;

int factorial (int number) {
if(number == 0 || number == 1)
return 1;
else return number*factorial(number-1);
}

int permutation (int n, int r){
return factorial(n)/factorial(n-r);
}

int combination (int n, int r){
return permutation(n,r)/factorial(r);
}

int main () {
int n, r;
int choice;
x:  cout << "Enter the integers ('n' and 'r' in that order): ";
if(!(cin >> n >> r)){
	cout << "Please enter only integers.\n";
	cin.clear();
	cin.ignore(100000, '\n');
	goto x;
	} 
else {
y:    	cout << "Please choose an option:\n"<< "1. Permutation - Press 1\n2. Combination - Press 2\nEnter choice here: " << endl;
   	if(!(cin >> choice)){
	cout << "Please enter only integers.\n" << endl;
	cin.clear();
	cin.ignore(100000, '\n');
	goto y;
	}
	
	if(choice !=1 && choice !=2){
	cout << "Not a valid choice. Try again.\n";
	cin.clear();
	cin.ignore(100000, '\n');
	goto y;
	}
	
	else{
	switch(choice){
	case 1:
	cout << "The permutation " << n << "P" << r << " is: " << permutation(n,r) << endl;
	break;
	case 2:
	cout << "The combination " << n << "C" << r << " is: " << combination(n,r) << endl;
	break;
	}

}
  }
  return(0);
}
