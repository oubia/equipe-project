#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*structeur de next compition*/
typedef struct
{
    char enemy1_nm[30];
    char enemy2_nm[30];
    char place[30];
    int month,day,hour;
    struct next_com *next;
}next_com;
next_com *N;
 
/*structeur de les joeurs*/
typedef struct
{
   char nm[30];
   int age;
   int hight;
   
}player;
/*equpes has many equipes the next struct it's for equipe*/
typedef struct 
{
    char name[30];
    /*player id*/
    
    /*next competition id*/
    next_com Ncompetion;
    int nbplayer;
    player player;
}equipe;


/* that is the pranciple struct  call compition */
typedef struct
{
    /*equipe id*/
    char nm_comp[30];
    next_com next_com;
    equipe equipe;
    struct comp *next;
}comp;
comp *lsit;
