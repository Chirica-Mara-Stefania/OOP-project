#include "UI.h"
#include "Controller.h"
#include <iostream>
#include <string.h>
#include <assert.h>

using namespace std;

void UI::Menu()
{
	cout << "1 -> adding an artwork" << endl;
	cout << "2 -> remove an artwork" << endl;
	cout << "3 -> edit an artwork"<<endl;
	cout << "4 -> show all artworks from the gallery"<<endl;
	cout << "0 -> quit the program"<<endl;
}

void UI::runprog() {
	unsigned int opt = -1;
	unsigned int n = 0; //number of elements in the repo

	while (opt != 0)
	{
		if (opt == 1)
		{
			int id;
			float price;
			string author;

			char typeopt;
			cout << "Choose the type of the artwork: "<<endl;
			cout << "5 -> painting";
			cout << "6 -> sculpture";

			cin>>typeopt;

			if (typeopt == 5)
			{
					string type;
					string current;

					cout << "Type can be OIL or PENCIL!";
					cin >> type;

					if (type != "OIL" && type != "PENCIL")
					{
						cout << "Type of the painting is not valid!";
					}
					else {
						cout << "Current can be MOD - from moder or CON - from contemporary!";

						cin>>current;

						if (current != "CON" && current != "MOD")
						{
							cout << "Current of the painting is not valid!";
						}

						else {
							//repo.CaddPAINTINGS(int i, string a, float p, string t, string c);
							n++;
						}
					}
			}

			else {
				if (typeopt == 6)
				{
					string material;
					float heigth;

					cout << "Type can be Wood(W) or Stone(S)!";
					cin >> material;

					if (material != "W" && material != "S")
					{
						cout << "Material of the sculpture is not valid!";
					}
					else {

						cout << "Heigth must be greater than 0!";
						
						try {
							assert(heigth >= 1);
							//repo.CaddSCULPTURE(int i, string a, float p, string m, float h);
							n++;
						}
						catch (exception&)
						{
							cout << "Heigth must be greater than 0!";
						}
					}
				}
			}
		}
	
		else {
			if (opt == 2)
			{
				int ok = 0;
				string a;

				cout << "Remove by author name: ";
				cin >> a;
				/*
				for(int i =0; i<= n; i++)
				{
					if (repo[i].getAUTHOR()==a);
						{
						ok = 1;
						repo.remove(a);
						}
				}

				if (ok == 0) cout<<"Author hasn t been found!";
				else{
				repo.Cremove();
				}
				*/
			}

			else {
				if (opt == 3)
				{
					string a;

					cout << "Edit by author name: ";
					cin >> a;

				/*
				for(int i =0; i<= n; i++)
				{
					if (repo[i].getAUTHOR()==a);
						{
						ok = 1;
						repo.remove(a);
						}
				}
				if (ok == 0) cout<<"Author hasn t been found!";

				else{
					int id;
					float price;

					repo.Cedit(i, a , p);
				}
				*/

				}
				else {
					if (opt == 4)
					{
						//repo.Showall();
					}
					else {
						
						cout << "OPTION IS INVALID!";
						opt = 0; //quits program
					}
				}
			}
		}
	}
}
