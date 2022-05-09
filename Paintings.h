#pragma once
#include "Artwork.h"
#include <string>
using namespace std;

class Paintings : public Artwork {
public:
	inline void setTYPE(string t) { this->type = t; }
	inline string getTYPE() { return this->type; }

	inline void setYEAR(unsigned int y) { this->year = y; }
	inline unsigned int getYEAR() { return this->year; }

private:
	string type;
	unsigned int year;
};