#include <iostream>
#include <string>
using namespace std;

int main() {

	string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	string key{ "XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr" };
	string message{};
	string encrypted_message{};
	string decrypted_message{};
	size_t position{};
	char character{};

	cout << "Enter your secret message: ";
	getline(cin, message);
	cout << message << endl;
	cout << message.length();
	cout << "\nEncrypting message..." << endl;
	for (auto elem : message)
	{
		position = alphabet.find(elem);
		if (isalpha(elem))
			encrypted_message += key[position];
		else
			encrypted_message += elem;
	}
	cout << "\nEncrypted message: " << encrypted_message << endl;
	cout << "\nDecrypting message..." << endl;
	for (auto elem : encrypted_message)
	{
		position = key.find(elem);
		if (isalpha(elem))
			decrypted_message += alphabet[position];
		else
			decrypted_message += elem;
	}
	cout << "\nDecrypted message: " << decrypted_message << endl;


	return 0;
}