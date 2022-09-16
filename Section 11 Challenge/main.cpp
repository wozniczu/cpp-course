#include <iostream>
#include <vector>
using namespace std;

void print_menu();
char get_choice();
void choice_p(vector <int>& vec);
void choice_a(vector <int>& vec);
void choice_m(vector <int>& vec, int& sum);
void choice_s(vector <int>& vec, int& smallest);
void choice_l(vector <int>& vec, int& largest);
void choice_q(bool& done);
void choice_default();

int main() {

	bool done{ false };
	char choice{};
	vector <int> data{};
	int largest{};
	int smallest{};
	int sum{};
	while (!done)
	{
		print_menu();
		switch (get_choice())
		{
		case 'P':
		case 'p':
		{
			choice_p(data);
			break;
		}
		case 'A':
		case 'a':
		{
			choice_a(data);
			break;
		}
		case 'M':
		case 'm':
		{
			choice_m(data, sum);
			break;
		}
		case 'S':
		case 's':
		{
			choice_s(data, smallest);
			break;
		}
		case 'L':
		case 'l':
		{
			choice_l(data, largest);
			break;
		}
		case 'Q':
		case 'q':
		{
			choice_q(done);
			break;
		}
		default:
		{
			choice_default();
			break;
		}
		}
	}
	return 0;
}

void print_menu()
{
	cout << "\nP - Print numbers" << endl;
	cout << "A - Add a number" << endl;
	cout << "M - Display mean of the numbers" << endl;
	cout << "S - Display the smallest number" << endl;
	cout << "L - Display the largest number" << endl;
	cout << "Q - Quit" << endl;
	cout << "\nEnter your choice: ";
}

char get_choice()
{
	char choice{};
	cin >> choice;
	return choice;
}

void choice_p(vector <int>& vec)
{
	if (vec.size() != 0)
	{
		cout << "[ ";
		for (auto elem : vec)
			cout << elem << " ";
		cout << "]" << endl;
	}
	else
		cout << "[] - the list is empty" << endl;
}

void choice_a(vector <int>& vec)
{
	cout << "Enter a number you want to add: ";
	int number{};
	cin >> number;
	vec.push_back(number);
	cout << number << " added";
}

void choice_m(vector <int>& vec, int& sum)
{
	if (vec.size() != 0)
	{
		for (auto elem : vec)
			sum += elem;
		cout << "The mean is: " << static_cast<double>(sum) / vec.size() << endl;
	}
	else
		cout << "Unable to calculate the mean - no data" << endl;
}

void choice_s(vector <int>& vec, int& smallest)
{
	if (vec.size() != 0)
	{
		smallest = vec.at(0);
		for (auto elem : vec)
		{
			if (elem < smallest)
				smallest = elem;
		}
		cout << "The smalest number is " << smallest << endl;
	}
	else
		cout << "Unable to determine the smallest number - list is empty" << endl;
}

void choice_l(vector <int>& vec, int& largest)
{
	if (vec.size() != 0)
	{
		for (auto elem : vec)
			if (elem > largest)
				largest = elem;
		cout << "The largest number is " << largest << endl;
	}
	else
		cout << "Unable to determine the largest number - list is empty" << endl;
}

void choice_q(bool& done)
{
	cout << "Goodbye" << endl;
	done = true;
}

void choice_default()
{
	cout << "Unknow selection, please try again";
}
