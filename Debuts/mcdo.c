#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    printf("=== Menu ===\n1. Royal Cheese\n2. Mc Deluxe\n3. Mc Bacon\n4. Big Maco\nVotre Choix ?\n");
    int choix;
    scanf("%d", &choix);
    switch (choix)
    {
        case 1:
            printf("Tu as choisi le Royal Cheese !\n");
            break;
        case 2:
            printf("Tu as choisi le Mc Deluxatos !\n");
            break;
        case 3:
            printf("Hmmmm, le Mc Bacon..\n");
            break;
        case 4:
            printf("Waouh, Big Mac-o-Mac !\n");
            break;
        default:
            printf("T'as pas compris le Menu ?!?\n");
            break;
    }
    return 0;
}
