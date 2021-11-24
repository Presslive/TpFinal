#include "TPFinal2043337.h"

void afficherMenu()
{
	char motif = '-';
	char motif2 = ' ';

	int largeur = 44;

	string Titre1 = "LOTO DU BONHEUR";
	string Titre2 = " Pr�sent� par Diallo Abdoulaye";
		
		cout << setfill(motif) << setw(largeur) << "" << endl;		//affichage de 44 ('-')
		cout << setfill(motif2) << setw((largeur - Titre1.length()) / 2)			//centrer titre 1 avec des extremiter 
		<< "" << Titre1 << setfill(motif2) << setw((largeur - Titre1.length()) / 2)<< endl; //(44 - longeur du texte/2)

		cout << setfill(motif2) << setw((largeur - Titre2.length()) / 2)			//centrer titre 1 avec des extremiter
			<< "" << Titre2 << setfill(motif2) << setw((largeur - Titre2.length()) / 2) << endl;

		cout << setfill(motif) << setw(largeur) << "" << endl << endl;		//affichage de 44 ('-')

		cout << "1. Acheter un billet" << endl;
		cout << "2. Afficher un billet" << endl;
		cout << "3. Valider un billet" << endl;
		cout << "0. Quitter le programme" << endl << endl;

		cout << setfill(motif) << setw(largeur) << "" << endl;		//affichage de 44 ('-')
		cout << "Veuillez entrer votre choix --> ";


}

int validerChoixMenu(int min, int max)
{
	string selection; //le input
	char selectionEnEntier;

	getline(cin, selection, '\n');

	while (!etreUnNombre(selection) || stoi(selection) < min || stoi(selection) > max)	//Pour confirmation des contraintes dans 
																								//la fonction etreUnNombre()
	{
		cout << "Erreur : On vous demande un nombre entier." << endl;			//si c'est different des contraintes affiche l'erreur
		cout << "Veuillez entrer un nombre entier compris entre 0 et 3 " << endl;
		system("pause");

		// On utilise getline pour �tre s�r que tout ce que l'utilisateur tape au clavier soit bien retir� de la m�moire du clavier
		//Reaffiche le menu
		cout << "Veuillez entrer votre choix --> ";
		getline(cin, selection, '\n');
	}

	selectionEnEntier = selection.at(0);
										 //at(0) parceque sa doit etre 1 � 5 seulement
	return selectionEnEntier;
}

bool etreUnNombre(string selection)
{
	// Est-ce que clavier commence par un chiffre
	//Contraintes
	if (selection.at(0) > '0' && selection[0] <= '9')	//premier chiffre rentrer par l'utilisateur
	{
		return true;
	}
	else if (selection.front() == '-' && selection.at(1) >= '0' && selection[1] <= '9')
	{
		return true;
	}
	else
	{
		return false;	//le reste les lettres(a v b etc...) et les char accentue ( � / & etc...)
	}

	
}

void creerFichierBillet()
{	
	
	string nomFichier = DemanderNomJoueur();

	ofstream canalSortie;
	
	canalSortie.open(nomFichier, ios::out);

	if (!canalSortie)
	{
		cerr << "Erreur : Le fichier " << nomFichier << " n'a pas pu �tre cr��. V�rifiez l'espace disque ou vos droits d'acc�s." << endl;
		system("pause");
		exit(505);
	}
	canalSortie;
}

string DemanderNomJoueur()
{
	string nomFichier;

	system("cls");
	cout << "Entrez le nom du joueur --> ";
	getline(cin, nomFichier, '\n');
	return nomFichier;
}






