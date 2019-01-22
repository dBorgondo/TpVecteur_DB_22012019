#include "vecteur.h"

tVecteur sommeVecteur(tVecteur Vecteur1, tVecteur Vecteur2){
    tVecteur Somme;
    Somme.nX=Vecteur1.nX+Vecteur2.nX;
    Somme.nY=Vecteur1.nY+Vecteur2.nY;
    return Somme;
}

tVecteur soustractionVecteur(tVecteur Vecteur1, tVecteur Vecteur2){
    tVecteur Soustraction;
    Soustraction.nX=Vecteur1.nX-Vecteur2.nX;
    Soustraction.nY=Vecteur1.nY-Vecteur2.nY;
    return Soustraction;
}

tVecteur vecteurScalaire(tVecteur Vecteur1,int nScalaire){
    tVecteur returnedVecteur;
    returnedVecteur.nX=Vecteur1.nX*nScalaire;
    returnedVecteur.nY=Vecteur1.nY*nScalaire;
    return returnedVecteur;
}

int produitScalaire(tVecteur Vecteur1,tVecteur Vecteur2){
    return (Vecteur1.nX*Vecteur2.nX)+(Vecteur1.nY*Vecteur2.nY);
}

tVecteur produitVectoriel(tVecteur Vecteur1,tVecteur Vecteur2){
    tVecteur Produit;
    Produit.nX=((Vecteur1.nY*Z)-(Z*Vecteur2.nY));
    Produit.nY=((Z*Vecteur2.nX)-(Vecteur1.nX*Z));
    return Produit;
}
