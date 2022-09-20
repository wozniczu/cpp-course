#pragma once
#include "Movie.h"


using namespace std;
class Movies
{
private:
	vector<Movie> movies;
public:
	void add_movie(string,string,int);
	void print();
	void watched(string);
	vector<Movie> get_movies();
};

