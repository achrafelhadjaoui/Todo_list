#include "main.h"


void supremer_une_tache(tache *head) {
    tache *ptr = head;
    tache *previous = NULL;
    char *string = NULL;
    size_t n = 0;
    ssize_t characters;

    if (head == NULL) {
        printf("=============================================\n");
        printf("La liste des tâches est vide !!!!!!!!!!!!\n");
        printf("=============================================\n");
        return;
    }

    printf("Entrer le nom de la tache que vous souhaitez supprimer\n");
    getchar();
    characters = getline(&string, &n, stdin);
    if (characters == -1) {
        printf("Erreur lors de la lecture de l'entrée.\n");
        free(string);
        return;
    }

    if (characters > 0 && string[characters - 1] == '\n') {
        string[characters - 1] = '\0';
    }

    while (ptr != NULL) {
        if (strcmp(string, ptr->name) == 0) {
            if (previous != NULL) {
                previous->next = ptr->next;
            } else {
                head = ptr->next;
            }
            free(ptr->name), ptr->name = NULL;
            free(ptr), ptr = NULL;
            printf("Tâche '%s' supprimée avec succès.\n", string);
            free(string), string = NULL;
            return;
        }
        previous = ptr;
        ptr = ptr->next;
    }

    // If the node with the specified name is not found
    printf("La tâche '%s' n'a pas été trouvée.\n", string);
    free(string), string = NULL; // Free memory allocated for the string
}
