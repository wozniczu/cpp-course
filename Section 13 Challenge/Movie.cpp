#include "Movie.h"

Movie::Movie(string a, string b, int c) : name{a}, rating{b}, watched{c}
{

}

string Movie::get_name()
{
	return name;
}

int Movie::get_watched()
{
	return watched;
}

void Movie::set_watched()
{
	watched = watched + 1;
}

void Movie::display()
{
	cout << "| Title: " << name << " | Rating: " << rating << "| Watched: " << watched << " |" << endl;
}