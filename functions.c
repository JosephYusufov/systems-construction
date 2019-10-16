#include<time.h>
#include<stdio.h>
#include<stdlib.h>

struct guitar {
    char *model; 
    int year;
};


struct guitar return_one(struct guitar *guitars, int length){
    srand(time(NULL));
    int i = 0;
    // for(i; i < length; i++){
    //     printf("%s\t%d\n", (guitars + i)->model, (guitars + i)->year);
    // }
    struct guitar chosen = *(guitars + rand());
    return chosen;
}