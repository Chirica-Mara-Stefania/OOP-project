#pragma once
#include "Artwork.h"
#include <string>
using namespace std;

class Sculptures : public Artwork {
public:
	inline void setHEIGTH(float h) { this->heigth = h; }
	inline float getHEIGTH() { return this->heigth; }

private:
	float heigth;
};