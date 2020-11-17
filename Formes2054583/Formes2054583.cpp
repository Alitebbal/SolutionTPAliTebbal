#include "Formes2054583.h"
#include <string>
#include "Labo06Fonctions.h"
#include <iostream>
#include <time.h>
#include "Menus2054583.h"
using namespace std;

// La fonction pour tracer le rectangle
int traiterRectangle(int choixRemplissage)
{
	// Déclaration des variables
	int largeur;
	int hauteur;
	// On demande les informations nécessaires
	cout << " Indiquez la largeur : ";  
	 largeur = saisirEntier(); // On appelle cette fonction pour éviter que le programme plante quand l'utilisateur entre une chaîne de caractères ou autre chose qu'un entier
		cout << " Indiquez la hauteur : ";
		 hauteur = saisirEntier();
		 system("cls");
		// Si l'utilisateur choisit le choix : Plein
	if (choixRemplissage == 1)
	{
		cout << " Voici le rectangle  plein  de " << largeur << " x " << hauteur << endl;
        for (int l = 1; l <= hauteur; l++)
		{
			for (int h = 1; h <= largeur; h++)
			{
				if ( l==1 || h==1 || l==hauteur || h==largeur ) // le programme dessine une étoite juste quand les 4 conditions sont réspectées
					cout << "*";  
				else                  // Sinon le programme dessine un #
					cout <<"#";
			}     
		       cout << "\n";
		}
			
    }  
	// Si l'utilisateur choisit le choix : Vide
	else
	{
		cout << " Voici le rectangle vide  de " << largeur << " x " << hauteur << endl;
		for (int l = 1; l <= largeur; l++)
		{
			for (int h = 1; h <= hauteur; h++)
			{   
				if ( l == 1 || h == 1 || l == largeur ||h == hauteur) // le programme dessine une étoite juste quand les 4 conditions sont réspectées
					cout <<"*";
				else                   // Sinon le programme dessine rien
					cout <<" ";
			}
			cout << "\n"; 
		}
	}
	system("pause"); //Pour laisser le temps à l'utilisateur de lire.

    return 0;
}

// La fonction pour tracer les triangles
int traiterTriangle(int choixRemplissage)
{
	// Déclaration des variables
	int random;
	int hauteur;
	char carac;
	// On demande les informations nécessaires
	cout << " Indiquez la hauteur : ";
	hauteur = saisirEntier(); // On appelle cette fonction pour éviter que le programme plante quand l'utilisateur entre une chaîne de caractères ou autre chose qu'un entier
	// Pour avoir un nombre aléatoire entre 1 et 4
	srand(time(0));
	random = rand() % 4 + 1;
	system("cls"); // Pour nettoyer l'écran
	cout << " Voici le triangle  plein de hauteur de " << hauteur << endl;
	if (choixRemplissage == 1) // Si l'utilisateur choisit le choix : Plein
	{
		// Si le nombre aléatoire et de 1
		if (random == 1)
		{
			for (int cpt = 0; cpt < hauteur; cpt++)   // Pour tracer les lignes
			{
				for (int i = 0; i <= cpt; i++)   // pour tracer les colonnes
				{
						cout << "*";
				}
				cout << "\n"; // le programme saute une ligne après chaque itération de la premiere boucle
			}
		}
		if (random == 2)
		{ // Si le nombre aléatoire et de 2
			for (int cpt = hauteur; cpt >= 1; cpt--) // On inverse la boucle 
			{
				for (int i = cpt; i > 0; i --) 
				{
						cout << "*";
				}
				cout << "\n";
			}
		}
		if (random == 3)
		{ // Si le nombre aléatoire et de 3
			for (int cpt = 0; cpt < hauteur; cpt++)
			{
				for (int s = hauteur - cpt; s > 0; s--)
				{
					cout << " ";
				}
				for (int i = 0; i <= cpt; i++)
				{
						cout << "*";
				}
				cout << "\n"; // le programme saute une ligne après chaque itération de la premiere boucle
			}
		}
		if (random == 4)
		{ // Si le nombre aléatoire et de 4
			for (int cpt = 0; cpt < hauteur; cpt++)
			{
				for (int s = hauteur - cpt; s > 0; s--)
				{
					cout << " ";
				}
				for (int i = cpt; i > 0 - cpt; i--)
				{
						cout << "*";
				}
				cout << "\n"; 
			}
		}
	}
	else  // Si l'utilisateur choisit le choix : vide
	{
		if (random == 1)
		{ // Si le nombre aléatoire et de 1

			for (int cpt = 0; cpt <= hauteur; cpt++)  // Pour tracer les lignes
			{
				for (int i = 0; i <= cpt; i++)
				{
					if (i == cpt || cpt == hauteur || i == 0) // le programme dessine une étoite juste quand les 3 conditions sont réspectées
						cout << "*";
					else                           // Sinon le programme dessine rien
						cout << " ";
				}

				cout << "\n";  // le programme saute une ligne après chaque itération de la premiere boucle
			} 

		}
		if (random == 2)
		{ // Si le nombre aléatoire et de 2
			for (int cpt = 0; cpt <= hauteur; cpt++)
			{
				for (int i = 0; i <= cpt; i++)
				{
					if (i == cpt || cpt == hauteur || i == 0)
						cout << "*";
					else
						cout << " ";
				}

				cout << "\n";
			}
		}
		if (random == 3)
		{ // Si le nombre aléatoire et de 3
			for (int cpt = 0; cpt <= hauteur; cpt++)
			{
				for (int i = 0; i <= cpt; i++)
				{
					if (i == cpt || cpt == hauteur || i == 0)
						cout << "*";
					else
						cout << " ";
				}

				cout << "\n";
			}
		}
		if (random == 4)
		{ // Si le nombre aléatoire et de 4
			for (int cpt = 0; cpt <= hauteur; cpt++)
			{
				for (int i = 0; i <= cpt; i++)
				{
					if (i == cpt || cpt == hauteur || i == 0)
						cout << "*";
					else
						cout << " ";
				}

				cout << "\n";
			}

		}

	}
	cout << endl;
	system("pause"); // Pour mettre une pause
	return 0;
}
	

