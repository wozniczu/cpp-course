#include <iostream>
#include "Movie.h"
#include "Movies.h"

using namespace std;


int main() {
    Movies collection;
    int choice{};
    string name{};
    string rate{};
    bool done{ true };
    while (done)
    {
        cout << "1 - add movie" << endl;
        cout << "2 - add watched" << endl;
        cout << "3 - print list" << endl;
        cout << "4 - quit" << endl;
        cin >> choice;
        switch (choice)
        {
            case 1:
            {
                cout << "Enter name: " << endl;
                cin >> name;
                cout << "Enter rate: " << endl;
                cin >> rate;
                collection.add_movie(name, rate, 1);
                break;
            }
            case 2:
            {
                cout << "Enter name: " << endl;
                cin >> name;
                collection.watched(name);
                break;
            }
            case 3:
            {
                collection.print();
                break;
            }
            case 4:
            {
                done = false;
                break;
            }
            default:
            {
                cout << "Error" << endl;
                break;
            }
        }

    }
    return 0;
}
