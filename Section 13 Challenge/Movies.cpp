#include "Movies.h"
#include <iostream>
using namespace std;

void Movies::add_movie(string a, string b, int c)
{
	bool is_found{ false };
	for (auto elem : movies)
		if (elem.get_name() == a)
		{
			cout << "Error, " << a << " already exist" << endl;
			is_found = true;
			break;
		}
	if(is_found == false)
	{
		movies.push_back(Movie(a, b, c));
		cout << a << " added" << endl;
	}
	
}

void Movies::print()
{
	if (movies.size() != 0)
	{
		cout << "======================================================" << endl;
		for (auto elem : movies)
		{
			elem.display();
		}
		cout << "======================================================" << endl;
	}
	else cout << "List is empty" << endl;
}

void Movies::watched(string a)
{
	bool is_found{false};
	for (auto& elem : movies)
		if (elem.get_name() == a)
		{
			elem.set_watched();
			is_found = true;
			break;
		}
	if (is_found == false)
		cout << "error, " << a << " not found" << endl;
}

vector<Movie> Movies::get_movies()
{
	return movies;
}
