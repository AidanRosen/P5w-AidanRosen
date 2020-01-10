//
//  main.c
//  tokenTotal
//
//  Created by Rosen, Aidan on 1/7/20.
//  Copyright © 2020 Rosen, Aidan. All rights reserved.
//
#include <stdio.h>
#include "string.h" 
#include "tokenMake.h"
int main(int argc, const char * argv[]) {
    printf("Please write a string to tokenize: \n");
    char stringIn[1000];
    fgets(stringIn, 1000, stdin);
    tokenOrg(stringIn);
    char stringToUse[1000];
    strcpy(stringToUse,tokenPick(stringToUse));//need to put in my string outputted function somehow
    printf("This is the string LATINIZED: %s end ofstr\n\n", stringToUse);
    printf("This is the strange character: CHARACTER:%c<--Character", stringToUse[2]);//Tests show there is a giant space of nothing, all in a constant size, no matter if the qord begins with a consonant or vowl
    printf("\n"); 
    return 0;
}
