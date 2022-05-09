#pragma once
#include"Repo.h"
using namespace std;

class Controller {
public:
	void CaddPAINTINGS(int i, string a, float p, string t, string c);
	void CaddSCULPTURES(int i, string a, float p, string m, float h);
	void Cremove(string author);
	void Cedit(int i, string a, int p);
	void Cshowall();
	///undo redo next


protected:
	ArtworksRepo repo;

};
