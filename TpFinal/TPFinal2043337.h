#pragma once


// Les includes des autres bibliothèques
#include <iostream>
#include <fstream>         // Bibliothèque offrant les outils pour utiliser les fichiers : f : pour file et stream pour le flux
                           // Quand on lit des données dans un fichier, c'est un flux input (in) l'équivalent du cin, qui va du disque dur vers la mémoire
                           // Quand on sauvegarde des données dans un fichier, c'est un flux en sortie (cout), qui va de la mémoire vers le disque dur
#include <string>
#include <iomanip>

using namespace std;




 void afficherMenu();
 int validerChoixMenu(int min, int max);
 bool etreUnNombre(string selection);
 void creerFichierBillet();
 string DemanderNomJoueur();