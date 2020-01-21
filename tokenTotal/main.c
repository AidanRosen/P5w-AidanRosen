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
    char stringIn[100];
    fgets(stringIn, 100, stdin); //MUST BE USED to work properly with tokenizing multiple strings with spaces
    
    strtok(stringIn, "\n");//removes new line caused by fgets
    
    //scanf("%s",stringIn);Creates errors with tokenizing spaces
    
    tokenOrg(stringIn);
    char stringtoReverse[100];
    strcpy(stringtoReverse,tokenReverse(stringtoReverse));
    char stringToUse[100];
    strcpy(stringToUse,tokenPick(stringToUse));//piglatins the string
    char stringtoShort[100];
    strcpy(stringtoShort,tokenShort(stringtoShort));
    printf("\n\nThis is the string LATINIZED: %s\n\n", stringToUse);
    printf("\n\nThis is the string SHORTHANDED: %s\n\n",stringtoShort);
    printf("\n\nThis is the string REVERSED: %s\n\n",stringtoReverse);
    printf("\n"); 
    return 0;
}
