#pragma once
#include "Artwork.h"
#include <vector>
#include <iostream>
using namespace std;

class ArtworksRepo {
protected:
	vector<Artwork*> aw;

public:
	void add_PAINTINGS(Paintings* pt, int i, string a, float p, string t, string c);
	void add_SCULPTURES(Sculptures* sp, int i, string a, float p, string m, float h);
	void remove(string author);
	void edit(int i, string a, int p);
	
	bool isempty();
	
	float search(string author);
	
	void showall();
};