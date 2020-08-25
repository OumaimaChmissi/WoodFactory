
#include<string>
#include<ostream>
#include<fstream>
#include"employe.h"
#include"client.h"
using namespace std;
//---------------------CLASS CLIENT_COMMANDES--------------
 
istream& operator>>(istream& in ,commande& c)
{
	      cout<<" \n Choisir le type de l'amenagement    :  1 : Pour exterieur/  2 : pour interieur  "<<endl;
		  in>>c.choix_amenagement;
		  cout<<" \n Saisir l'amenagement " <<endl;
		  in>>c.amenagemet;
		   cout<<"\n Saisir les dimensions  de amenagement respectivement:longueur,largeur et epaisseur  :"<<endl;
		  in>>c.longeur;
		  in>>c.largeur;
		  in>>c.epaisseur;
		  cout<<"\n Saisir la couleur de l'amenagement choisit"<<endl;
		  in>>c.couleur;
		  cout<< "\n --------  Choisir le type de bois ------------"<<endl;
		  cout<<" 1 : Bois blenz "<<endl;
		  cout<<" 2 : Bois chene"<<endl;
		  cout<<" 3 : Bois bubinga "<<endl;
		  cout<<" 4 : Bois  cedre "<<endl;
		  cout<<" 5 : Bois frene "<<endl;
		  cout<<" 6 : Bois hetre "<<endl;
		  cout<<" 7 : Bois ipe "<<endl;
		  cout<<" 8 : Bois dark red meranti "<<endl;
		  cout<<" 9 : Bois zingana "<<endl;
		  cout<<" 10 : Bois teak "<<endl;
		  cout<<" 11 : Bois pin d'oregon "<<endl;
		  cout<<" 12 : Bois  mersier "<<endl;
		  cout <<"  AUTRE       "<<endl;
		  in>>c.type_bois ;
		  cout << " \n"<<endl;
		  return in;
}
istream& operator>>(istream& in ,commande* c)
{
	      cout<<" \n Choisir le type de l'amenagement    :  1 : Pour exterieur/  2 : pour interieur  "<<endl;
		  in>>c->choix_amenagement;
		  cout<<" \n Saisir l'amenagement " <<endl;
		  in>>c->amenagemet;
		   cout<<"\n Saisir les dimensions  de amenagement respectivement:longueur,largeur et epaisseur  :"<<endl;
		  in>>c->longeur;
		  in>>c->largeur;
		  in>>c->epaisseur;
		  cout<<"\n Saisir la couleur de l'amenagement choisit"<<endl;
		  in>>c->couleur;
		  cout<< "\n --------  Choisir le type de bois ------------"<<endl;
		  cout<<" 1 : Bois blenz "<<endl;
		  cout<<" 2 : Bois chene"<<endl;
		  cout<<" 3 : Bois bubinga "<<endl;
		  cout<<" 4 : Bois  cedre "<<endl;
		  cout<<" 5 : Bois frene "<<endl;
		  cout<<" 6 : Bois hetre "<<endl;
		  cout<<" 7 : Bois ipe "<<endl;
		  cout<<" 8 : Bois dark red meranti "<<endl;
		  cout<<" 9 : Bois zingana "<<endl;
		  cout<<" 10 : Bois teak "<<endl;
		  cout<<" 11 : Bois pin d'oregon "<<endl;
		  cout<<" 12 : Bois  mersier "<<endl;
		  cout <<"  AUTRE       "<<endl;
		  in>>c->type_bois ;
		  cout << " \n"<<endl;
		  return in;
}
ostream& operator<<(ostream&out , commande & c)
{
			  switch(c.choix_amenagement)
			  {
			  case 1: out<<"\n L' amenagement choisit  est de type  Exterieur"<<endl;break;
			  case 2: out<<"\n L' amenagement choisit  est de type  Interieur"<<endl;break;
			  }
			  out<<"\n L'amenagement est :   "<<c.amenagemet<<endl;
			  out<<"\n Longueur de l'amenagement est :   "<<c.longeur<<endl;
			  out<<"\n Largeur de l'amenagement est :   "<<c.largeur<<endl;
			  out<<"\n Epaissseur de l'amenagement est :   "<<c.epaisseur<<endl;
			  out<<"\n La couleur de l'amenagement est  :   "<<c.couleur<<endl;
			  out<<"\n Type de l'amenagement  est:   "<<c.type_bois<<endl;
			   out<<"\n        ------------------------- "<<endl;
			   return out;

}
ostream& operator<<(ostream&out , commande * c)
{
			  switch(c->choix_amenagement)
			  {
			  case 1: out<<"\n L' amenagement choisit  est de type  Exterieur"<<endl;break;
			  case 2: out<<"\n L' amenagement choisit  est de type  Interieur"<<endl;break;
			  }
			  out<<"\n L'amenagement est :   "<<c->amenagemet<<endl;
			  out<<"\n Longueur de l'amenagement est :   "<<c->longeur<<endl;
			  out<<"\n Largeur de l'amenagement est :   "<<c->largeur<<endl;
			  out<<"\n Epaissseur de l'amenagement est :   "<<c->epaisseur<<endl;
			  out<<"\n La couleur de l'amenagement est  :   "<<c->couleur<<endl;
			  out<<"\n Type de l'amenagement  est:   "<<c->type_bois<<endl;
			  out<<"\n        ------------------------- "<<endl;
			return out;

}
istream& operator>>(istream&in,commandes_clients&c)
 {
	 cout<<"\n Saisir le nom du client :"<<endl;
	 in>>c.nom_cl;
	 cout<<"\n Saisir le prenom du client :"<<endl;
	 in>>c.prenon_cl;
	  cout<<"\n Saisir le numero identite du client :"<<endl;
	  in>>c.num_id_cl;
	  cout<<"\n Saisir l'adresse du client :"<<endl;
	  in>>c.adresse;
	  cout<<"\n Saisir le numero de telephone du client :"<<endl;
	  in>>c.numTel_cl;
	  cout<<"\n";
	   cout << " \n Saisir le nombre d' amenagements sur mesure a fabriques "<<endl;
	    in>>c.nombre_sur_mesure;
		   //c.cm= new commande[c.nombre_sur_mesure];
       for(unsigned int i=0;i<c.nombre_sur_mesure;i++)
		  {
		   in>>c.cm[i];
		  }
	  
	 	cout<<"  \n Saisir le prix des commandes "<<endl;
	   in>>c.prix;
	   cout<<"\n Saisir la date de debut de commande"<<endl;
	   in>>c.date_debut_commande.jour;
	   in>>c.date_debut_commande.mois;
	   in>>c.date_debut_commande.annee;
	   cout<<"\n Saisir la date de livraision du commande"<<endl;
	   in>>c.date_livration.jour;
	   in>>c.date_livration.mois;
	   in>>c.date_livration.annee;
	   return in;
 }
