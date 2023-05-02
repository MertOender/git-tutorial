#include <stdio.h>
#include <stdlib.h>
#include "espl_lib.h"



int main(){
    int num_to_read;
    char* solution;
    char more = 'y';
    printf("Hello Espl\n");
    
    while (more == 'y'){
    printf("Please give a number\n");
    scanf("%i", &num_to_read);
    solution = num_to_words(num_to_read);
    printf("%s\n", solution);
    
    printf("Do you want to continue?(y/n)\n");
    scanf("%s", &more);

    if(more != 'y' && more != 'n'){
        printf("please only enter y(yes) or n(no)");
        scanf("%s", &more);
    }

    } 


    }