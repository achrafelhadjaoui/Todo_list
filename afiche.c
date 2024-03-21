#include "main.h"


void affiche(tache *ptr) {
    tache *current = ptr;

    if (ptr == NULL)
    {
        printf("=============================================\n");
        printf("La list des taches est vide !!!!!!!!!!!!\n");
        printf("=============================================\n");
        return;
    }
    printf("================= Liste des tâches : =======================\n");
    while (current != NULL) {
        printf("Nom -> %s\n", current->name);
        printf("Dead-line -> %d/%d/%d\n", current->jour, current->mois, current->anne);
        printf("la priority -> %d\n", current->priority);
        printf("============================================================\n");
        current = current->next;
    }
}