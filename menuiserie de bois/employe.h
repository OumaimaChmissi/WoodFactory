#pragma once
#include<string>
#include<iostream>
#include<vector>
#include <fstream>
using namespace std;
//-----------------date--------------------------------
struct  date
{
	int jour;
	int mois;
	int annee;
	date();
	void saisir_date();
	void afficher_date( );
	friend istream& operator>>(istream& in, date & d){ in>>d.jour ; in>>d.mois ; in>>d.annee ;return in ;}
	friend ostream& operator<<(ostream&out, date & d){ out<<d.jour ; out<<d.mois ; out<<d.annee ;return out;}
	friend istream& operator>>(istream& in, date * d){ in>>d->jour ; in>>d->mois ; in>>d->annee ; return in;}
	friend ostream& operator<<(ostream&out, date * d){ out<<d->jour ; out<<d->mois ; out<<d->annee ; return out ;}
};
//---------------------struct salaire-----------
struct salaire 
{
	float salaire_de_base ;
	int heures_supp;
	int nbjoursabsence; 
	float y;
	float primes ;
	float salaire_brut ;
	float cnss;
	float impot  ;
	float remboursement_de_pret_et_avance;
	float salaire_net ;
public:
	salaire(){}
	friend istream& operator>>(istream& in, salaire& );
	friend ostream& operator<<(ostream&out, salaire & );
	friend istream& operator>>(istream& in, salaire *);
	friend ostream& operator<<(ostream&out, salaire * ) ;
	 
};  
//----------------class employe-----------------
class employe
{
protected:
	int numero_employé;
	string nom;
	string prenom;
	int num_identite;
	struct date date_naiss;
	string sexe;
	int num_tel;
	string ville_actuelle;
	string statut_matrimoniale;
	int enfants_à_charge ;
	int congés;
	salaire s;
	int fonction;
public:
	employe(){}
	int get_num_identite(){ return num_identite;}
	friend istream& operator>>(istream&,employe&);
	friend ostream& operator<<(ostream&,employe&);
	friend istream& operator>>(istream&,employe*);
	friend ostream& operator<<(ostream&,employe*);
	~employe(); 
     void modifier();
	 
};
//-----------------------CLASS Employes---------------------
class Employes
{
	vector<employe*>tab;
public:
	Employes(){}
	Employes(const Employes&);
	friend istream& operator>>(istream&,Employes&);
	friend ostream& operator<<(ostream&,Employes &);
	friend istream& operator>>(istream&,Employes*);
	friend ostream& operator<<(ostream&,Employes *);
	void modifier_employe ();
	void rechercher() ;
	void supprimer ();
	~Employes();
	void afficherfich(fstream &);
	void enregistrerfich (fstream&,Employes &);
	static void creer (fstream &);

};











