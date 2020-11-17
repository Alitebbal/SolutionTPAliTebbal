// But :	   Programme qui dessine des formes aux dimensions diverses, pleines ou vides, selon les choix que l'utilisateur fait dans les menus	   
// Auteur :	   Ali Tebbal
// Date :      6 Octobre 2020


#include <iostream>		// Biblioth�que qui fournit des fonctions pour permettre la communication entre le programme et l'utilisateur
#include <time.h>		// Biblioth�que qui fournit des fonctions bas�es sur les dates et heures
#include "Menus2054583.h"		// Biblioth�que du programmeur rassemblant les fonctions permettant la gestion des menus et la validation des choix fait dans ces menus
#include "Formes2054583.h"		// Biblioth�que du programmeur offrant des fonctions permettant de dessiner diff�rentes formes, pleines ou vides
using namespace std;

int main()
{
	// D�finition des constantes 
	const int QUITTER = 6;     // Le choix maximum dans le menu 1. Pourrait changer si le programmeur ajoute une forme supppl�mentaire
	const int RETOUR = 3;     // Le choix maximum dans le menu 2. Pourrait changer si le programmeur ajoute une option supppl�mentaire

	const int RECTANGLE = 1;     // Pour faciliter la lecture du code dans le switch
	const int TRIANGLE = 2;
	const int CARRE = 3;
	const int LOSANGE = 4;
	const int PARALLELOGRAMME = 5;

	// D�finition des variables	
	int choixForme;
	int choixRemplissage;

	srand(time(NULL));	            // Permet d'initialiser le random seed
	setlocale(LC_ALL, "");            // Permet de g�rer les caract�res accentu�s

   // Afficher le menu des formes et lire un choix valide 
	choixForme = validerMenu1(1, 6); /* choix du menu des formes *, QUITTER /* Nombres d'options au menu */

	// Tant que l'utilisateur ne veut pas quitter
	while (choixForme != QUITTER)
	{
		// Afficher le menu du remplissage et lire un choix valide
		choixRemplissage = validerMenu1(1, 3); /* Menu du remplissage *, RETOUR /* Nombres d'options au menu */
	
		  // Si l'utilisateur n'est pas revenu au menu principal
				if (choixRemplissage != RETOUR)
				{
					// Ici, l'utilisateur a fait le choix d'une forme et du remplissage, il nous reste � traiter et dessiner la forme
					switch (choixForme)
					{
						// Traiter forme demande les dimensions de la forme, affiche la phrase de pr�sentation de la forme et appelle la fonction
						// dessinant la forme
					case RECTANGLE:
						traiterRectangle(choixRemplissage);
						break;
					case TRIANGLE:
						traiterTriangle(choixRemplissage);
						break;
					case CARRE:
						traiterCarre(choixRemplissage);
						break;
					case LOSANGE:
						traiterLosange(choixRemplissage);
						break; 
					case PARALLELOGRAMME:
						traiterParallelogramme(choixRemplissage);
						break;
					} // Fin du switch
				} // fin du if

			   // On pr�sente de nouveau le menu principal des choix des formes et on lit le choix de l'utilisateur
				choixForme = validerMenu1(1, 6);// Menu des formes*, QUITTER /* Nombres d'options au menu*);

	}/// Fin du while (choixForme != iQUITTER) 
	return 0;

}


