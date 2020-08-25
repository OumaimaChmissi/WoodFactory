#include<string>
#include<ostream>
#include<fstream>
#include"employe.h"
using namespace std;


//----------------------- class ateliers de travail ----------------
class ateliers 
{
	 int atelier;
	 int nb_machine ;
    string * machine;
public:
	ateliers(){}
	~ateliers(){}
	friend istream& operator>>(istream& ,ateliers &);
	friend ostream& operator<<(ostream& ,ateliers &);
	friend istream& operator>>(istream& ,ateliers *);
	friend ostream& operator<<(ostream& ,ateliers *);
	void afficherfich(fstream &);
	void enregistrerfich (fstream&);
	static void creer (fstream &);
	
//-------------------- Class tableau d'atelier(tableau d'objet)---------------
 
};
class tableau_ateliers
{
	vector<ateliers*> at;
public:
	tableau_ateliers(){}
	~tableau_ateliers();
	friend istream& operator>>(istream& ,tableau_ateliers &);
	friend ostream& operator<<(ostream& ,tableau_ateliers &);
	friend istream& operator>>(istream& ,tableau_ateliers *);
	friend ostream& operator<<(ostream& ,tableau_ateliers *);
	void afficherfich(fstream &);
    void enregistrerfich (fstream&);
	static void creer (fstream &);
	tableau_ateliers::tableau_ateliers(const  tableau_ateliers  &);


};


