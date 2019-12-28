#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct next_cm
{
    char *enemy1_nm;
    char *enemy2_nm;
    char *place;
    int month,day,hour;
    struct next_cm *next;
}next_com;
next_com *s;

typedef struct playr
{
   char *name;
   int age;
   int hight;
   int year,month,day;
   struct playr *next; 
}player;
player *c;

/*each equipe has many players and each player has name ...*/
typedef struct playrs
{
    player player; 
    struct playrs *next;
}players;
players *f;
/*equpes has many equipes the next struct it's for equipe*/
typedef struct equpe
{
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
    struct equpe *next;
     
}equipe;
equipe *k;
/* that is the pranciple struct  call compition */
typedef struct cop
{
    /*equipe id*/
    char nm_cmp;
    equipe equipe;
    struct cop *next;
}comp;
    comp *l;