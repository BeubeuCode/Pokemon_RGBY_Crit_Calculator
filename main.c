#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int rng=0;
int prc=0;
printf("Ce programme permet de tester la génération aléatoire des chances de miss d'attaques sur RGBY avec 100% de précision.\n Le programme possède exactement la meme faille que dans le code du jeu.\n");
printf("Entrez la précision de votre attaque :\n")
scanf("%d", &prc);
computer=(rand()%256);

if (prc<rng){
printf("L'attaque a échoué, voici le nombre généré :\n)";
printf("%d", rng);
}

if (prc>rng){
printf("L'attaque a réussi, voici le nombre généré :\n)";
printf("%d", rng);
}

printf("Merci d'avoir utilisé mon programme, crée et compilé par Beubeu, Tous Droits Réservés\n");
return 0;
}
