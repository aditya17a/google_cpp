#include <iostream>
using namespace std;

int gcd(int,int);

int main() {
int a,b;
x: cout << "Please enter the 2 numbers you want to calculate the GCD for: ";
if(!(cin >> a >> b)){
	cout << "Please enter only integers.\n";
	cin.clear();
	cin.ignore(100000, '\n');
	goto x;
	}  
else
//cout << "First number: " << a << endl;
//cout << "Second number: " << b << endl;
cout << "The GCD of " << a << " and " << b << " is: " << gcd(a,b) << endl;
return 0;
}

int gcd(int a, int b){
//if( a<0 || b<0)
//return -1;

if(a == 0)
return b;

if(b == 0)
return a;

int temp;

do{
//gcd(a,b) = gcd(b,a%b)
temp = a%b;
if(temp == 0)
break;
a=b;
b=temp;
}while(1);
return b;
}
