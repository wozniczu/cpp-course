#include <iostream>
#include <string>
using namespace std;

int main() {

	string tekst{};
	cin >> tekst;

	for (size_t i{ 0 }; i < tekst.length(); i++)
	{
		for (size_t j{ 0 }; j < tekst.length() - 1 - i; j++)
			cout << " ";
		for (int k{ 0 }; k < i; k++)
		{
			if (k < tekst.length())
				cout << tekst.at(k);
		}
		cout << tekst.at(i);
		if (i != 0)
			for (size_t l{ i }; l > 0; l--)
			{
				if (l < tekst.length())
					cout << tekst.at(l - 1);
			}
		for (size_t j{ 0 }; j < tekst.length() - 1 - i; j++)
			cout << " ";
		cout << endl;
	}

	return 0;
}