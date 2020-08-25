#include "employe.h"
#include<iostream>
using namespace std;
//----------date-----------
void date::saisir_date()
{
	//verification du date de naissance
	cin>>jour;
	cin>>mois;
	cin>>annee;
}
date::date() {}
void date::afficher_date()
{
	cout<<jour<<"/"<<mois<<"/"<<annee<<endl;
}
//-------controle de saisie date-------
int bis (int a) 
 { 
	 if (a%400==0)
		 return 1 ;
	 return 0;
 }
int verif_date(date d)
 {
	 if((d.jour>31)||(d.mois> 12) || (d.annee<1900) || (d.annee>2018))
		 return 0 ;
	 else if(( (d.mois==4) || (d.mois==6)||(d.mois==9)||(d.mois==11)) && (d.jour>30) )	
		
			return 0;	
		
		else if ((d.mois==2)&&(bis(d.annee))  && (d.jour>29) )
		
			return 0;
		
		else if ((d.mois==2)&&(! bis(d.annee))  && (d.jour>28) )
		
			return  0 ;
		
		return 1;
}
//-----------------------salaire-------------------
 istream& operator>>(istream& in, salaire & sa)
{
	sa.impot=5000;
	sa.cnss=25000;
	int x;  
	cout<<" Entrer le nombre des heures travailles dans ce mois "<<endl;
	in>>x;
	cout<<"Entrer le prix d'heure  du travail en DT "<<endl;
	in>>sa.y;
	sa.salaire_de_base=float(x* sa.y);
	cout<<" Entrer les heures supplementaires"<<endl;
	in>>sa.heures_supp;
	cout<<"Entrer les primes donnees "<<endl;
	in>>sa.primes;
	//cout<<"Entrer la valeur de la retenue CNSS "<<endl;
	//cin>>cnss;
	//cout<<"Entrer la valeur de l'impot "<<endl;
	//cin>>impot;
	cout<<"Entrer la valeur de remboursement de pret et avance "<<endl;
	in>>sa.remboursement_de_pret_et_avance;
	return in;
  
}
 ostream& operator<<(ostream&out, salaire & sa)
{
	sa.salaire_brut= sa.heures_supp*sa.y + sa.primes + sa.salaire_de_base;
	sa.salaire_net=sa.salaire_brut-(sa.cnss+sa.impot+sa.remboursement_de_pret_et_avance);
	out<< sa.salaire_net;
	return out;
 
}
 istream& operator>>(istream& in, salaire * sa)
{
	sa->impot=5000;
	sa->cnss=25000;
	int x;  
	cout<<" Entrer le nombre des heures travailles dans ce mois "<<endl;
	in>>x;
	cout<<"Entrer le prix d'heure  du travail en DT "<<endl;
	in>>sa->y;
	sa->salaire_de_base=float(x* sa->y);
	cout<<" Entrer les heures supplementaires"<<endl;
	in>>sa->heures_supp;
	cout<<"Entrer les primes donnees "<<endl;
	in>>sa->primes;
	//cout<<"Entrer la valeur de la retenue CNSS "<<endl;
	//cin>>cnss;
	//cout<<"Entrer la valeur de l'impot "<<endl;
	//cin>>impot;
	cout<<"Entrer la valeur de remboursement de pret et avance "<<endl;
	in>>sa->remboursement_de_pret_et_avance;
	return in ;
  
}
 ostream& operator<<(ostream&out, salaire * sa)
{
	sa->salaire_brut= sa->heures_supp*sa->y + sa->primes + sa->salaire_de_base;
	sa->salaire_net=sa->salaire_brut-(sa->cnss+sa->impot+sa->remboursement_de_pret_et_avance);
	out<< sa->salaire_net ;
	return out;
 
}
//-------------------Class employe------------
istream& operator>>(istream& in,employe &e)
{
	int w;
	cout<<"\n saisir le numero de l'employe"<<endl;
	in>>e.numero_employé;
	cout<<"saisir le nom de l'employe"<<endl;
	in>>e.nom;
	cout<<"saisir le prenom de l'employe"<<endl;
	in>>e.prenom;
	cout<<"saisir le numero de la carte d'identite de l'employe"<<endl;
	in>>e.num_identite;
	do
	{
		cout<<"\n Saisir la date de naissance"<<endl;
		// e.date_naiss.saisir_date();
		in>>e.date_naiss.jour;
		in>>e.date_naiss.mois;
		in>>e.date_naiss.annee;
		w=verif_date(e.date_naiss);
	}while(!w); 
	cout<<"saisir le sexe de l'employe"<<endl;
	in>>e.sexe;
	cout<<"saisir le numero de telephone de l'employe"<<endl;
	in>>e.num_tel;
	cout<<"saisir la ville actuelle de l'employe"<<endl;
	in>>e.ville_actuelle;
	cout<<"saisir la statut matrimoniale de l'employe"<<endl;
	in>>e.statut_matrimoniale;
	cout<<"saisir le nbr d'enfant de l'employe"<<endl;
	in>>e.enfants_à_charge;
	cout<<"************** saisir le choix du conges ******************"<<endl;
	cout<<" 1)  conge paye"<<endl;
	cout<<" 2)  conge de maternite"<<endl;
	cout<<" 3)  conge du maladie"<<endl;
	cout<<" 4)  conge pour des raisons familiales"<<endl;
	cout<<" 5)  pas encore"<<endl;
	cout<<"********************************************************"<<endl;
	in>>e.congés;
	cout<<"\n";
	cout<<"************** saisir la fonction de l'employer******************"<<endl;
	cout<<"Categorie 1: le traçage"<<endl;
	cout<<"Categorie 2:  decoupage/assemblage/montage"<<endl;
	cout<<"Categorie 3: le vitrage"<<endl;
	cout<<"Categorie 4:  peinture"<<endl;
	cout<<"Categorie 5:  administration"<<endl;
	cout<<"********************************************************"<<endl;
	in>>e.fonction;
	//e.s.saisir_salaire();
	in>>e.s;
	return in;
	
}
ostream& operator<<(ostream& out,employe &e)
{
	out<<"\n le numero de l'employe est :"<<e.numero_employé<<endl;
	out<<"\n le nom de l'employe est :"<<e.nom<<endl;
	out<<"\n le prenom de l'employe est :"<<e.prenom<<endl;
	out<<"\n le numero de la carte d'identite de l'employe est :"<<e.num_identite<<endl;
	out<<"\n la date de naissance est"<<endl;
	//e.date_naiss.afficher_date();
	 out<<e.date_naiss.jour<<"/"<<e.date_naiss.mois<<"/"<<e.date_naiss.annee<<endl;
	out<<"\n le sexe de l'employe est :"<<e.sexe<<endl;
	out<<"\n le numero de telephone de l'employe est :"<<e.num_tel<<endl;
	out<<"\n la ville actuelle de l'employe est :"<<e.ville_actuelle<<endl;
	out<<"\n le statut matrimoniale est:"<<e.statut_matrimoniale<<endl;
	out<<"\n le nbr des enfants de l'employe est:"<<e.enfants_à_charge<<endl;
	 
	switch(e.congés)
	{
	case 1:  out<<"\n conge paye ";break;
	case 2:  out<<"\n conge de maternite \n";break;
	case 3:  out<<"\n conge du maladie\n";break;
	case 4:  out<<"\n conge pour des raisons familiales\n";break;
	default:  out<<"\n Pour les conges actuellement pas encore \n";
	}
 out<<"\n";
	switch(e.fonction)
	{
	case 1:  out<<"La fonction de l'employe est le tracage des plans des elements \n";break;
	case 2:  out<<"La fonction de l'employe est la decoupe, assemblage et montage   \n";break;
	case 3:  out<<"La fonction de l'employe est le vitrage et la fermeture  \n";break;
	case 4:  out<<" La fonction de l'employe est la peinture et la pose des elements sur les chantiers\n";break;
	case 5:  out<<" L'employe occupe une fonction administrative\n";break;
	}
	out<<"\n";
	out<<" Salaire Net Percu est :    "<<e.s <<"  DT ";
	//out<<" Salaire Net Percu est :    "<<e.s.salaire_net;
	//e.s.calcul_salaire();
	//out<<e.s ;
	//out<<
	out<<"\n";
	return out;
	
}
istream& operator>>(istream& in,employe *e)
{
	int w;
	cout<<"\n saisir le numero de l'employe"<<endl;
	in>>e->numero_employé;
	cout<<"saisir le nom de l'employe"<<endl;
	in>>e->nom;
	cout<<"saisir le prenom de l'employe"<<endl;
	in>>e->prenom;
	cout<<"saisir le numero de la carte d'identite de l'employe"<<endl;
	in>>e->num_identite;
	do
	{
		cout<<"\n Saisir la date de naissance"<<endl;
		//e.date_naiss.saisir_date();
		in>>e->date_naiss.jour;
		in>>e->date_naiss.mois;
		in>>e->date_naiss.annee;
		w=verif_date(e->date_naiss);
	}while(!w);
	cout<<"saisir le sexe de l'employe"<<endl;
	in>>e->sexe;
	cout<<"saisir le numero de telephone de l'employe"<<endl;
	in>>e->num_tel;
	cout<<"saisir la ville actuelle de l'employe"<<endl;
	in>>e->ville_actuelle;
	cout<<"saisir la statut matrimoniale de l'employe"<<endl;
	in>>e->statut_matrimoniale;
	cout<<"saisir le nbr d'enfant de l'employe"<<endl;
	in>>e->enfants_à_charge;
	cout<<"************** saisir le choix du conges ******************"<<endl;
	cout<<" 1)  conge paye"<<endl;
	cout<<" 2)  conge de maternite"<<endl;
	cout<<" 3)  conge du maladie"<<endl;
	cout<<" 4)  conge pour des raisons familiales"<<endl;
	cout<<" 5)  pas encore"<<endl;
	cout<<"********************************************************"<<endl;
	in>>e->congés;
	cout<<"\n";
	cout<<"************** saisir la fonction de l'employer******************"<<endl;
	cout<<"Categorie 1: le tracage"<<endl;
	cout<<"Categorie 2:  decoupage/assemblage/montage"<<endl;
	cout<<"Categorie 3: le vitrage"<<endl;
	cout<<"Categorie 4:  peinture"<<endl;
	cout<<"Categorie 5:  administration"<<endl;
	cout<<"********************************************************"<<endl;
	in>>e->fonction;
	//e.s.saisir_salaire();
	in>>e->s;
	return in;
	
}
ostream& operator<<(ostream& out,employe *e)
{
	out<<"\n le numero de l'employe est :"<<e->numero_employé<<endl;
	out<<"\n le nom de l'employe est :"<<e->nom<<endl;
	out<<"\n le prenom de l'employe est :"<<e->prenom<<endl;
	out<<"\n le numero de la carte d'identite de l'employe est :"<<e->num_identite<<endl;
	out<<"\n la date de naissance est"<<endl;
	//e.date_naiss.afficher_date();
	out<<e->date_naiss.jour<<"/"<<e->date_naiss.mois<<"/"<<e->date_naiss.annee<<endl;
	out<<"\n le sexe de l'employe est :"<<e->sexe<<endl;
	out<<"\n le numero de telephone de l'employe est :"<<e->num_tel<<endl;
	out<<"\n la ville actuelle de l'employe est :"<<e->ville_actuelle<<endl;
	out<<"\n le statut matrimoniale est:"<<e->statut_matrimoniale<<endl;
	out<<"\n le nbr des enfants de l'employe est:"<<e->enfants_à_charge<<endl;
	 
	switch(e->congés)
	{
	case 1:  out<<"\n conge paye ";break;
	case 2:  out<<"\n conge de maternite \n";break;
	case 3:  out<<"\n conge du maladie\n";break;
	case 4:  out<<"\n conge pour des raisons familiales\n";break;
	default:  out<<"\n Pour les conges actuellement pas encore \n";
	}
 out<<"\n";
	switch(e->fonction)
	{
	case 1:  out<<"La fonction de l'employe est le tracage des plans des elements \n";break;
	case 2:  out<<"La fonction de l'employe est la decoupe, assemblage et montage   \n";break;
	case 3:  out<<"La fonction de l'employe est le vitrage et la fermeture  \n";break;
	case 4:  out<<" La fonction de l'employe est la peinture et la pose des elements sur les chantiers\n";break;
	case 5:  out<<" L'employe occupe une fonction administrative\n";break;
	}
	out<<"\n";
	out<<" Salaire Net Percu est :    "<<e->s <<"  DT ";
	//out<<" Salaire Net Percu est :    "<<e.s.salaire_net;
	//e.s.calcul_salaire();
	//out<<e.s ;
	//out<<
	out<<"\n";
	return out;
 }
