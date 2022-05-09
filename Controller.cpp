#include"Controller.h"

void Controller::CaddPAINTINGS(int i, string a, float p, string t, string c)
{
	Paintings* art = new Paintings(i, a, p, t, c);
	repo.add_PAINTINGS(art, i, a, p, t, c);
}

void Controller::CaddSCULPTURES(int i, string a, float p, string m, float h)
{
	Sculptures* art = new Sculptures( i, a, p, m, h);
	repo.add_SCULPTURES(art, i, a, p, m, h);
}

void Controller::Cremove(string author)
{
	repo.remove(author);
}

void Controller::Cedit(int i, string a, int p)
{
	repo.edit(i, a, p);
}

void Controller::Cshowall()
{
	repo.showall();
}

