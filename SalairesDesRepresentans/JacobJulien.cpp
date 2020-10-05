// But : Programmer un programme qui entre les ventes brutes hebdomadaires de chaque repr�sentant  et qui calcule et affiche son salaire.
// Les repr�sentants re�oivent 250$ par SEMAINE ET ++ 7.5% de leurs vente brutes par SEMAINE.
// Date : 2020/10/02
// Auteur : Jacob Julien


#include <iostream>

using namespace std;			// Pour �viter d'�crire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables
	float salaire; // J'injecte le 250 dans une variable pour pouvoir la changer facilement plus tard.
	float surplus; // Le bonus, soit, � l'heure actuel, 7.5%. Encore, pour pouvoir la changer facilement plus tard.
	float ventes; // Montant des ventes par repr�sentant.
	int choix;    // Pour effacer l'historique. 

	//Initialisation des variables. 
	salaire = 250;   //Salaire de base par semaine
	surplus = 0.075; //(pour 7.5 %)
	ventes = 0;		// Valeur de base de vente pour pouvoir entrer dans la while;

	//Demander � l'utilisateur le total des vente
	cout << "Bonjour." << endl << "Veuillez entrer le montant total des ventes du repr�sentant : ";
	// On enregistre sa r�ponse pour plus tard dans nos calcules
	cin >> ventes;
	// On dit de faire le calcules et d'afficher ce que le calcules donnera comme r�ponse.
	cout << "Le salaire du repr�sentant cette semaine sera de : " << salaire + (surplus * ventes) << endl;

	//Boucle qui recommence � l'infinie jusqu'� ce que la condition ne soit plus vrai, alors on fermera le programme
	while (!(ventes == -1))
	{
		
		cout << "D�sirez-vous effacer l'historique ? (1.OUI 2.NON : "; //On pose la question si il veut effacer l'historique ou pas, sinon on continue.
		cin >> choix; // On enregistre sa r�ponse pour savoir si on efface ou non
		if (choix == 1) // Si il d�cide d'effacer, alors on fait ceci
		{
		system("cls"); //Commande pour effacer tout ce qui est dans la console
		}
		else //si non, on fait rien
		{ }

		
		cout << endl << "Veuillez entrer le montant total des ventes du repr�sentant : ";
		cin >> ventes;
		cout << "Le salaire du repr�sentant cette semaine sera de : " << salaire + (surplus * ventes) << endl;
		

		
					
		



	}











	return 0;
}