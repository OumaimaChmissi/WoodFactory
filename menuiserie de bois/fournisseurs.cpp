#include "fournisseurs.h"
//---------------------------------class fournisseur------------------
istream& operator>>(istream& in, matierePremiere & m)
{
	   float p=0.0;
	    in>>m.nom_de_mat_pre;
		cout<<"\n Saisir  le nombre en cette matiere premiere  "<<endl;
		in>>m.nb;
		cout<<"\n  Saisir le prix unitaire"<<endl;
		in>>m.prix;
		p=m.nb*m.prix;
		m.prix=p;
		return in;
		
}
ostream& operator<<(ostream& out ,matierePremiere &m)
{
	out<<"\n La matiere premiere choisit    est : "<<m.nom_de_mat_pre<<endl;
	out<<"\n Le nombre de la matiere premiere choisit est : "<<m.nb<<endl;
	return out;
		
}
istream& operator>>(istream& in, matierePremiere * m)
{
	  float p=0.0;
	    in>>m->nom_de_mat_pre;
		cout<<"\n Saisir  le nombre en cette matiere premiere  "<<endl;
		in>>m->nb;
		cout<<"\n  Saisir le prix unitaire"<<endl;
		in>>m->prix;
		p=m->nb*m->prix;
		m->prix=p;
		return in;
}
ostream& operator<<(ostream& out ,matierePremiere *m)
{
	
	out<<"\n La matiere premiere choisit    est : "<<m->nom_de_mat_pre<<endl;
	out<<"\n Le nombre de la matiere premiere choisit est : "<<m->nb<<endl;
	return out;
}
istream& operator>>(istream& in, fournisseur &f)
{
	float som=0.0;
	cout<<"\n  Saisir le nom de l'entreprise fournisseur"<<endl;
	in>>f.nom_entreprise;
	cout<<" \n Saisir le numero du telephone de l'entreprise"<<endl;
	in>>f.num_entreprise;
    cout<<"\n-------Concernant les matieres premieres---------"<<endl;
	cout<<" \n Saisir le nombre des matieres premieres fournit par l'entreprise"<<endl;
	in>>f.nbr_enmatiere_premiere;
	//f.mp=new matierePremiere[f.nbr_enmatiere_premiere];
	for(int i=0;i<f.nbr_enmatiere_premiere;i++)
	{ 
		cout<<"\n Saisir la matiere premiere(Bois/Vitres/coles/Autres........) numero : "<< i+1<<endl;
		in>>f.mp[i];
		som=som+f.mp[i].prix;
		
	}
	f.mp->prix=som;
	cout<<"\n Saisir la date de livration des matieres premieres"<<endl;
	in>>f.date_livration_matiere.jour;
	in>>f.date_livration_matiere.mois;
	in>>f.date_livration_matiere.annee;
	return in;
}
istream& operator>>(istream& in, fournisseur *f)
{
	float som=0.0;
	cout<<"\n  Saisir le nom de l'entreprise fournisseur"<<endl;
	in>>f->nom_entreprise;
	cout<<" \n Saisir le numero du telephone de l'entreprise"<<endl;
	in>>f->num_entreprise;
    cout<<"\n-------Concernant les matieres premieres---------"<<endl;
	cout<<" \n Saisir le nombre des matieres premieres fournit par l'entreprise"<<endl;
	in>>f->nbr_enmatiere_premiere;
	for(int i=0;i<f->nbr_enmatiere_premiere;i++)
	{ 
		cout<<"\n Saisir la matiere premiere(Bois/Vitres/coles/Autres........) numero : "<< i+1<<endl;
		in>>f->mp[i];
		in>>f->mp[i];
		som=som+f->mp[i].prix;
		
	}
	cout<<"\n Saisir la date de livration des matieres premieres"<<endl;
	in>>f->date_livration_matiere.jour;
	in>>f->date_livration_matiere.mois;
	in>>f->date_livration_matiere.annee;
	return in;
}
ostream& operator<<(ostream& out ,fournisseur& f)
{
	out<<"\n Le nom de l'entreprise fournisseur est: "<<f.nom_entreprise<<endl;
	out<<"\n Le numero de l'entreprise fournisseur est: "<<f.num_entreprise<<endl;
	out<<"\n----Afichage des matieres premiers-----"<<endl;
	out<<"\n Le nombre en matiere premiere est: "<<f.nbr_enmatiere_premiere<<endl;
	for(int i=0;i<f.nbr_enmatiere_premiere;i++)
	{ 
		out<<f.mp[i];
	}
	out<<"\n Le prix total est: "<<f.mp->prix<<" Dinars"<<endl;
	out<<"                -------"<<endl;
	cout<<"\n";
	
	out<<" \n La date de livration des matieres premieres est : "<<f.date_livration_matiere.jour<<"/"<<f.date_livration_matiere.mois<<"/"<<f.date_livration_matiere.annee<<endl;
	
	return out;
}
ostream& operator<<(ostream& out ,fournisseur*f)
{
	out<<"\n Le nom de l'entreprise fournisseur est: "<<f->nom_entreprise<<endl;
	out<<"\n Le numero de l'entreprise fournisseur est: "<<f->num_entreprise<<endl;
	out<<"\n----Afichage des matieres premiers-----"<<endl;
	out<<"\n Le nombre en matiere premiere est: "<<f->nbr_enmatiere_premiere<<endl;
	for(int i=0;i<f->nbr_enmatiere_premiere;i++)
	{ 
		out<<f->mp[i];
		
	}
	out<<"\n Le prix total est: "<<f->mp->prix<<" Dinars"<<endl;
	    out<<"                -------"<<endl;
	
	cout<<"\n";
	
	out<<" \n La date de livration des matieres premieres est : "<<f->date_livration_matiere.jour<<"/"<<f->date_livration_matiere.mois<<"/"<<f->date_livration_matiere.annee<<endl;
	
	return out;
}
void fournisseur::modifierf()
{
	float som=0;
	cout<<"\n----------Modification des matieres premieres ------------"<<endl;
	cout<<"\n Modifier le nombre en matieres premieres "<<endl;
	cin>>nbr_enmatiere_premiere;
	for (unsigned int i =0 ;i<nbr_enmatiere_premiere; i++)
	{
		cout<<"\n Saisir la matiere premiere(Bois/Vitres/coles/Autres........) numero : "<< i+1<<endl;
		cin>>mp[i].nom_de_mat_pre;
		cout<<"\n Saisir  le nombre en cette matiere premiere  "<<endl;
		cin>>mp[i].nb;
		cout<<"\n  Saisir le prix unitaire"<<endl;
		cin>>mp[i].prix;
		som+=mp[i].prix*mp[i].nb;
		mp[i].prix=som;
	}
}

