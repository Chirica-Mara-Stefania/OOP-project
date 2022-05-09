#include <vector>
#include <string>
#include<iostream>

class ArtworksRepo; //The class from the repo
using namespace std;

//Base artworks class:
class Artwork
{
protected:
	//atributes that are inherited by the classes paintings and sculptures
	int id;
	string author;
	float price;
public:
	//Constructors:
	Artwork();
	Artwork(int i, std::string a, int p);

	//Prototype methods:
	inline void setID(int i) { this->id = i; }
	inline int getID() { return this->id; }

	inline void setAUTHOR(string a) { this->author = a; }
	inline string getAUTHOR() { return this->author; }

	inline void setPRICE(float p) { this->price = p; }
	inline float getPRICE() { return this->price; }

	//Virtual function to convert results to string 
	virtual string toString();
};

//1st inheriting class - type of artwork: painting
class Paintings : public Artwork {
protected:
	string type;
	string current;

public:
	//Constructor:
	Paintings(int i, string a, float p, string t, string c);

	//Prototype methods:
	inline void setTYPE(string t) { this->type = t; }
	inline string getTYPE() { return this->type; }

	inline void setCURRENT(string c) { this->current = c; }
	inline string getCURRENT() { return this->current; }

	//Virtual function to convert results to string 
	virtual string toString();
};

class Sculptures : public Artwork {
protected:
	string material;
	float heigth;

public:
	//Constructor:
	Sculptures(int i, string a, float p, string m, float h);

	//Virtual function to convert results to string 
	virtual string toString();
};