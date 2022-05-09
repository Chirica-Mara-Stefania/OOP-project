#include <vector>
#include<iostream>
#include<sstream>
#include <string>
#include "Artwork.h"

using namespace std;

//A. ARTWORK METHODS:

//Default Constructor
Artwork::Artwork()
{
	this->id = 0;
	this->price = 0;
	this->author = " ";
}

//Constructor
Artwork::Artwork(int i, string a, int p)
{
	this->id = i;
	this->price = p;
	this->author = a;
}

//Converting to string:
string Artwork::toString()
{
	stringstream s;
	s << to_string(id) + " " + this->author + " " + to_string(price);
	return s.str();
}


//B. PAINTINGS METHOD:

//Constructor:
Paintings::Paintings(int i, string a, float p, string t, string c)
{
	this->id = i;
	this->price = p;
	this->type = t;
	this->author = a;
	this->current = c;
}

//Convert to string:
string Paintings::toString()
{
	stringstream ss;
	ss << to_string(id) + " " + this->author + " " + to_string(price) + " " +this->type + " " + this->current;
	return ss.str();
}


//METHODS FOR SCULPTURES:

//Constructor:
Sculptures::Sculptures(int i, string a, float p, string m, float h)
{
	this->id = i;
	this->author = a;
	this->price = p;
	this->material = m;
	this->heigth = h;
}

string Sculptures::toString()
{
	stringstream ss;
	ss << to_string(id) + " " + this->author + " " + to_string(price) + " " + this->material + " " + to_string(heigth);
	return ss.str();
}

