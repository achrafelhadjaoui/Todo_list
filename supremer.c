#include "main.h"

void supremer(tache *head)
{
    tache *ptr = head, *tmp = NULL;

    if (head == NULL)
    {
        printf("=======================================================\n");
        printf("La liste des tache est vides !!!!!!!!!!!!!!!!!!\n");
        printf("=======================================================\n");
        return;
    }

    while (ptr != NULL)
    {
        tmp = ptr->next;
        free(ptr->name),ptr->name = NULL;
        free(ptr), ptr->name = NULL;
        ptr = tmp;
    }

    printf("=================================================\n");
    printf("Vous avez supremer tout les taches avec succès\n");
    printf("=================================================\n");
    
}