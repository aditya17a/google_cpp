#include <iostream>

using namespace std;

int remainder_by_11(int number)
{
return number%11;
}

int create_3_digit(int a, int b, int c)
{
return 100*a + 10*b + c;
}

int special_sum(int a, int b)
{
int sum = a+b;
if (sum == 9 || sum%2 == 0)
	return sum/2;
else{
	if(sum+11 < 20) return (sum+11)/2;
	else return (sum-11)/2;
}
	//(sum+11 < 20) ? (return sum+11) : (return sum-11)
}

int main()
{
int number;
x: cout << "Please enter a 3-digit number: ";
if (!(cin >> number)){
	cout << "Please only enter numbers.\n";
	cin.clear();
	cin.ignore(10000, '\n');
	goto x;
	}

int C = number%10;
int B = (number/10)%10;
int A = number/100;

int ABC = create_3_digit(A,B,C);
int BCA = create_3_digit(B,C,A);
int CAB = create_3_digit(C,A,B);

int X = remainder_by_11(ABC);
int Y = remainder_by_11(BCA);
int Z = remainder_by_11(CAB);

int a = special_sum(X,Y);
int b = special_sum(Y,Z);
int c = special_sum(Z,X);

int final_ans = create_3_digit(a,b,c);

cout << "Final output: " << final_ans << endl;

return 0;
}
