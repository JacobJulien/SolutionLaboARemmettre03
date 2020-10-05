// But : Faire un programme qui choisit un nombre au hasard entre 0 et 100 (sans compter 0 et 100), L'utilisateur doit rentrer un nombre compris entre ces deux nombre, or 
// le programme demandera a l'utilisateur de changer son choix sans lui enlever une chance. Si il gagne, il le sait, si il perd, il perd des chances jusqu'à ce qu'il perde
// Auteur : Jacob Julien
// Date : 2020/10/02

#include <iostream>
#include <time.h>

using namespace std;



int main()
{
	setlocale(LC_ALL, "");

	int iRandom; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
	srand(time(0)); // pour activer l’aléatoire dans le programme
	iRandom = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom
	int coup; //Le nombre que l'utilisateur essaie

	cout << "L'ordinateur à choisit un nombre entre 0 et 100 ! " << endl << endl << "Vous avez 5 chances!" << endl;

			
	
	// Ici je fait une boucle pour pouvoir compter le nombre de coup qu'il fait
	// A chaque coup, il vérifie si le nombre est égal au random, si il est dans les chiffres permis, précise à l'utilisateur si le nombre est plus grand ou plus petit et efface l'historique des coups.
		for (int compteur = 1; compteur <= 5; compteur++)
			{
			if (compteur == 1)
			{

				cout << "Ceci est votre premier essai! Bonne chance! : ";
				cin >> coup;
				cout << endl;
				if (coup >0 && coup < 100)
				{ 
					 if (coup == iRandom)
					{
						cout << "Félicitation! Vous avez devinez le nombre! Vous êtes un sacré chanceux!";
						return 0;
					}
					 if (coup < iRandom )
					{
						cout << "Mmm... Ce n'est pas la bonne réponse! La nombre à deviné est plus grand que celui entré!" << endl;
					}
					 if (coup > iRandom )
					{
						cout << "Mmm... Ce n'est pas la bonne réponse! La nombre à deviné est plus petit que celui entré!" << endl;
					}
					system("pause");
					system("cls");
					cout << "L'ordinateur à choisit un nombre entre 0 et 100 ! " << endl << "Plus que 4 chances!" << endl;
				}
				else
				{
					cout << "Le nombre que vous avez entré n'est pas entre 0 et 100. Veuillez réessayer. " << endl;

					compteur--;
				}
				
				
				}
			else if (compteur == 2)
			{
				cout << "Ceci est votre deuxième essai! : ";
				cin >> coup;
				cout << endl;
				if (coup > 0 && coup < 100)
				{
					if (coup == iRandom)
					{
						cout << "Félicitation! Vous avez devinez le nombre! Vous êtes un sacré chanceux!";
						return 0;
					}
					if (coup < iRandom )
					{
						cout << "Mmm... Ce n'est pas la bonne réponse! La nombre à deviné est plus grand que celui entré!" << endl;
					}
					if (coup > iRandom )
					{
						cout << "Mmm... Ce n'est pas la bonne réponse! La nombre à deviné est plus petit que celui entré!" << endl;
					}
					system("pause");
					system("cls");
					cout << "L'ordinateur à choisit un nombre entre 0 et 100 ! " << endl << "Plus que 3 chances!" << endl;
				}
				else
				{
					cout << "Le nombre que vous avez entré n'est pas entre 0 et 100. Veuillez réessayer. " << endl;

					compteur--;
				}
			}
				else if (compteur == 3)
				{
					cout << "Ceci est votre troisième essai! : ";
					cin >> coup;
					cout << endl;
					if (coup > 0 && coup < 100)
					{ 
					if (coup == iRandom)
					{
						cout << "Félicitation! Vous avez devinez le nombre! Vous êtes un sacré chanceux!";
						return 0;
					}
					if (coup < iRandom)
					{
						cout << "Mmm... Ce n'est pas la bonne réponse! La nombre à deviné est plus grand que celui entré!" << endl;
					}
					if (coup > iRandom)
					{
						cout << "Mmm... Ce n'est pas la bonne réponse! La nombre à deviné est plus petit que celui entré!" << endl;
					}
					system("pause");
					system("cls");
					cout << "L'ordinateur à choisit un nombre entre 0 et 100 ! " << endl << "Plus que 2 chances!" << endl;
					}
					else
					{
						cout << "Le nombre que vous avez entré n'est pas entre 0 et 100. Veuillez réessayer. " << endl;

						compteur--;
					}
				}
				else if (compteur == 4)
				{
					cout << "Ceci est votre quatrième essai! : ";
					cin >> coup;
					cout << endl;
					if (coup > 0 && coup < 100)
					{ 
					if (coup == iRandom)
					{
						cout << "Félicitation! Vous avez devinez le nombre! Vous êtes un sacré chanceux!";
						return 0;
					}
					if (coup < iRandom)
					{
						cout << "Mmm... Ce n'est pas la bonne réponse! La nombre à deviné est plus grand que celui entré!" << endl;
					}
					if (coup > iRandom)
					{
						cout << "Mmm... Ce n'est pas la bonne réponse! La nombre à deviné est plus petit que celui entré!" << endl;
					}
					system("pause");
					system("cls");
					cout << "L'ordinateur à choisit un nombre entre 0 et 100 ! " << endl << "Plus que 1 chances!" << endl;
					}
					else
					{
						cout << "Le nombre que vous avez entré n'est pas entre 0 et 100. Veuillez réessayer. " << endl;

						compteur--;
					}

				}
				else if (compteur == 5)
				{
					cout << "Ceci est votre cinquième et dernier essai! : " ;
					cin >> coup;
					cout << endl << endl;
					if (coup > 0 && coup < 100)
					{ 
					if (coup == iRandom)
					{
						cout << "Félicitation! Vous avez devinez le nombre! Vous êtes un sacré chanceux!";
						return 0;
					}
					if (coup < iRandom)
					{
						cout << "Mmm... Ce n'est pas la bonne réponse! La nombre à deviné était plus grand que celui entré!" << endl;
					}
					if (coup > iRandom)
					{
						cout << "Mmm... Ce n'est pas la bonne réponse! La nombre à deviné était plus petit que celui entré!" << endl;
					}
					system("pause");
					system("cls");
					cout << "L'ordinateur à choisit un nombre entre 0 et 100 !" << endl << endl;
					}
					else
					{
						cout << "Le nombre que vous avez entré n'est pas entre 0 et 100. Veuillez réessayer. " << endl;

						compteur--;
					}
				}


			}

			cout << "Vous avez perdu! Meilleur chance la prochaine fois!" << endl << endl;

			return 0;

}


// Test
/*
	nbr lancé		random			coup		résultat
	1				76				24			Mauvaise réponse, 4 coup restant, réponse plus grande
	2				76				-4			Le nombre n'est pas entre 0 et 100, réessayer. C'est vous deuxieme coup!
	2 (selon ordi)	76				5			Mauvaise réponse, 3 coup restant, réponse plus grande!


*/