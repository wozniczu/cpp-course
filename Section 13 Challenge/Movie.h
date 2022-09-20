#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Movie
{
private:
	string name;
	string rating;
	int watched;
public:
	Movie(string = "", string = "", int = 0);
	string get_name();
	int get_watched();
	void set_watched();
	void display();
};

