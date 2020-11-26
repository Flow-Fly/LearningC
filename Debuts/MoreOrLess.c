#include <stdlib.h>
#include <stdio.h>
#include <time.h>

const int MAX = 100, MIN = 1;
int nombreMystere, i = 0, coups = 0, jeu = 1;
int main(void)
{
    do
    {
        srand(time(NULL));
        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
        do
        {
            printf("Quel est le nombre mystère ?  ");
            scanf("%i", &i);
            if (i > nombreMystere)
            {
                printf("C'est moins !\n\n");
                coups++;
            }
            else if (i < nombreMystere)
            {
                printf("C'est plus !\n\n");
                coups++;
            }
            else
            {
                coups++;
                printf("Bien joué !, vous avez réussi à trouver %d en %d coups !\n", i ,coups);
            }
        }
        while (i != nombreMystere);

        printf("Souhaitez-vous relancer le dé ?\n");
        printf("1. Oui\n");
        printf("2. Non\n");
        printf("Votre choix ? ");
        scanf("%d", &jeu);

    }
    while (jeu == 1);
}
