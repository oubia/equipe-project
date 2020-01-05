#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "function.h"


//-------------------------------------------------------------------------------------------
main()
{
    char nm_cmpe[30],nmee[30],nme[30],en1ne[30],en2ne[30],palcee[30];
    int nbpe,agee,highe,me,de,he;
    int change,chois;
    comp*noeud;
    comp *list;

    printf("donner le nome de compitition\n");
    scanf("%s",nm_cmpe);
    printf("donner le nome d'equipe\n");
    scanf("%s",nmee);
    printf("donner le nome de player\n");
    scanf("%s",nme);
    printf("donner le nome de equipe qui va jouee\n ");
    scanf("%s",en1ne);
    printf(" donne le 2eme enemy\n");
    scanf("%s",en2ne);
    printf("donner le nome de tiran\n");
    scanf("%s",palcee);
    printf("donner le nombre de players\n");
    scanf("%d",&nbpe);
    printf("donner l'age de player\n");
    scanf("d",&agee);
    printf("donner la hight de player\n");
    scanf("%d",&highe);
    printf("donner le mois de compitition\n");
    scanf("%d",&me);
    printf("le jour de comptition \n");
    scanf("%d",&de);
    printf("donne l'hour de compitition\n");
    scanf("%d",&he);
    creation(nm_cmpe[30],nmee[30],nme[30],en1ne[30],en2ne[30],palcee[30],nbpe,agee,highe,me,de,he);

    printf("_-----------echange-------------_");
    printf("vous volez changer qulque chose ? oui=1 o non=0 ?\n");
    scanf("%d",&change);
    if(change=1){
        printf( "1 : ajout debut\n"
                "2 : ajout fin\n"
                "3 : supprimer \n"
                "4 : affiche\n"
                );
        scanf("%d",&chois);
        switch (chois)
        {
        case 1:
            printf("donner le nome de compitition\n");
            scanf("%s",nm_cmpe);
            printf("donner le nome d'equipe\n");
            scanf("%s",nmee);
            printf("donner le nome de player\n");
            scanf("%s",nme);
            printf("donner le nome de equipe qui va jouee\n ");
            scanf("%s",en1ne);
            printf(" donne le 2eme enemy\n");
            scanf("%s",en2ne);
            printf("donner le nome de tiran\n");
            scanf("%s",palcee);
            printf("donner le nombre de players\n");
            scanf("%d",&nbpe);
            printf("donner l'age de player\n");
            scanf("d",&agee);
            printf("donner la hight de player\n");
            scanf("%d",&highe);
            printf("donner le mois de compitition\n");
            scanf("%d",&me);
            printf("le jour de comptition \n");
            scanf("%d",&de);
            printf("donne l'hour de compitition\n");
            scanf("%d",&he);
            inserD(nm_cmpe[30],nmee[30],nme[30],en1ne[30],en2ne[30],palcee[30],nbpe,agee,highe,me,de,he);
            break;
        case 2:
            printf("donner le nome de compitition\n");
        scanf("%s",nm_cmpe);
        printf("donner le nome d'equipe\n");
        scanf("%s",nmee);
        printf("donner le nome de player\n");
        scanf("%s",nme);
        printf("donner le nome de equipe qui va jouee\n ");
        scanf("%s",en1ne);
        printf(" donne le 2eme enemy\n");
        scanf("%s",en2ne);
        printf("donner le nome de tiran\n");
        scanf("%s",palcee);
        printf("donner le nombre de players\n");
        scanf("%d",&nbpe);
        printf("donner l'age de player\n");
        scanf("d",&agee);
        printf("donner la hight de player\n");
        scanf("%d",&highe);
        printf("donner le mois de compitition\n");
        scanf("%d",&me);
        printf("le jour de comptition \n");
        scanf("%d",&de);
        printf("donne l'hour de compitition\n");
        scanf("%d",&he);
            inserF(nm_cmpe[30],nmee[30],nme[30],en1ne[30],en2ne[30],palcee[30],nbpe,agee,highe,me,de,he);
            break;
        case 3:
            supreme (noeud,list);
            break;
        case 4:
            void affichage(list);
            break;    
        default:
            printf("please chose the corect chois");
            break;
        }
    }
    else
    {
        exit(1);
    }
    


}
 