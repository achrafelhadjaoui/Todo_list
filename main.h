#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

typedef struct to_do
{
    char *name;
    int jour, mois, anne, priority, index;
    struct to_do *next;
}tache;


/*==================Prototypes========================*/

tache *ajouter();
void affiche(tache *ptr);
tache *addNode(tache *head, char *name, int jour, int mois, int anne, int priority);
void supremer(tache *head);
void modifier(tache *head);
void change_name(tache *head);
void change_date(tache *head);
void affiche_par_priority(tache *head);
void supremer_une_tache(tache *head);
#endif