ostream& operator<<(ostream& out ,commandes_clients &c)
 {
	 out<<"\n Le nom du client est: "<<c.nom_cl<<endl;
	 out<<"\n Le prenom du client est: "<<c.prenon_cl<<endl;
	  out<<"\n Le numero de la carte d'identite est:"<<c.num_id_cl<<endl;
	  out<<"\n L'adresse du client est: "<<c.adresse<<endl;
	  out<<"\n Le numero de telephone  du client est: "<<c.numTel_cl<<endl;
	  out<<"\n         ---------------------------   "<<endl;
	  out<<"\n Le nombre des amenagements  est  : "<<c.nombre_sur_mesure<<endl;
       for(unsigned int i=0;i<c.nombre_sur_mesure;i++)
		  {
			  out<<" \n La commande numero  " << (i + 1)<<"  est   : \n" <<endl ;
			   out<<c.cm[i];
		  }
	 
      out<<"  \n Le prix des commandes est : "<< c.prix<<"   DT  " <<endl;
	  out<<" \n La date du debut de commande est : ";
	  out<<c.date_debut_commande.jour<<"/"<<c.date_debut_commande.mois<<"/"<<c.date_debut_commande.annee<<endl;
	   out<<" \n La date de livration de la commande est : ";
	   out<<c.date_livration.jour<<"/"<<c.date_livration.mois<<"/"<<c.date_livration.annee<<endl;	 
	  return out;
}
 istream& operator>>(istream&in,commandes_clients*c)
 {
	 cout<<"\n Saisir le nom du client :"<<endl;
	 in>>c->nom_cl;
	 cout<<"\n Saisir le prenom du client :"<<endl;
	 in>>c->prenon_cl;
	  cout<<"\n Saisir le numero identite du client :"<<endl;
	  in>>c->num_id_cl;
	  cout<<"\n Saisir l'adresse du client :"<<endl;
	  in>>c->adresse;
	  cout<<"\n Saisir le numero de telephone du client :"<<endl;
	  in>>c->numTel_cl;
	  cout<<"\n";
	   cout << " \n Saisir le nombre d' amenagements sur mesure a fabriques "<<endl;
	    in>>c->nombre_sur_mesure;
		   //c.cm= new commande[c.nombre_sur_mesure];
       for(unsigned int i=0;i<c->nombre_sur_mesure;i++)
		  {
		   in>>c->cm[i];
		  }
	  
	 	cout<<"  \n Saisir le prix des commandes "<<endl;
	   in>>c->prix;
	   cout<<"\n Saisir la date de debut de commande"<<endl;
	   in>>c->date_debut_commande.jour;
	   in>>c->date_debut_commande.mois;
	   in>>c->date_debut_commande.annee;
	   cout<<"\n Saisir la date de livraision du commande"<<endl;
	   in>>c->date_livration.jour;
	   in>>c->date_livration.mois;
	   in>>c->date_livration.annee;
	   return in;
 }
