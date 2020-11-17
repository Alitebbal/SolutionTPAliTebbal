#include "Menus2054583.h"
#include "Labo06Fonctions.h"
#include <iostream>
//#include "Labo06Fonctions.h"
#include <string>
using namespace std;

void afficherMenu1()
{
	    cout << " 1. Rectangle " << endl;
		cout << " 2. Triangle " << endl;
		cout << " 3. Carré " << endl;
		cout << " 4. Losange " << endl;
		cout << " 5. Parallelogramme " << endl;
		cout << " 6. Quitter " << endl;
		cout << " Votre Choix-- > " ;
	
}

void afficherMenu2()
{
	    cout << " 1. Forme pleine " << endl;
		cout << " 2. Forme vide " << endl;
		cout << " 3. Retour au menu précédent " << endl;
		cout << " Votre Choix-- > ";

}

int validerMenu1(int min, int max)
{
	if (min == 1 && max == 6) 
	{
		system("cls"); // Nettoyer l'écran
		int choixFormes;
		cout << " Choisissez la forme " << endl;
		afficherMenu1();  // On appelle cette fonction pour afficher le premier menu
		choixFormes = saisirEntier(); // On appelle cette fonction pour éviter que le programme plante quand l'utilisateur entre une chaîne de caractères ou autre chose qu'un entier

		// Pour valider le choix de l'utilisateur est entre le min et max, on utilise une boucle While
		while ((!(choixFormes >= min && choixFormes <= max)))
		{
			cout << " Erreur : Veuillez entrez un nombre entre 1 et 6 " << endl;
			system("pause");
			system("cls");
			cout << " Choisissez la forme " << endl;
			afficherMenu1(); // On appelle cette fonction pour afficher le premier menu
			choixFormes = saisirEntier(); // On appelle cette fonction pour éviter que le programme plante quand l'utilisateur entre une chaîne de caractères ou autre chose qu'un entier
		}
		return choixFormes; // On retourne la variable choixFormes
	}
	else
	{
		system("cls");
		// Déclaration des variables
		int choixRemplissage; 
		cout << " Choisissez le remplissage " << endl;
		afficherMenu2(); // On appelle cette fonction pour afficher le deuxième menu
		choixRemplissage = saisirEntier(); // On appelle cette fonction pour éviter que le programme plante quand l'utilisateur entre une chaîne de caractères ou autre chose qu'un entier

		// Pour valider le choix de l'utilisateur est entre le min et max, on utilise une boucle While
		while (choixRemplissage < min || choixRemplissage > max)
		{
			cout << " Erreur : Veuillez entrez un nombre entre 1 et 3" << endl;
			system("pause");
			system("cls");
			cout << " Choisissez le remplissage " << endl;
			afficherMenu2();
			choixRemplissage = saisirEntier();
		}
	
	return choixRemplissage; // On retourne la variable choixRemplissage
    }

	return 0;
}