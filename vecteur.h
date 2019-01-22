#ifndef VECTEUR_H_INCLUDED
#define VECTEUR_H_INCLUDED
#define Z 1
typedef struct tVecteur{
    int nX;
    int nY;
}tVecteur;

extern tVecteur sommeVecteur(tVecteur Vecteur1, tVecteur Vecteur2);
extern tVecteur soustractionVecteur(tVecteur Vecteur1, tVecteur Vecteur2);
extern tVecteur vecteurScalaire(tVecteur Vecteur1,int nScalaire);
extern int produitScalaire(tVecteur Vecteur1,tVecteur Vecteur2);
extern tVecteur produitVectoriel(tVecteur Vecteur1,tVecteur Vecteur2);



#endif // VECTEUR_H_INCLUDED
