#pragma once
#include<string>
#include<ostream>
#include<fstream>
#include"employe.h"
using namespace std;
//-------------------class  fournisseur---------------
struct matierePremiere
{
	string nom_de_mat_pre;
	int nb;
	float prix ;
public:
	matierePremiere() {}
	~matierePremiere(){}
	friend istream& operator>>(istream&,matierePremiere&);
	friend ostream& operator<<(ostream&,matierePremiere&);
	friend istream& operator>>(istream&,matierePremiere*);
	friend ostream& operator<<(ostream&,matierePremiere*);
};
class fournisseur
{

	string nom_entreprise;
	int num_entreprise;
	int nbr_enmatiere_premiere;
	matierePremiere mp[100];
	date date_livration_matiere;
	
public:
	fournisseur(){}
	~fournisseur(){}
	int get_num_entreprise(){ return num_entreprise;}
	friend istream& operator>>(istream&,fournisseur&);
	friend ostream& operator<<(ostream&,fournisseur&);
	friend istream& operator>>(istream&,fournisseur*);
	friend ostream& operator<<(ostream&,fournisseur*);
	void modifierf();
	
};


class tableau_fournisseurs
{
	vector<fournisseur*> fa ;
public:
	tableau_fournisseurs(){}
	~tableau_fournisseurs();
    friend istream& operator>>(istream&,tableau_fournisseurs&);
	friend ostream& operator<<(ostream&,tableau_fournisseurs&);
	friend istream& operator>>(istream&,tableau_fournisseurs*);
	friend ostream& operator<<(ostream&,tableau_fournisseurs*);
	void rechercher() ;
	void supprimer ();
	void modifier();
    tableau_fournisseurs::tableau_fournisseurs(const  tableau_fournisseurs  &);
	void afficherfich(fstream &);
	void enregistrerfich (fstream&);
	static void creer (fstream &);

};

