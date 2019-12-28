#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


/* that is the pranciple struct  call compition */
typedef struct 
{
    /*equipe id*/
    char nm_cmp;
    equipe equipe;
    comp *next;
}comp;
    comp *l;

/*equpes has many equipes the next struct it's for equipe*/
typedef struct 
{
    equipe *next;
    char *name;
    /*player id*/
    players player;
    /*next competition id*/
    next_com Ncompetion;
    int nbplayer;
    /*nomber of champione that they win*/
    int ch_win;
    /*nomber of champione that they lose*/
    int ch_lose;
     
}equipe;
equipe *k;

/*each equipe has many players and each player has name ...*/
typedef struct 
{
    players *next;
    player player; 
}players;
players *f;

typedef struct 
{
   player *next; 
   char *name;
   int age;
   int hight;
   int year,month,day;
}player;
player *c;


typedef struct 
{
    next_com *next;
    char *enemy1_nm;
    char *enemy2_nm;
    char *place;
    int month,day,hour;
}next_com;
next_com *s;