ostream& operator<<(ostream& out ,commandes_clients *c)
 {
	 out<<"\n Le nom du client est: "<<c->nom_cl<<endl;
	 out<<"\n Le prenom du client est: "<<c->prenon_cl<<endl;
	  out<<"\n Le numero de la carte d'identite est:"<<c->num_id_cl<<endl;
	  out<<"\n L'adresse du client est: "<<c->adresse<<endl;
	  out<<"\n Le numero de telephone  du client est: "<<c->numTel_cl<<endl;
	  out<<"\n         ---------------------------   "<<endl;
	  out<<"\n Le nombre des amenagements  est  : "<<c->nombre_sur_mesure<<endl;
       for(unsigned int i=0;i<c->nombre_sur_mesure;i++)
		  {
			  out<<" \n La commande numero  " << (i + 1)<<"  est   : \n" <<endl ;
			   out<<c->cm[i];
		  }
	 
      out<<"  \n Le prix des commandes est : "<< c->prix<<"   DT  " <<endl;
	  out<<" \n La date du debut de commande est : ";
	  out<<c->date_debut_commande.jour<<"/"<<c->date_debut_commande.mois<<"/"<<c->date_debut_commande.annee<<endl;
	   out<<" \n La date de livration de la commande est : ";
	   out<<c->date_livration.jour<<"/"<<c->date_livration.mois<<"/"<<c->date_livration.annee<<endl;	 
	  return out;
} 
void commandes_clients::modifiercl()
 {
	 int n;
     cout <<"\n------Modification  Commandes ------ :"<<endl;
	 cout <<" \n Saisir le nouveau nombre de commandes "<<endl;
	 cin>>n;
	 nombre_sur_mesure= n;
	 // cm= new commande[n];
	 for (unsigned int i=0 ;i<nombre_sur_mesure ;i++)
	     {
			 cin>>cm[i];
		 }
  }



