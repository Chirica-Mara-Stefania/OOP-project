#pragma once
#include"Repo.h"
using namespace std;

class Controller {
public:
	void CAddGPU(string np, string nc, float pr, int t, int id, int year, float freq, float memor);
	void CAddCPU(string np, string nc, float pr, int t, int id, int year, float freqv, float cores);
	void CRemove(string name);
	void CEdit(string np, string nc, float pr, int t, int y, int id);
	void CShowAll();
	///undo redo next


protected:
	ArtworksRepo myrepo;

};
