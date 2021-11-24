// But : Il s’agit de réaliser un programme en C++ utilisant les fonctions compilées dans des fichiers séparés, les fichiers et 
// les vecteurs, permettant d'acheter un billet pouvant contenir une ou plusieurs combinaisons de 6 numéros compris 
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
        // Dans tous les cas le programme doit demander une année

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