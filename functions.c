#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct guitar {
    char *model; 
    int year;
};


struct guitar return_one(struct guitar *guitars, int length){
    srand(time(NULL));
    int random = (int)(((double)(rand()) / (double)INT_MAX) * ((double)length));
    int i = 0;
    /*********** DEBUGGING CODE **********
    for(i; i < length; i++){
        printf("%s\t%d\n", (guitars + i)->model, (guitars + i)->year);
    }
    printf("%d\n", rand());
    printf("%d\n", random);
    **************************************/
    struct guitar chosen = *(guitars + random);
    return chosen;
}