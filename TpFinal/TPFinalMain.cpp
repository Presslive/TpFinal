// But : Il s�agit de r�aliser un programme en C++ utilisant les fonctions compil�es dans des fichiers s�par�s, les fichiers et 
// les vecteurs, permettant d'acheter un billet pouvant contenir une ou plusieurs combinaisons de 6 num�ros compris 
// entre 1 et 49. 
// Auteur : Karine Moreau
// Date : 2021-11-15

#include "TPFinal2043337.h"

int main()
{
	setlocale(LC_ALL, "");


	afficherMenu();

    int choix = validerChoixMenu(0, 3);

    while (choix != '5')
    {
        // Dans tous les cas le programme doit demander une ann�e

        if (choix != 0)

            // Selon le choix que l'utilisateur a fait, le programme appelle la bonne fonction
            switch (choix)
            {
            case '1':
                DemanderNomJoueur();
                break;
            case '2':
                DemanderNomJoueur();


                break;
            case '3':
                DemanderNomJoueur();


                break;

            }
        afficherMenu();
        choix = validerChoixMenu(0, 3);
    }
}