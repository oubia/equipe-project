#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "function.h"
/*  */
int main()
{
    // char i,*a[i];
    // char *b;
    // printf("donner le nom de competion \n");
    // gets(a);    
    // puts(creation(a));
    // return 0;
    char a[]="abc";
    comp *list = NULL;
    list = creation(a);
    printf("ddd\n",list);
}
