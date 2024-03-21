#include "main.h"

void affiche_par_priority(tache *head)
{
    tache *current = head;
    int bool = 0, number;

    if (head == NULL)
    {
        printf("=======================================================\n");
        printf("La liste des tache est vides !!!!!!!!!!!!!!!!!!\n");
        printf("=======================================================\n");
        return;
    }

    printf("Entrer le nombre de priority des taches tu peux le affiche : \n");
    scanf("%d", &number);

    while (current != NULL)
    {
        if (current->priority == number)
        {
            printf("=======================================================\n");
            printf("Nom -> %s\n", current->name);
            printf("Dead-line -> %d/%d/%d\n", current->jour, current->mois, current->anne);
            printf("la priority -> %d\n", current->priority);
            printf("============================================================\n");
            bool = 1;
        }
        current = current->next;
    }
    if (bool == 0)
    {
        printf("=======================================================\n");
        printf("pas des tache trouver avec ce priority nombre\n");
        printf("=======================================================\n");
    }
}