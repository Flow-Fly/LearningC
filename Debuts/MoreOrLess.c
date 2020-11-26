#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <string.h>

int nombreMystere, j = 0, coups = 0, jeu = 1, MAX = 0, MIN = 1, level = 0;
char question[] = "Quel est le nombre mystère ?  ", niveau[] = "Quel est ton niveau de jeu ?", skill1[] = "1. Débutant", skill2[] = ("2. Intermédiaire"), skill3[] = ("3. Expert !");
int main(void)
{
    do
    {
        printf("============\n");
        printf("== + ou - ==\n");
        printf("==== ?? ====\n");
        printf("============\n");
        sleep(1);
        for (int i = 0, n = strlen(niveau); i < n ; i++)
        {
            printf("%c", niveau[i]);
            usleep(50);
        }
        usleep(500);
        for (int i = 0, n = strlen(skill1) ; i < n ; i++)
        {
            printf("%c", skill1[i]);
            usleep(100);
            if (i == n - 1)
                printf("\n");
        }
        for (int i = 0, n = strlen(skill2) ; i < n ; i++)
        {
            printf("%c", skill2[i]);
            usleep(100);
            if (i == n - 1)
                printf("\n");
        }
        for (int i = 0, n = strlen(skill3) ; i < n ; i++)
        {
            printf("%c", skill3[i]);
            usleep(100);
            if (i == n - 1)
                printf("\n");
        }
        do
        {
            scanf("%d", &level);
        }
        while(level < 1 || level > 3);
        if (level == 1)
        {
            MAX = 10;
            srand(time(NULL));
            nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
        }
        else if (level == 2)
        {
            MAX = 100;
            srand(time(NULL));
            nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
        }
        else
        {
            MAX = 500;
            srand(time(NULL));
            nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
        }
        printf("Je choisis un nombre entre %d et %d.\n", MIN, MAX);
        char loading[] = "...";
        int count = 0;
        do {
            for (int i = 0, n = strlen(loading); i < n ; i++)
            {
                printf("%c", loading[i]);
                usleep(200);
            }
            count++;
        } while(count < 4);

        do
        {
            for (int i = 0, n = strlen(question); i < n ; i++)
            {
                printf("%c", question[i]);
                usleep(500);
                if (i == n - 1)
                {
                    printf("\n");
                }
            }
            coups += 1;
            scanf("%i", &j);
            if (nombreMystere > j)
            {
                printf("C'est plus !\n\n");
            }
            else if (nombreMystere < j)
            {
                printf("C'est moins !\n\n");
            }
            else
            {
                printf("Bien joué !, vous avez réussi à trouver %d en %d coups !\n", j ,coups);
            }
        }
        while (j != nombreMystere);

        printf("Souhaitez-vous relancer le dé ?\n");
        printf("1. Oui\n");
        printf("2. Non\n");
        printf("Votre choix ? ");
        scanf("%d", &jeu);

    }
    while (jeu == 1);
}
