#include <iostream>

using namespace std;

int reverse(int number)
{
int ones_digit = number%10;
int tens_digit = (number/10)%10;
int hundreds_digit = number/100;

return 100*ones_digit + 10*tens_digit + hundreds_digit;
}

int subtract(int a, int b)
{
return a-b;
}

int main()
{
int number;
cout << "input number: ";
cin >> number;

int reversed = reverse(number);
cout << "reverse it: " << reversed << endl;

int subtracted = subtract(number, reversed);
cout << "subtract: " << number << " - " << reversed << " = " << subtracted << endl;

int reverse_subtracted = reverse(subtracted);
cout << "reverse it: " << reverse_subtracted << endl;

int added = reverse_subtracted + subtracted;

cout << "add: " << reverse_subtracted << " + " << subtracted << " = " << added << endl;

return 0;
}
