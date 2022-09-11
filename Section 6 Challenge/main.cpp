#include <iostream>
using namespace std;

int main(){
	int small_room_charge {25};
	int big_room_charge {35};
	float tax_rate{ 0.06 };
	int valid_date{ 30 };

	cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
	cout << "\nHow many small rooms would you like cleaned? ";
	int small_room_number{0};
	cin >> small_room_number;
	cout << "How many small rooms would you like cleaned? ";
	int big_room_number{0};
	cin >> big_room_number;
	double cost{ small_room_number * small_room_charge + big_room_number * big_room_charge };
	double tax_cost{ cost * tax_rate };
	double total_cost{ cost + tax_cost };

	cout << "\nEstimate for carpet cleaning service" << endl;
	cout << "Number of small rooms: " << small_room_number << endl;
	cout << "Number of big rooms: " << big_room_number << endl;
	cout << "Price per small room: $" << small_room_charge << endl;
	cout << "Price per big rooms: $" << big_room_charge << endl;
	cout << "Cost: $" << cost << endl;
	cout << "Tax: $" << tax_cost << endl;
	cout << "=================" << endl;
	cout << "Total estimate: $" << total_cost << endl;
	cout << "Estimate is vaild for " << valid_date << " days" << endl;
	return 0;
}