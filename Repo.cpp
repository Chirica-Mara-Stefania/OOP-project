#include "Repo.h"
#include <vector>

bool ArtworksRepo::isempty()
{
	if (aw.size() == 0)
		return true;
	else
		return false;
}
float ArtworksRepo::search(string author)
{
	int i;
	for (i = 0; i <= aw.size(); i++)
	{
		if (aw[i]->getAUTHOR() == author)
		{
			return i;
		}
	}
	return -1;
}


void ArtworksRepo::add_PAINTINGS(Paintings* pt, int i, string a, float p, string t, string c)
{
	this->aw.push_back(pt);
}

void ArtworksRepo::add_SCULPTURES(Sculptures *sp, int i, string a, float p, string m, float h)
{

	this->aw.push_back(sp);
}

void ArtworksRepo::remove(string author)
{
	if (search(author) != -1)
	{
		delete aw[search(author)];

	}
	else
		throw ("the author inserted isnt found so it cant be removed");

}

void ArtworksRepo::edit(int i, string a, int p)
{
	for (int i = 0; i < aw.size(); i++)
	{
		if (this->aw[i]->getID() == i)
		{
			aw[i]->setID(i);
			aw[i]->setAUTHOR(a);
			aw[i]->setPRICE(p);
		}
	}
}

void ArtworksRepo::showall()
{
	int i;
	for (i = 0; i < this->aw.size(); i++)
	{
		cout << aw[i]->toString() << '\n';
	}

}
