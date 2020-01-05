#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "struct.h"

/*fonction de creation 8*/
comp *creation(char nm_cmp[30],char nme[30],char nmc[30],char en1n[30],char en2n[30],char palcec[30],int nbp,int agec,int high,int m,int d,int h){
    comp *list;
    list=(comp *)malloc(sizeof(comp));
    list->nm_comp[30]=nm_cmp[30];
    list->equipe.name[30]=nme[30];
    list->equipe.player.nm[30]=nmc[30];
    list->next_com.enemy1_nm[30]=en1n[30];
    list->next_com.enemy2_nm[30]=en2n[30];
    list->next_com.place[30]=palcec[30];
    list->equipe.nbplayer=nbp;
    list->equipe.player.age=agec;
    list->equipe.player.hight=high;
    list->next_com.month=m;
    list->next_com.day=d;
    list->next_com.hour=h;
    list->next=NULL;
    return list; 
}

/*fonction de insertion de debut*/
comp *inserD(char nme[30],char nmc[30],char en1n[30],char en2n[30],char palcec[30],int nbp,int agec,int high,int m,int d,int h,comp *list){
    comp *nem;
    if (!nem) {
        printf("allocation non réussie");
        exit (1);
            }
    nem=(comp *)malloc(sizeof(comp));
    nem->equipe.name[30]=nme[30];
    nem->equipe.player.nm[30]=nmc[30];
    nem->next_com.enemy1_nm[30]=en1n[30];
    nem->next_com.enemy2_nm[30]=en2n[30];
    nem->next_com.place[30]=palcec[30];
    nem->equipe.nbplayer=nbp;
    nem->equipe.player.age=agec;
    nem->equipe.player.hight=high;
    nem->next_com.month=m;
    nem->next_com.day=d;
    nem->next_com.hour=h;
    nem->next=list;
    list=nem;
    return list; 
}

/*fonction d'insertion a la fine*/
comp *inserF(char nme[30],char nmc[30],char en1n[30],char en2n[30],char palcec[30],int nbp,int agec,int high,int m,int d,int h,comp *list){
    comp *nem,*p;
    if (!nem) {
        printf("allocation non réussie");
        exit (1);
        }

    nem=(comp *)malloc(sizeof(comp));
    nem->equipe.name[30]=nme[30];
    nem->equipe.player.nm[30]=nmc[30];
    nem->next_com.enemy1_nm[30]=en1n[30];
    nem->next_com.enemy2_nm[30]=en2n[30];
    nem->next_com.place[30]=palcec[30];
    nem->equipe.nbplayer=nbp;
    nem->equipe.player.age=agec;
    nem->equipe.player.hight=high;
    nem->next_com.month=m;
    nem->next_com.day=d;
    nem->next_com.hour=h;
    nem -> next = NULL;
    if (list == NULL) list = nem;
    else {
    p= dernier (list);
    p ->next = nem;}
    return list; 
}

/*fonction de supreme*/
comp * supreme (comp *noeud, comp *list) {
    comp * precedent;
    precedent= list;
    while ( (precedent -> next != noeud)) {
    precedent=precedent ->next;
    precedent ->next= noeud ->next;
    }
    free(noeud);
    return (list) ;
}

/*fonction de d'affichage */
void affichage( comp * list) {
    comp *pc = list;
    while(pc){
    printf("%s %s %d %s %d %d %s %s %d %d %d %s\n",pc->nm_comp,pc->equipe.name,pc->equipe.nbplayer,pc->equipe.player.nm,pc->equipe.player.age,pc->equipe.player.hight,pc->next_com.enemy1_nm,pc->next_com.enemy2_nm,pc->next_com.month,pc->next_com.day,pc->next_com.hour,pc->next_com.place);
    pc = pc ->next;
    }
}