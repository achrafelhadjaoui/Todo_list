#include "main.h"

void modifier(tache *head)
{
    char *string = NULL;
    size_t n = 0;
    int number;
    ssize_t characters;
    tache *ptr = head;

    if (head == NULL)
    {
        printf("=============================================\n");
        printf("La list des taches est vide !!!!!!!!!!!!\n");
        printf("=============================================\n");
        return;
    }

    printf("Entrer le nom de la tache qui tu peux le modifier\n");
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

    while (ptr != NULL)
    {
        if (strcmp(string, ptr->name) == 0)
        {
            while (1) {
                 printf("Changer : \n1- le nom\n2- la date\n(choisi l'option par son numero)\n");
                scanf("%d", &number);
                switch (number) {
                    case 1:
                        change_name(ptr);
                        break;
                    case 2:
                        change_date(ptr);
                        break;
                    /*case 3:
                        modifier(head);
                        break;
                    case 4:
                        supremer(head);
                        head = NULL;
                        printf("Vous avez supremer tout les taches avec succès\n");
                        break;*/
                    default:
                        printf("Le numéro entré n'est pas valide\n");
                        break;
                }
                free(string);
                return;
                }
        }
        else
            ptr = ptr->next;
    }
    printf("%s est pas trouver\n", string);
    free(string);
}