// But : ecrire un programme qui affiche a l'ecran et apprendre a gerer les version du code avec l'application git et de le puplier dans le nuage avec git hub 
// Auteur : Benjamin Lemire      
// Date : 2020-09-03

#include<iostream>;
using namespace std;

int main()
{


   for (int a = 0; a < 1;)
   {
      int i;

      cout << "Veuillez entre un nombre entre 0 et 10 : ";
      cin >> i;

      if (i >= 0 && i <= 10)
      {
         cout << "Bonne reponse";
         a++;
      }
      else
      {
         cout << "Mauvaise reponse " ;
      }
   }

   return 0;
}