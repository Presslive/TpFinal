#pragma once


// Les includes des autres biblioth�ques
#include <iostream>
#include <fstream>         // Biblioth�que offrant les outils pour utiliser les fichiers : f : pour file et stream pour le flux
                           // Quand on lit des donn�es dans un fichier, c'est un flux input (in) l'�quivalent du cin, qui va du disque dur vers la m�moire
                           // Quand on sauvegarde des donn�es dans un fichier, c'est un flux en sortie (cout), qui va de la m�moire vers le disque dur
#include <string>
#include <iomanip>

using namespace std;




 void afficherMenu();
 int validerChoixMenu(int min, int max);
 bool etreUnNombre(string selection);
 void creerFichierBillet();
 string DemanderNomJoueur();