employe::~employe()
{
}

void employe::modifier()
{
	int choix , sortir;
 
		do
   {    
	    cout<<" Taper 1 : Pour Modifier le statut matrimoniale "<<endl;
	    cout<<" Taper 2 : Pour modifier le nombre des enfants a charge "<<endl;
		cout<<" Taper 3 : Pour modifier le conges choisit "<<endl;
		cout<<" Taper 4 : Pour modifier les heurs supplementaires"<<endl;
		cout<<" Taper 5 : Pour modifier la valeur de remboursement de pret et avance "<<endl;
		cin>>choix;
	cout<<" Entrer les nouvelles informations "<<endl;
	if(choix==1)  cin>>statut_matrimoniale;
	if (choix==2) cin>>enfants_à_charge;
	if (choix==3) cin>>congés;
	if (choix==4) cin>>s.heures_supp;
	if (choix==5) cin>>s.remboursement_de_pret_et_avance;
	cout<<endl;
	cout<<" Si vous voulez modifier encore taper 0  "<<endl;
	cin>>sortir;
	 

	} while (sortir == 0 );
  
 
}

//-------------------------Class Employes(tableau d'objet)---------------

Employes::Employes(const  Employes  &w)
{
	for(unsigned i=0;i<w.tab.size();i++)
	{
		employe  *q=new employe(*w.tab[i]);
		tab.push_back(q);
	}
}
istream& operator>>(istream& in ,Employes & E)
{
	char rep ;
	do
	{
		cout<<"-----Saisir un employe-----"<<endl;
		employe *q =new employe();
		in>>*q;
		E.tab.push_back(q);
		cout<<" \n ------- Taper o pour Rajouter -------  "<<endl;
		in>>rep;
	}
	while ( (rep== 'o' ) || (rep== 'O' ) ) ;
	return in;
}
istream& operator>>(istream& in ,Employes * E)
{
	char rep ;
	in.seekg(0);
	while(1)
	{
		if (in.eof()) break ;
	do
	{
		cout<<"-----Saisir un employe-----"<<endl;
		employe *q =new employe();
		in>>*q;
		E->tab.push_back(q);
		cout<<" \n ------- Taper o pour Rajouter -------  "<<endl;
		in>>rep;
	}
	while ( (rep== 'o' ) || (rep== 'O' ) ) ;
	}
	return in;
}
ostream& operator<<(ostream& out ,Employes & E)
{
	for (unsigned int i =0 ;i< E.tab.size(); i++)
		{
			out<<"\n--------Affichage de l' employe n '"<<i+1<<"-----------"<<endl;
		    out<< *E.tab[i];
	    }
	return out;
}
ostream& operator<<(ostream& out ,Employes * E)
{
	for (unsigned int i =0 ;i< E->tab.size(); i++)
		{
			out<<"\n--------Affichage de l' employe n '"<<i+1<<"-----------"<<endl;
		    out<< *E->tab[i];
	    }
	return out;
}
void Employes::modifier_employe()
{
	int n;
	bool test =true;
	cout<<"\n Saisir le numero de carte d'identitee de l' employe a modifier "<<endl;
	cin>>n;
	for ( unsigned int i=0; i<tab.size();i++)
	{
		if (tab[i]->get_num_identite() ==n )
		{
			tab[i]->modifier();
	        test= false;
		}
      }
	if ( test== true ) cout<< " \n L'employe n'existe pas  "<<endl;
}
void Employes::rechercher()
{
	int n,i=0;
	bool test= true ;
	cout<<"\n Saisir le numero de carte d'identitee de l' employe a recherche "<<endl;
	cin>>n;
	for ( unsigned int i=0; i<tab.size();i++)
	{
		if (tab[i]->get_num_identite() ==n )
		{
			cout<<*tab[i];
			test= false;
		}
      }
	if ( test== true ) cout<< " \n L'employe n'existe pas  "<<endl;
}
void Employes::supprimer()
{
	int n;
	bool test=true;
	cout<<"\n Saisir le numero de carte d'identitee de l' employe a supprimer "<<endl;
	cin>>n;
	for (unsigned int i=0; i<tab.size();i++)
	{
		if (tab[i]->get_num_identite() ==n )
		{
			delete tab[i];
			tab.erase(tab.begin()+i);
	         test= false;
		}
      }
	if ( test== true ) cout<< " \n L'employe n'existe pas  "<<endl;
}
Employes::~Employes()
{
	for (unsigned int i=0; i< tab.size() ;i++)
		delete tab[i];
	tab.clear();

}
//_____Fichier Employes_____
void Employes::creer (fstream &f)
   {
	   f.open("Fichiersemployes.txt", ios::in | ios::out );  
	if (!f.is_open()) cout<<" erreur d'overture du fichier "<<endl;
	else cout <<" ouverture avec succes"<<endl;
	}
void Employes::afficherfich(fstream & f)
{
 
	char ch[150];
	f.seekg(0);
	while( f.getline(ch ,100))

	{cout <<ch<<endl;}
	f.close() ;
}
void Employes::enregistrerfich( fstream& f,Employes &e)
{
	 cin>>e;
	 f<<&e; 
}











