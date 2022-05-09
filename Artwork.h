#pragma once
#include <string>
using namespace std;

class Artwork
{
public:
	//atributes that are inherited by paintings and sculptures
	int id;
	string author;
	float price;

	//methodes:
	inline void setID(int i) { this->id = i; }
	inline int getID() { return this->id; }

	inline void setAUTHOR(int a) { this->author = a; }
	inline string getAUTHOR() { return this->author; }

	inline void setPRICE(int p) { this->price = p; }
	inline float getPRICE() { return this->price; }
};