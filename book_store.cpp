#include <iostream>
#include <string>
#include <math.h>

#define NEW_REQUIRED 0.90
#define USED_REQUIRED 0.65
#define NEW_OPTIONAL 0.40
#define OLD_OPTIONAL 0.20
#define PROFIT_MARGIN 0.20

using namespace std;

float get_input(string text)
{
	float output;
	x: cout << text;
	if (!(cin >> output))
	{
		cout << "That's not valid." << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		goto x;
	}
	return output;
}

int need_to_order(float prospective_enrollment, float num_on_hand, float required, float new_used)
{
	int books_needed;
	books_needed = (required == 1?(new_used == 1? NEW_REQUIRED : USED_REQUIRED):(new_used == 1? NEW_OPTIONAL: OLD_OPTIONAL))*prospective_enrollment - num_on_hand;
	return round(books_needed);
}

void print_stars()
{
	cout << "************************************************" << endl;
}



int main()
{
	float overall_cost=0.0;
	int sentinel;
	do
	{
		// Taking in all the inputs.
		float book_code = get_input("Please enter the book code: ");
		float copy_price = get_input("Single copy price: ");
		float num_on_hand = get_input("Number on hand: ");
		float prospective_enrollment = get_input("Prospective enrollment: ");
		float required = get_input("1 for reqd/0 for optional: ");
		float new_used = get_input("1 for new/0 for used: ");

		//display the information recieved.
		print_stars();
		cout << "Book: " << book_code << endl;
		cout << "Price: $" << copy_price << endl;
		cout << "Inventory: " << num_on_hand << endl;
		cout << "Enrollment: " << prospective_enrollment << endl << endl;
		cout << "This book is " << (required == 1?"required":"optional") << " and " << (new_used == 1?"new":"used") << "." << endl;
		print_stars();

		int need_ordering = need_to_order(prospective_enrollment, num_on_hand, required, new_used);
		float total_cost = need_ordering*copy_price;
		overall_cost += total_cost;

		cout << "Need to order: " << need_ordering << endl;
		cout << "Total cost: " << total_cost << endl;
		print_stars();
		cout << endl;
		cout << "Enter 1 to do another book, 0 to stop.";
		cin >> sentinel;
	} while (sentinel != 0);

	print_stars();
	cout << "Total for all orders: " << overall_cost << endl;
	cout << "Profit: " << overall_cost*PROFIT_MARGIN << endl;
	print_stars();
	return 0;
}