#pragma once
#include<string>
#include<ostream>
#include<fstream>
#include"employe.h"
using namespace std;
//------------------------CLASS  CLIENT-------------
struct commande
{
	int choix_amenagement;
	string amenagemet;
	float longeur;
	float largeur;
	float epaisseur;
	string couleur;
	string type_bois;
public:
	commande(){}
	~commande(){}
	friend istream& operator>>(istream&,commande&);
	friend ostream& operator<<(ostream&,commande &);
	friend istream& operator>>(istream&,commande*);
	friend ostream& operator<<(ostream&,commande *);
};

class commandes_clients
{
protected:
    string nom_cl;
	string prenon_cl;
	int num_id_cl;
	string adresse;
	int numTel_cl;
	int nombre_sur_mesure;
	commande cm[500];
	float prix;
	date date_debut_commande;
	date date_livration;
public:
	commandes_clients(){}
	~commandes_clients(){}
	int get_num_id_cl(){ return num_id_cl;}
	friend istream& operator>>(istream&,commandes_clients&);
	friend ostream& operator<<(ostream&,commandes_clients&);
	friend istream& operator>>(istream&,commandes_clients*);
	friend ostream& operator<<(ostream&,commandes_clients*);
	void modifiercl();
	
};
//-----------------ClassTableau de clients(tableau d'objet)---------------
class tableau_clients
{
	vector<commandes_clients*> t;
public:
	tableau_clients(){}
	~tableau_clients();
	friend istream& operator>>(istream& , tableau_clients & );
	friend ostream& operator<<(ostream& , tableau_clients & );
	friend istream& operator>>(istream& , tableau_clients * );
	friend ostream& operator<<(ostream& , tableau_clients * );
	void rechercher() ;
	void supprimer ();
	void modifier();
	void ajouter();
    tableau_clients::tableau_clients(const  tableau_clients  &);
	void ajoutecommande(int);
	void afficherfich(fstream &);
	void enregistrerfich (fstream&);
	static void creer (fstream &);
};

