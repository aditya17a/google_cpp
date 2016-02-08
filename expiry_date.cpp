#include <iostream>
#include <string>

using namespace std;

int month(string& code)
{
char month_char = code[0];
int month_int = int(month_char);
return month_int - 64;
}

int date(string& code)
{
char first_char = code[1];
char second_char = code[2];
int first_int = int(first_char);
int second_int = int(second_char);
return 10*(first_int-81) + second_int-81;
}

int year(string& code)
{
char year_char = code[3];
int year_int = int(year_char);
return year_int - 64 + 1995;
}

int main()
{
string code;
cout << "Please input the code: " << endl;
cin >> code;
int mon = month (code);
int dt = date(code);
int yr = year(code);

cout << "Expiry date: " << mon << "/" << dt << "/" << yr << endl;
return 0;
}