//-----------------------Tableau de clients-----------------
tableau_clients::~tableau_clients ()
{
   for (unsigned int i=0; i< t.size() ;i++)
		delete t[i];
	t.clear();
}
istream& operator>>(istream& in , tableau_clients & E)
{
	char rep ;
	do
	{
		cout<<"-----Saisir Le Client et Ses Commandes -----"<<endl;
		commandes_clients *q =new commandes_clients();
		in>>*q;
		E.t.push_back(q);
		cout<<" \n ------- Taper o pour Rajouter -------  "<<endl;
		in>>rep;
	}
	while ( (rep== 'o' ) || (rep== 'O' ) ) ;
	return in;
}
ostream& operator<<(ostream& out ,tableau_clients & E)
{
	for (unsigned int i =0 ;i< E.t.size(); i++)
		{
			out<<"\n**********Affichage de l' employe n '"<<i+1<<"***********"<<endl;
		    out<< *E.t[i];
	    }
	return out;
}
istream& operator>>(istream& in , tableau_clients * E)
{
	char rep ;
	 
	in.seekg(0);
	while(1)
	{
		if (in.eof()) break ;
	do
	{
		cout<<"-----Saisir Le Client et Ses Commandes -----"<<endl;
		commandes_clients *q =new commandes_clients();
		in>>*q;
		E->t.push_back(q);
		cout<<" \n ------- Taper o pour Rajouter -------  "<<endl;
		in>>rep;
	}
	while ( (rep== 'o' ) || (rep== 'O' ) ) ;
	}
	return in;
}
ostream& operator<<(ostream& out ,tableau_clients * E)
{
	for (unsigned int i =0 ;i< E->t.size(); i++)
		{
			out<<"\n**********Affichage de l' employe n '"<<i+1<<"***********"<<endl;
		    out<< *E->t[i];
	    }
	return out;
}
void tableau_clients::rechercher()
{
	int n;
	bool test= true;
	cout<<"\n Saisir le numero de carte d'identitee de le client a rechercher "<<endl;
	cin>>n;
	for (unsigned int i=0; i<t.size();i++)
	{
	 if (t[i]->get_num_id_cl() ==n )
       {
		  cout<<*t[i];
		   test= false;
		}
      }
	if ( test== true ) cout<< " \n Le client n'existe pas  "<<endl;
 }
void tableau_clients::ajouter()
{
	cout<<"\n---------Ajout d'un Client---------"<<endl;
	commandes_clients *p = new commandes_clients();
	cin>>*p;
	t.push_back(p);

}
void tableau_clients::supprimer()
{
	int n;
	bool test=true;
	cout<<"\n Saisir le numero de carte d'identitee de le client a supprimer "<<endl;
	cin>>n;
	for (unsigned int i=0; i<t.size();i++)
	{
		if (t[i]->get_num_id_cl() ==n )
		{
			delete t[i];
			t.erase(t.begin()+i);
		   test= false;
		}
      }
	if ( test== true ) cout<< " \n Le client n'existe pas  "<<endl;
}
tableau_clients::tableau_clients(const  tableau_clients  &w)
{
	for(unsigned i=0;i<w.t.size();i++)
	{
		commandes_clients *q=new commandes_clients(*w.t[i]);
		t.push_back(q);
	}
}
 void tableau_clients::modifier()
{
	int n;
	bool test= true;
	cout<<"\n Saisir le numero du carte identitee du client a modifier "<<endl;
	cin>>n;
	for ( unsigned int i=0; i<t.size();i++)
	{
		if (t[i]->get_num_id_cl() ==n )
		{
			t[i]->modifiercl();
	        test= false;
		}
      }
	if ( test== true ) cout<< " \n Le fournisseur n'existe pas  "<<endl;
}
void tableau_clients::creer (fstream &f)
   {
	f.open("Fichiersclients.txt", ios::in | ios::out  );  
	if (!f.is_open()) cout<<" erreur d'overture du fichier "<<endl;
	else cout <<" ouverture avec succes"<<endl;
	}
void  tableau_clients::afficherfich(fstream & f)
{
 
	char ch[150];
	f.seekg(0);
	while( f.getline(ch ,100))

	{cout <<ch<<endl;}
	f.close() ;
}
void  tableau_clients::enregistrerfich( fstream& f)
{
	 tableau_clients p ;
	 cin>>p;
	 f<<&p; 
}


