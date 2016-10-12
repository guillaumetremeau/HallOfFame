#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX 50

struct donnee{
	int score;
	char jeu[100];
	char alias[40];
};
typedef struct donnee donnee_t;

void afficherDonnee(FILE * out, donnee_t d);
void saisirDonnee(donnee_t *);

int taille;

int main(){
	donnee_t tab[TAILLE_MAX];
	struct donnee d2;
	donnee_t d1;
	int nbSaisie = 0, i;

	printf("taille donnee : %d\n",(int)sizeof(donnee_t));
	printf("taille int : %d\n\n",(int)sizeof(int));

	saisirDonnee(&d1);
	afficherDonnee(stdout,d1);
	
	printf("\nCombien de données voulez-vous saisir (max 50) ? ");
	scanf("%d",&nbSaisie);
	for(i=0;i<nbSaisie;i++){
		saisirDonnee(*tab[i]);
	}
	return 0;
}


void afficherDonnee(FILE * out,donnee_t d){
	fprintf(out,"{score : %d, jeu : %s, alias %s}\n",d.score,d.jeu,d.alias);
}

void saisirDonnee(donnee_t * d){
	printf("score : ");
	scanf("%d",&d->score);
	printf("jeu : ");
	scanf("%s",d->jeu);
	printf("alias : ");
	scanf("%s",d->alias);
}
