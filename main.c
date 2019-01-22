#include <stdio.h>
#include <stdlib.h>
#include "vecteur.h"
int main()
{
    tVecteur Vecteur1;
    tVecteur Vecteur2;
    tVecteur Vecteur3;
    tVecteur Vecteur4;
    tVecteur Vecteur5;
    tVecteur Vecteur6;
    Vecteur1.nX=1;
    Vecteur1.nY=2;
    Vecteur2.nX=3;
    Vecteur2.nY=4;
    Vecteur3=sommeVecteur(Vecteur1,Vecteur2);
    printf("Somme :\nx:%d, y:%d \n",Vecteur3.nX,Vecteur3.nY);
    Vecteur4=soustractionVecteur(Vecteur1,Vecteur2);
    printf("Soustraction:\n%d, %d \n",Vecteur4.nX,Vecteur4.nY);
    Vecteur5=vecteurScalaire(Vecteur2,5);
    printf("Multiplicateur par scalaire:\n%d, %d \n",Vecteur5.nX,Vecteur5.nY);
    printf("Produit Scalaire:\n%d\n",produitScalaire(Vecteur1,Vecteur2));
    Vecteur6=(produitVectoriel(Vecteur1,Vecteur2));
    printf("Produit Vectoriel:\n%d, %d \n",Vecteur6.nX,Vecteur6.nY);
}

