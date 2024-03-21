#include "main.h"

void change_name(tache *head)
{
    char *string = NULL;
    size_t n = 0;
    ssize_t characters;

    printf("Entrer le nouveau nome : \n");
    getchar(); // Consume the newline character left in the input buffer
    characters = getline(&string, &n, stdin);
    if (characters == -1) {
        printf("Erreur lors de la lecture de l'entrée.\n");
        free(string); // Free memory allocated for the string
        return;
    }

    // Remove newline character from the input
    if (characters > 0 && string[characters - 1] == '\n') {
        string[characters - 1] = '\0';
    }

    strcpy(head->name, string);
    free(string);
}

void change_date(tache *head)
{
    int jour, mois, anne;
    printf("Entrer le noveau jour : \n");
    scanf("%d", &(head->jour));
    printf("Entrer le noveau mois : \n");
    scanf("%d", &(head->mois));
    printf("Entrer le noveau anne : \n");
    scanf("%d", &(head->anne));
}