#include "main.h"


tache *ajouter(tache *head) {
    int jour=0, mois=0, anne = 0, priority=0;
    char *string = NULL;
    size_t n = 0;
    ssize_t characters;

    printf("Entrer le nom de la tache\n");
    getchar(); // Consume the newline character left in the input buffer
    characters = getline(&string, &n, stdin);
    if (characters == -1) {
        printf("Erreur lors de la lecture de l'entrée.\n");
        free(string); // Free memory allocated for the string
        return head;
    }

    // Remove newline character from the input
    if (characters > 0 && string[characters - 1] == '\n') {
        string[characters - 1] = '\0';
    }

    printf("======================Dead_line=====================\n\n");
    printf("Entrer le jour du fin du tache\n");
    scanf("%d", &jour);
    printf("Entrer la mois du fin du tache : \n");
    scanf("%d", &mois);
    printf("Entrer l'anne du fin du tache : \n");
    scanf("%d", &anne);
    printf("Entrer le priority de ce tache : \n");
    while (priority < 1 || priority > 10)
    {
        printf("=============================================\n");
        printf("la priority est entre 1 et 10 : \n");
        scanf("%d", &priority);
    }


        

    if (string != NULL && jour != 0 && mois != 0 && anne != 0 && priority != 0) {
        head = addNode(head, string, jour, mois, anne, priority);
        if (head != NULL) {
            printf("Tâche ajoutée avec succès : %s\n", string);
        }
        free(string); // Free memory allocated for the string
    }
    else
        printf("Entrer tout les etapes\n");

    return head;
}


tache *addNode(tache *head, char *name, int jour, int mois, int anne, int priority) {
    tache *newNode = malloc(sizeof(tache));
    if (newNode == NULL) {
        printf("Mémoire non allouée.\n");
        exit(1);
    }
    newNode->name = strdup(name);
    newNode->jour = jour;
    newNode->mois = mois;
    newNode->anne = anne;
    newNode->priority = priority;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    tache *current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
    return head;
}