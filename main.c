#include "main.h"

int main() {
    int number;
    tache *head = NULL;

    printf("Bienvenue sur votre to-do list\n");
    printf("=====================================\n");
    while (1) {
        printf("Choisissez une option par son numéro :\n");
        printf("=============================================\n");
        printf("1- Ajouter\n2- Afficher\n3- Modifier\n4- affiche par priority\n5- Supremer une tache\n6- Supremer tout les taches\n7- Sortie\n");
        scanf("%d", &number);
        switch (number) {
            case 1:
                head = ajouter(head);
                break;
            case 2:
                affiche(head);
                break;
            case 3:
                modifier(head);
                break;
            case 4:
                affiche_par_priority(head);
                break;
            case 5:
                supremer_une_tache(head);
                break;
            case 6:
                supremer(head);
                break;
            case 7:
                supremer(head);
                printf("================See you soooooooooooooon ================\n");
                return 0;
            default:
                printf("Le numéro entré n'est pas valide\n");
                break;
        }
    }

    return 0;
}