//------------------class tableau des fournisseurs(tableau d'objet)-----------------
tableau_fournisseurs::~tableau_fournisseurs ()
{
   for (unsigned int i=0; i< fa.size() ;i++)
		delete fa[i];
	fa.clear();
}
istream& operator>>(istream& in , tableau_fournisseurs& E)
{
	char rep ;
	float p=0.0;
	do
	{
		cout<<"-----Saisir Le  fournisseur et les matieres premieres fournissent -----"<<endl;
		fournisseur *q =new fournisseur();
		in>>*q;
		E.fa.push_back(q);
		cout<<" \n ------- Taper o pour Rajouter -------  "<<endl;
		in>>rep;
	}
	while ( (rep== 'o' ) || (rep== 'O' ) ) ;
	return in;
}
istream& operator>>(istream& in , tableau_fournisseurs *E)
{
	char rep ;
	in.seekg(0);
	while(1)
	{
		if (in.eof()) break ;
	do
	{
		cout<<"-----Saisir Le  fournisseur et les matieres premieres fournissent -----"<<endl;
		fournisseur *q =new fournisseur();
		in>>*q;
		E->fa.push_back(q);
		cout<<" \n ------- Taper o pour Rajouter -------  "<<endl;
		in>>rep;
	}
	while ( (rep== 'o' ) || (rep== 'O' ) ) ;
	}
	return in;
}
ostream& operator<<(ostream& out ,tableau_fournisseurs & E)
{
	for (unsigned int i =0 ;i< E.fa.size(); i++)
		{
			out<<"\n**********Affichage de le fournisseur n '"<<i+1<<"***********"<<endl;
		    out<< *E.fa[i];
	    }
	return out;
}
ostream& operator<<(ostream& out ,tableau_fournisseurs * E)
{
	for (unsigned int i =0 ;i< E->fa.size(); i++)
		{
			out<<"\n**********Affichage de le fournisseur n '"<<i+1<<"***********"<<endl;
		    out<< *E->fa[i];
	    }
	return out;
}
void tableau_fournisseurs::rechercher()
{
	int n;
	bool test = true;
	cout<<"\n Saisir le numero de telephone du fournisseur a rechercher "<<endl;
	cin>>n;
	for (unsigned int i=0; i<fa.size();i++)
	{
		if (fa[i]->get_num_entreprise() ==n )
		{
			cout<<*fa[i];
		   test= false;
		}
      }
	if ( test== true ) cout<< " \n Le fournisseur n'existe pas  "<<endl;
}
void tableau_fournisseurs::supprimer()
{
	int n;
	bool test=true;
	cout<<"\n Saisir le numero du telephone de fournisseur  a supprimer "<<endl;
	cin>>n;
	for (unsigned int i=0; i<fa.size();i++)
	{
		if (fa[i]->get_num_entreprise() ==n )
		{
			delete fa[i];
			fa.erase(fa.begin()+i);
		    test= false;
		}
      }
	if ( test== true ) cout<< " \n Le fournisseur n'existe pas  "<<endl;
}
tableau_fournisseurs::tableau_fournisseurs(const  tableau_fournisseurs  &w)
{
	for(unsigned i=0;i<w.fa.size();i++)
	{
		fournisseur *q=new fournisseur(*w.fa[i]);
		fa.push_back(q);
	}
}
void tableau_fournisseurs::modifier()
{
	int n;
	bool test= true;
	cout<<"\n Saisir le numero de l'entreprise a modifier "<<endl;
	cin>>n;
	for ( unsigned int i=0; i<fa.size();i++)
	{
		if (fa[i]->get_num_entreprise() ==n )
		{
			fa[i]->modifierf();
	        test= false;
		}
      }
	if ( test== true ) cout<< " \n Le fournisseur n'existe pas  "<<endl;
}
void tableau_fournisseurs::creer (fstream &f)
   {
	f.open("Fichiersfournisseurs.txt", ios::in | ios::out );  
	if (!f.is_open()) cout<<" erreur d'overture du fichier "<<endl;
	else cout <<" ouverture avec succes"<<endl;
	}
void  tableau_fournisseurs::afficherfich(fstream & f)
{
  
	char ch[150];
	f.seekg(0);
	while( f.getline(ch ,100))

	{cout <<ch<<endl;}
	f.close() ;
}
void  tableau_fournisseurs::enregistrerfich( fstream& f )
{
	tableau_fournisseurs p;
	 cin>>p;
	 f<<&p; 
}

 
