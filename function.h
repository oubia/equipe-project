#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "struct.h"

comp *creation(char *a){
    comp *list;
    list= (comp *)malloc(sizeof(comp));
    list->nm_cmp=a;
    list->next=NULL;
    return list;
}
