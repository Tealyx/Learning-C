#include <stdlib.h>
#include <stdio.h>

int main()
{
    int note = 8;
    if (note < 8)
    {
        printf("Redoublant");
    }
    else if (note >= 8 && note < 10)
    {
        printf("Rattrapage");
    }
    else if (note >= 10 && note < 12)
    {
        printf("Admis");
    }
    else if (note >= 12 && note < 14)
    {
        printf("Admin Mention Assez Bien");
    }
    else if (note >= 14 && note < 16)
    {
        printf("Admin Mention Bien");
    }
    else
    {
        printf("Admin Mention Tres Bien");
    }
    return 0;
}