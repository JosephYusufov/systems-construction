#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct guitar {
    char *model; 
    int year;
};

/*
return_one()
    - @param: an array of guitar structs
    - @param: the length of said array
    - @return: a randomly selected struct from that array
    - NOTE: Function returns a struct, not a pointer to a struct
*/
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

/*
print_guitar()
    - @param: the struct that is to be printed
    - Prints the struct's values with neat formatting
*/
void print_guitar(struct guitar toprint){
    printf("\tModel: \t%s\n", toprint.model);
    printf("\tYear: \t%d\n", toprint.year);

}

/*
return_one()
    - @param: A POINTER TO the struct to be modified
    - @param: the new model name 
    - @param: the new year 
    - @return: A POINTER TO the struct that was modified
    - modifies the struct with the given parameters
    - NOTE: Function returns/takes a pointer to a struct, not a struct
*/
struct guitar * modify_guitar(struct guitar *p_guitar, char *new_model, int new_year){
    p_guitar->model = new_model;
    p_guitar->year = new_year;
    return p_guitar;
}