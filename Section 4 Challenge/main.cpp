#include <iostream>
using namespace std;

int main{
	int fav_number{0};
	cout << "Podaj swoja ulubiona liczbe od 0 do 100: ";
	cin >> fav_number;
	cout << "To tez moja ulubiona liczba!" << endl;
	cout << "Niestety, " << fav_number << " to nie moja ulubiona liczba." << endl;
	return 0;
}