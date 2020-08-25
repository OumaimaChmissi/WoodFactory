#include "employe.h"
#include"client.h"
#include"fournisseurs.h"
#include"atelier.h"
#include<iostream>
#include<stdlib.h>
#include <fstream>
using namespace std;
 
void main()
{ 
int choix,c,d,x,y;
Employes e;
tableau_clients cl;
fstream fe;
fstream fc;
tableau_fournisseurs t;
fstream fo;
tableau_ateliers a;
fstream fa;
 
menu :
do
{
	system("Color 0B");
	cout<<"\n";
	cout<<"\n"<<endl;
    cout << "----------------------**   Menu Principal **---------------------------" << endl;
	cout << "  -----------------------------------------------------------\n" << endl;
	cout << "  |                        Employes                (1)     |\n" << endl;
	cout << "  -----------------------------------------------------------\n" << endl;
	cout << "  |                 Clients & Commandes            (2)     |\n" << endl;
	cout << "  -----------------------------------------------------------\n" << endl;
	cout << "  |                    Fournisseurs                (3)     |\n" << endl;
	cout << "  -----------------------------------------------------------\n" << endl;
	cout << "  |                  Ateliers de travail           (4)     |\n" << endl;
	cout << "  -----------------------------------------------------------\n" << endl;
	cout << "  |                         Quitter                (5)     |\n" << endl;
	cout << " ----------------------------------------------------------\n\n" << endl;
	cout << " Donnez votre choix" << endl;
	
	cin >> choix;
    switch(choix)
	{
	case 1 :
		{
do
{ system("Color 0D");
cout<<endl<<"          Gestion d'une usine de menuiserie de bois<<GESTION DE EMPLOYE "<<endl<<endl;
cout<<"*****************************************************************************"<<endl;
cout<<"*                       1/POUR AJOUTER UN EMPLOYE                             *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                       2/POUR MODIFIER UN EMPLOYE                           *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                       3/POUR AFFICHER LES EMPLOYES                         *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                       4/POUR CHERCHER UN EMPLOYE                         *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                       5/POUR SUPPRIMER UN EMPLOYE                          *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                       6/POUR ECRIRE UN EMPLOYE  DANS UN FICHIER            *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                       7/POUR LIRE UN EMPLOYE  D'UN FICHIER                 *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                       8/     POUR RETOURNER                               *"<<endl;
cout<<"*****************************************************************************"<<endl;
cin>>c;
system("CLS");
if( c==1 )
{
	system("Color 0A");
	cin>>e;
}
if (c==2)
	e.modifier_employe();

if (c==3)

	cout<<e;

if(c==4)
	e.rechercher();
if(c==5)
	e.supprimer();

if(c==6)
{ 
	Employes::creer(fe);
	fe<<&e;
	fe.seekg(0);
}
if( c==7)
{
	  fe.open("Fichiersemployes.txt",ios::in | ios::out);
	  e.afficherfich(fe);
}

if(c==8)
goto menu;
}
while(c!=0 );
goto menu;
}		
	case 2:
{
system("Color 79");
do
{   
cout<<endl<<"          Gestion d'une usine de menuiserie de bois<<GESTION DE CLIENTS "<<endl<<endl;
cout<<"*****************************************************************************"<<endl;
cout<<"*                       1/POUR AJOUTER UN CLIENT                          *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                       2/POUR MODIFIER UN CLIENT                           *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                       3/POUR AFFICHER LES CLIENTS                        *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                       4/POUR CHERCHER UN CLIENT                        *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                       5/POUR SUPPRIMER UN CLIENT                        *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                       6/POUR ECRIRE UN CLIENT DANS UN FICHIER            *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                       7/POUR LIRE UN CLIENT D'UN FICHIER                 *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                       8/     POUR RETOURNER                               *"<<endl;
cout<<"*****************************************************************************"<<endl;
cin>>d;
system("CLS");
if( d==1 )
{
	cin>>cl;
	system("Color 0B");
}
if (d==2)
	cl.modifier();
 if (d==3)
	cout<<cl;
if(d==4)
	cl.rechercher();
if(d==5)
	cl.supprimer();
if(d==6)
{ 
	tableau_clients::creer(fc);
	fc<<&cl;
	fc.seekg(0);
}
if( d==7)
{
	  fc.open("Fichiersclients.txt",ios::in | ios::out);
	  cl.afficherfich(fc);
}

if(d==8)
goto menu;
}
while(d!=0 );
goto menu;
}		
	case 3:
{
	system("Color 7C");
do
{   
cout<<endl<<"          Gestion d'une usine de menuiserie de bois<<GESTION DE FOURNISSEURS "<<endl<<endl;
cout<<"*****************************************************************************"<<endl;
cout<<"*                       1/POUR AJOUTER UN FOURNISSEUR                       *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                       2/POUR MODIFIER UN FOURNISSEUR                       *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                       3/POUR AFFICHER LES FOURNISSEURS                      *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                       4/POUR CHERCHER UN FOURNISSEUR                       *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                       5/POUR SUPPRIMER UN FOURNISSEUR                     *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                       6/POUR ECRIRE UN FOURNISSEUR DANS UN FICHIER            *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                       7/POUR LIRE UN FOURNISSEUR D'UN FICHIER               *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                       8/     POUR RETOURNER                               *"<<endl;
cout<<"*****************************************************************************"<<endl;
cin>>x;
system("CLS");
if( x==1 )
{
	cin>>t;
	system("Color 0B");
}
if (x==2)
	t.modifier();
 if (x==3)
	cout<<t;
if(x==4)
	t.rechercher();
if(x==5)
	t.supprimer();
if(x==6)
{ 
	tableau_fournisseurs::creer(fo);
	fo<<&t;
	fo.seekg(0);
}
if( x==7)
{
	  fo.open("Fichiersfournisseurs.txt",ios::in | ios::out);
	  t.afficherfich(fo);
}

if(x==8)
goto menu;
}
while(x!=0 );
goto menu;
}		
 
 	case 4:
{
	system("Color 5F");
do
{   
cout<<endl<<"          Gestion d'une usine de menuiserie de bois<<GESTION DES ATELIERS DU TRAVAIL "<<endl<<endl;
cout<<"*****************************************************************************"<<endl;
cout<<"*                       1/POUR AJOUTER UN  ATELIER                   *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                       2/POUR AFFICHER LES ATELIERS                      *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                       3/POUR ECRIRE LES ATELIERS DANS UN FICHIER            *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                       4/POUR LIRE LES ATELIERS D'UN FICHIER               *"<<endl;
cout<<"*                                                                           *"<<endl;
cout<<"*                       5/     POUR RETOURNER                               *"<<endl;
cout<<"*****************************************************************************"<<endl;
cin>>y;
system("CLS");
if( y==1 )
{
	cin>>a;
	system("Color 0D");
}
if (y==2)
	cout<<a;
if(y==3)
{ 
	tableau_ateliers::creer(fa);
	fa<<&a;
	fa.seekg(0);
}
if( y==4)
{
	  fa.open("Fichiers_atelier.txt",ios::in | ios::out);
	  a.afficherfich(fa);
}

if(y==5)
goto menu;
}
while(y!=0 );
goto menu;
}		
	case 5 : exit(-1);
 }
 
	
}while(choix!=0);
 

	system("PAUSE");
}