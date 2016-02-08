#include <iostream>

using namespace std;

void accelerate(float &speed, float amount)
{
speed = speed + amount;
}

int main()
{
float speed = 100;
float amount = 20;
accelerate(speed, amount);
cout << speed << endl;
return 0;
}
