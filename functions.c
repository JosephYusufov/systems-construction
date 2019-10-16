#include<time.h>
#include<stdio.h>

struct guitar {char *model; int year;};


struct guitar return_one(struct guitar *guitars){
    srand(time(NULL));
    // int length = sizeof guitars / sizeof (*guitars);
    int array_len = sizeof(guitars);
    // int struct_len = sizeof (*guitars);
    printf("Array: %d\n", array_len);
    // printf("Struct: %d\n", struct_len);
    // printf("Length: %d\n", length);
    return;
}
