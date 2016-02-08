#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define PI 3.14159265

using namespace std;

void startup()
{
cout << "Welcome to Artillery." << endl;
cout << "You are in the middle of a war and being charged by thousands of enemies." << endl;
cout << "You have one cannon, which you can shoot at any angle." << endl;
cout << "You only have 10 cannonballs for this target.." << endl;
cout << "Let's begin..." << endl << endl;
}

float degrees_to_radians(float angle_degrees)
{
return angle_degrees*PI/180;
}

float fire_distance_calculate(float angle)
{
float Velocity = 200;
float Gravity = 32.2;
float in_angle = degrees_to_radians(angle);
//cout << "Angle in degrees: " << in_angle << endl;
float time_in_air = (2.0 * Velocity * sin(in_angle)) / Gravity;
float distance = round((Velocity * cos(in_angle)) * time_in_air);
//cout << "Hit distance: " << distance << endl;
return distance;
}

int fire(int killed)
{
srand(time(NULL));
float angle;
float true_distance = rand()%1000 + 100;
cout << "The enemy is " << true_distance << " feet away!!!" << endl;

int fire_count = 0;
float fire_distance;
float difference;

do{
	x: cout << "What angle?: ";
	if(!(cin >> angle)){
		cout << "Please enter a valid value.\n";
		cin.clear();
		cin.ignore(10000, '\n');
		goto x;
		}
	fire_count++;
	fire_distance = fire_distance_calculate(angle);
	//cout << "Fire disrance: " << fire_distance << endl;
	difference = true_distance - fire_distance;
	//cout << "difference: " << difference << endl;
	if(difference == 0){
		cout << "You hit him!!!" << endl;
		cout << "It took you " << fire_count << " shots." << endl;
		killed++;
		break;		
		}

	else if(difference > 0)
	cout << "You undershot by " << difference << ". (You have " << 10-fire_count << " cannonballs remaining)." << endl;
	
	else
	//cout << "You overshot by " << abs(difference) << endl;
	cout << "You overshot by " << abs(difference) << ". (You have " << 10-fire_count << " cannonballs remaining)." << endl;

	if(fire_count == 10){
	cout << "Sorry, you ran out of cannonballs." << endl;
	break;	
	}

}while(difference != 0);

return killed;
}


int main()
{
startup();
int killed = 0;
char response;

do{
killed = fire(killed);
cout << "I see another one, care to shoot again? (Y/N) " << endl;
cin >> response;
}while(response != 'n');

cout << endl << "You killed " << killed << " of the enemy." << endl;

return 0;
}
