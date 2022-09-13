#include <iostream>
#include <vector>
using namespace std;

int main() {

	bool done{ false };
	char choice{};
	vector <int> data{};
	int largest{};
	int smallest{};
	int number{};
	int sum{};
	while (!done)
	{
		cout << "\nP - Print numbers" << endl;
		cout << "A - Add a number" << endl;
		cout << "M - Display mean of the numbers" << endl;
		cout << "S - Display the smallest number" << endl;
		cout << "L - Display the largest number" << endl;
		cout << "Q - Quit" << endl;
		cout << "\nEnter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 'P':
		case 'p':
		{
			if (data.size() != 0)
			{
				cout << "[ ";
				for (auto elem : data)
					cout << elem << " ";
				cout << "]" << endl;
			}
			else
				cout << "[] - the list is empty" << endl;
			break;
		}
		case 'A':
		case 'a':
		{
			cout << "Enter a number you want to add: ";
			cin >> number;
			data.push_back(number);
			cout << number << " added";
			break;
		}
		case 'M':
		case 'm':
		{
			if (data.size() != 0)
			{
				for (auto elem : data)
					sum += elem;
				cout << "The mean is: " << static_cast<double>(sum) / data.size() << endl;
			}
			else
				cout << "Unable to calculate the mean - no data" << endl;
			break;
		}
		case 'S':
		case 's':
		{
			if (data.size() != 0)
			{
				smallest = data.at(0);
				for (auto elem : data)
				{
					if (elem < smallest)
						smallest = elem;
				}
				cout << "The smalest number is " << smallest << endl;
			}
			else
				cout << "Unable to determine the smallest number - list is empty" << endl;
			break;
		}
		case 'L':
		case 'l':
		{
			if (data.size() != 0)
			{
				for (auto elem : data)
					if (elem > largest)
						largest = elem;
				cout << "The largest number is " << largest << endl;
			}
			else
				cout << "Unable to determine the largest number - list is empty" << endl;
			break;
		}
		case 'Q':
		case 'q':
		{
			cout << "Goodbye" << endl;
			done = true;
			break;
		}
		default:
		{
			cout << "Unknow selection, please try again";
			break;
		}
		}
	}
	return 0;
}