int traiterCarre(int choixRemplissage)
{
	// Déclaration des variables
	int hauteur;
	int largeur;
	// On demande les informations nécessaires
	cout << " Indiquez la hauteur : ";
			hauteur = saisirEntier(); // On appelle cette fonction pour éviter que le programme plante quand l'utilisateur entre une chaîne de caractères ou autre chose qu'un entier
			largeur = hauteur;
			system("cls"); // Pour nettoyer l'écran
		if (choixRemplissage == 1) // Si l'utilisateur choisit le choix : Plein
		{
			cout << " Voici le carré  plein  de " << largeur << " x " << hauteur << endl;
			for (int l = 1; l <= hauteur; l++)  // Pour tracer les lignes 
			{
				for (int h = 1; h <= largeur; h++) // Pour tracer la largeur
				{
					if (l == 1 || h == 1 || l == hauteur || h == largeur) // le programme dessine une étoite juste quand les 4 conditions sont réspectées
						cout << "*";
					else                  // Sinon le programme dessine un #
						cout << "#";
				}
				cout << "\n"; // le programme saute une ligne après chaque itération de la premiere boucle
			}
			
		}
		else // Si l'utilisateur choisit le choix : Plein
		{
			cout << " Voici le carré vide de " << largeur << " x " << hauteur << endl;
			for (int l = 1; l <= largeur; l++) 
			{
				for (int h = 1; h <= hauteur; h++)
				{
					if (l == 1 || h == 1 || h == hauteur|| l == largeur)   // le programme dessine une étoite juste quand les 4 conditions sont réspectées
						cout << "*";
					else                     // Sinon le programme dessine rien
						cout << " ";  
				}
				cout << "\n";
			}
		}
		system("pause"); //Pour laisser le temps à l'utilisateur de lire.
	return 0;
}

int traiterLosange(int choixRemplissage)
{
	int hauteur;
	// On demande les informations nécessaires
	cout << " Indiquez la hauteur : ";
	hauteur = saisirEntier();
	system("cls"); // Pour nettoyer l'écran
	if (choixRemplissage == 1) // Si l'utilisateur choisit le choix : Plein
	{
		
		for (int cpt = 0; cpt < hauteur; cpt++ ) 
		{
			for ( int i = 0; i < cpt; i++)
			{
               cout << "* " << endl;
			}
			
		}
	}
	else  // Si l'utilisateur choisit le choix : Vide
	{
		for (int cpt = 0; cpt < hauteur; cpt++)
		{
			cout << "*" << endl;
		}
	}

	system("pause"); //Pour laisser le temps à l'utilisateur de lire.
	return 0;
}

int traiterParallelogramme(int choixRemplissage)
{
	// Déclaration des variables
	int hauteur;
	// On demande les informations nécessaires
	cout << " Indiquez la hauteur : ";
	hauteur = saisirEntier();
	system("cls");
	if (choixRemplissage == 1) // Si l'utilisateur choisit le choix : Plein
	{
		for (int cpt = 1; cpt <= hauteur; cpt++)   // Pour tracer les lignes
		{
			for (int j = 1; j <= (hauteur - cpt); ++j)
				cout << " ";
			if (cpt == 1 || cpt == hauteur)
				for (int k = 1; k <= hauteur; ++k)
					cout << "*";
			else
				for (int i = 1; i <= hauteur; i++)
				{
					if (i == 1 || i == hauteur)
						cout << "*";
					else cout << "#";
				}
			cout << endl;

		}
	}
	else // Si l'utilisateur choisit le choix : Vide
	{
		for (int cpt = 1; cpt <= hauteur; cpt++)  // Pour tracer les lignes
		{
			for (int j = 1; j <= (hauteur - cpt); j++)
				cout << " ";
			if (cpt == 1 || cpt == hauteur)
				for (int k = 1; k <= hauteur; k++)
					cout << "*";
			else
				for (int i = 1; i <= hauteur; i++)
				{
					if (i == 1 || i == hauteur) 
						cout << "*";
					else cout << " ";
				}
			cout << endl;

		}
	}

	system("pause"); //Pour laisser le temps à l'utilisateur de lire.
	return 0;
}
