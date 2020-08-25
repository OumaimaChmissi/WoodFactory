#include "atelier.h"

//----------------------Ateliers de travail ----------------
istream& operator>>(istream& in ,ateliers & a)
{
	cout <<"\n Saisir de quel atelier s'agit t il  \n "<<endl;
	cout<<"------------Choix de l'atelier-------------"<<endl;
	cout<<"  1 :  Atelier de tracage des plans des elements de menuiseries sur mesure " <<endl;
	cout<<"  2 :  Atelier de decoupage, assemblage et montage des elements "<<endl;
    cout<<"  3 :  Atelier de vitrage et la fermeture des elements de menuiseries "<<endl;
	cout<<"  4 :  Atelier de peinture et la pose des elements sur les chantiers "<<endl;
	in>>a.atelier;
	cout<<" Saisir le nombre des machines trouvees dans cet atelier "<<endl;
	in>>a.nb_machine;
	a.machine =new string[a.nb_machine];
	cout<< "Saisir les noms de machines (tronconneuse ,scie, perceuse, visseuse, fraiseuse.. ) "<<endl;
	for (unsigned int i=0; i<a.nb_machine;i++)
	{
		
		in>>a.machine[i];
	}
  return in;
}
ostream& operator<<(ostream& out ,ateliers & a)
{
	switch(a.atelier) 
	{
	case 1 : out<<"\n C'est un atelier de tracage des plans des elements de menuiseries "<<endl;break;
	case 2 : out<<" \n C'est un atelier de decoupage, assemblage et montage des elements" <<endl; break;
	case 3 : out<<" \n  C'est un atelier de vitrage et la fermeture des elements de menuiseries "<<endl;break;
	case 4: out <<" \n C'est un atelier de peinture et la pose des elements sur les chantiers" <<endl; 
	}
	out<< " \n Le nombre de machines trouvees dans cet atelier est : "<< a.nb_machine<<endl;
	out<< "\n Les machines utilisees dans cet atelier sont  : "<<endl;
	for (unsigned int i=0; i<a.nb_machine;i++)
	{
		out<< "\n "<<a.machine[i]<<endl;
	}

	return out;
}
istream& operator>>(istream& in ,ateliers * a)
{
	cout <<"\n Saisir de quel atelier s'agit t il  \n "<<endl;
	cout<<"------------Choix de l'atelier-------------"<<endl;
	cout<<"  1 :  Atelier de tracage des plans des elements de menuiseries sur mesure " <<endl;
	cout<<"  2 :  Atelier de decoupage, assemblage et montage des elements "<<endl;
    cout<<"  3 :  Atelier de vitrage et la fermeture des elements de menuiseries "<<endl;
	cout<<"  4 :  Atelier de peinture et la pose des elements sur les chantiers "<<endl;
	in>>a->atelier;
	cout<<" Saisir le nombre des machines trouvees dans cet atelier "<<endl;
	in>>a->nb_machine;
	a->machine =new string[a->nb_machine];
	cout<< "Saisir les noms de machines (tronconneuse ,scie, perceuse, visseuse, fraiseuse.. ) "<<endl;
	for (unsigned int i=0; i<a->nb_machine;i++)
	{
		
		in>>a->machine[i];
	}
  return in;
}
ostream& operator<<(ostream& out ,ateliers * a)
{
	switch(a->atelier) 
	{
	case 1 : out<<"\n C'est un atelier de tracage des plans des elements de menuiseries "<<endl;break;
	case 2 : out<<" \n C'est un atelier de decoupage, assemblage et montage des elements" <<endl; break;
	case 3 : out<<" \n  C'est un atelier de vitrage et la fermeture des elements de menuiseries "<<endl;break;
	case 4: out <<" \n C'est un atelier de peinture et la pose des elements sur les chantiers" <<endl; 
	}
	out<< " \n Le nombre de machines trouvees dans cet atelier est : "<< a->nb_machine<<endl;
	out<< "\n Les machines utilisees dans cet atelier sont  : "<<endl;
	for (unsigned int i=0; i<a->nb_machine;i++)
	{
		out<< "\n "<<a->machine[i]<<endl;
	}

	return out;
}
//_____________Fichier ateliers de travail____________
void tableau_ateliers::creer (fstream &f)
   {
	   f.open("Fichiers_atelier.txt", ios::in | ios::out |ios::trunc );  
	if (!f.is_open()) cout<<" erreur d'overture du fichier "<<endl;
	else cout <<" ouverture avec succes"<<endl;
	}
void  tableau_ateliers::afficherfich(fstream & f)
{
  
	char ch[150];
	f.seekg(0);
	while( f.getline(ch ,100))

	{cout <<ch<<endl;}
	f.close() ;
}
void   tableau_ateliers::enregistrerfich( fstream& f )
{
	tableau_ateliers p;
	 cin>>p;
	 f<<&p; 
}
// --------------Tableau d'ateliers(tableau d'objet)-------
istream& operator>>(istream& in ,  tableau_ateliers& E)
{
	char rep ;
	do
	{
		cout<<"-----Saisir les caracteristiques de l'atelier-----"<<endl;
		ateliers *q =new	ateliers();
		in>>*q;
		E.at.push_back(q);
		cout<<" \n ------- Taper o pour Rajouter -------  "<<endl;
		in>>rep;
	}
	while ( (rep== 'o' ) || (rep== 'O' ) ) ;
	return in;
}
ostream& operator<<(ostream& out ,tableau_ateliers & E)
{
	for (unsigned int i =0 ;i< E.at.size(); i++)
		{
			out<<"\n**********Affichage de l'atelier n '"<<i+1<<"***********"<<endl;
		    out<< *E.at[i];
	    }
	return out;
}
istream& operator>>(istream& in , tableau_ateliers* E)
{
	char rep ;
	 
	in.seekg(0);
	while(1)
	{
		if (in.eof()) break ;
	do
	{
		cout<<"-----Saisir les caracteristiques de l'atelier -----"<<endl;
		ateliers *q =new ateliers();
		in>>*q;
		E->at.push_back(q);
		cout<<" \n ------- Taper o pour Rajouter -------  "<<endl;
		in>>rep;
	}
	while ( (rep== 'o' ) || (rep== 'O' ) ) ;
	}
	return in;
}
ostream& operator<<(ostream& out ,tableau_ateliers * E)
{
	for (unsigned int i =0 ;i< E->at.size(); i++)
		{
			out<<"\n**********Affichage de l'atelier n '"<<i+1<<"***********"<<endl;
		    out<< *E->at[i];
	    }
	return out;
}
tableau_ateliers::tableau_ateliers(const  tableau_ateliers  &w)
{
	for(unsigned i=0;i<w.at.size();i++)
	{
		ateliers *q=new ateliers(*w.at[i]);
		at.push_back(q);
	}
}
tableau_ateliers::~tableau_ateliers ()
{
   for (unsigned int i=0; i< at.size() ;i++)
		delete at[i];
	at.clear();
}











