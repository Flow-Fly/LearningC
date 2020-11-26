#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    printf("Quel âge as-tu ?\n");
    int age = 0;
    scanf("%d", &age);
    printf("Ah bon ? Tu as donc au moins %d jours !\n", age * 365);
    return 0;
}
