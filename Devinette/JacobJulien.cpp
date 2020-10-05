// But : Faire un programme qui choisit un nombre au hasard entre 0 et 100 (sans compter 0 et 100), L'utilisateur doit rentrer un nombre compris entre ces deux nombre, or 
// le programme demandera a l'utilisateur de changer son choix sans lui enlever une chance. Si il gagne, il le sait, si il perd, il perd des chances jusqu'� ce qu'il perde
// Auteur : Jacob Julien
// Date : 2020/10/02

#include <iostream>
#include <time.h>

using namespace std;



int main()
{
	setlocale(LC_ALL, "");

	int iRandom; // permet de m�moriser le nombre choisi al�atoirement par l�ordinateur
	srand(time(0)); // pour activer l�al�atoire dans le programme
	iRandom = rand() % 101; // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans iRandom
	int coup; //Le nombre que l'utilisateur essaie

	cout << "L'ordinateur � choisit un nombre entre 0 et 100 ! " << endl << endl << "Vous avez 5 chances!" << endl;

			
	
	// Ici je fait une boucle pour pouvoir compter le nombre de coup qu'il fait
	// A chaque coup, il v�rifie si le nombre est �gal au random, si il est dans les chiffres permis, pr�cise � l'utilisateur si le nombre est plus grand ou plus petit et efface l'historique des coups.
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
						cout << "F�licitation! Vous avez devinez le nombre! Vous �tes un sacr� chanceux!";
						return 0;
					}
					 if (coup < iRandom )
					{
						cout << "Mmm... Ce n'est pas la bonne r�ponse! La nombre � devin� est plus grand que celui entr�!" << endl;
					}
					 if (coup > iRandom )
					{
						cout << "Mmm... Ce n'est pas la bonne r�ponse! La nombre � devin� est plus petit que celui entr�!" << endl;
					}
					system("pause");
					system("cls");
					cout << "L'ordinateur � choisit un nombre entre 0 et 100 ! " << endl << "Plus que 4 chances!" << endl;
				}
				else
				{
					cout << "Le nombre que vous avez entr� n'est pas entre 0 et 100. Veuillez r�essayer. " << endl;

					compteur--;
				}
				
				
				}
			else if (compteur == 2)
			{
				cout << "Ceci est votre deuxi�me essai! : ";
				cin >> coup;
				cout << endl;
				if (coup > 0 && coup < 100)
				{
					if (coup == iRandom)
					{
						cout << "F�licitation! Vous avez devinez le nombre! Vous �tes un sacr� chanceux!";
						return 0;
					}
					if (coup < iRandom )
					{
						cout << "Mmm... Ce n'est pas la bonne r�ponse! La nombre � devin� est plus grand que celui entr�!" << endl;
					}
					if (coup > iRandom )
					{
						cout << "Mmm... Ce n'est pas la bonne r�ponse! La nombre � devin� est plus petit que celui entr�!" << endl;
					}
					system("pause");
					system("cls");
					cout << "L'ordinateur � choisit un nombre entre 0 et 100 ! " << endl << "Plus que 3 chances!" << endl;
				}
				else
				{
					cout << "Le nombre que vous avez entr� n'est pas entre 0 et 100. Veuillez r�essayer. " << endl;

					compteur--;
				}
			}
				else if (compteur == 3)
				{
					cout << "Ceci est votre troisi�me essai! : ";
					cin >> coup;
					cout << endl;
					if (coup > 0 && coup < 100)
					{ 
					if (coup == iRandom)
					{
						cout << "F�licitation! Vous avez devinez le nombre! Vous �tes un sacr� chanceux!";
						return 0;
					}
					if (coup < iRandom)
					{
						cout << "Mmm... Ce n'est pas la bonne r�ponse! La nombre � devin� est plus grand que celui entr�!" << endl;
					}
					if (coup > iRandom)
					{
						cout << "Mmm... Ce n'est pas la bonne r�ponse! La nombre � devin� est plus petit que celui entr�!" << endl;
					}
					system("pause");
					system("cls");
					cout << "L'ordinateur � choisit un nombre entre 0 et 100 ! " << endl << "Plus que 2 chances!" << endl;
					}
					else
					{
						cout << "Le nombre que vous avez entr� n'est pas entre 0 et 100. Veuillez r�essayer. " << endl;

						compteur--;
					}
				}
				else if (compteur == 4)
				{
					cout << "Ceci est votre quatri�me essai! : ";
					cin >> coup;
					cout << endl;
					if (coup > 0 && coup < 100)
					{ 
					if (coup == iRandom)
					{
						cout << "F�licitation! Vous avez devinez le nombre! Vous �tes un sacr� chanceux!";
						return 0;
					}
					if (coup < iRandom)
					{
						cout << "Mmm... Ce n'est pas la bonne r�ponse! La nombre � devin� est plus grand que celui entr�!" << endl;
					}
					if (coup > iRandom)
					{
						cout << "Mmm... Ce n'est pas la bonne r�ponse! La nombre � devin� est plus petit que celui entr�!" << endl;
					}
					system("pause");
					system("cls");
					cout << "L'ordinateur � choisit un nombre entre 0 et 100 ! " << endl << "Plus que 1 chances!" << endl;
					}
					else
					{
						cout << "Le nombre que vous avez entr� n'est pas entre 0 et 100. Veuillez r�essayer. " << endl;

						compteur--;
					}

				}
				else if (compteur == 5)
				{
					cout << "Ceci est votre cinqui�me et dernier essai! : " ;
					cin >> coup;
					cout << endl << endl;
					if (coup > 0 && coup < 100)
					{ 
					if (coup == iRandom)
					{
						cout << "F�licitation! Vous avez devinez le nombre! Vous �tes un sacr� chanceux!";
						return 0;
					}
					if (coup < iRandom)
					{
						cout << "Mmm... Ce n'est pas la bonne r�ponse! La nombre � devin� �tait plus grand que celui entr�!" << endl;
					}
					if (coup > iRandom)
					{
						cout << "Mmm... Ce n'est pas la bonne r�ponse! La nombre � devin� �tait plus petit que celui entr�!" << endl;
					}
					system("pause");
					system("cls");
					cout << "L'ordinateur � choisit un nombre entre 0 et 100 !" << endl << endl;
					}
					else
					{
						cout << "Le nombre que vous avez entr� n'est pas entre 0 et 100. Veuillez r�essayer. " << endl;

						compteur--;
					}
				}


			}

			cout << "Vous avez perdu! Meilleur chance la prochaine fois!" << endl << endl;

			return 0;

}


// Test
/*
	nbr lanc�		random			coup		r�sultat
	1				76				24			Mauvaise r�ponse, 4 coup restant, r�ponse plus grande
	2				76				-4			Le nombre n'est pas entre 0 et 100, r�essayer. C'est vous deuxieme coup!
	2 (selon ordi)	76				5			Mauvaise r�ponse, 3 coup restant, r�ponse plus grande!


*/