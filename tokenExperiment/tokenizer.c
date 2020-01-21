//
//  tokenizer.c
//  tokenExperiment
//
//  Created by Rosen, Aidan on 1/6/20.
//  Copyright © 2020 Rosen, Aidan. All rights reserved.
//
#include "tokenizer.h"
#include <stdio.h>
char *strtok(char *str, const char *delim);
#include <string.h>
int tokenize() {
    char tokenBase[1000];//variable to be set to text on phone
    char tokenBaseCopy[1000];
    const char delim2[100] = {'a','e','i','o','u',' '};
    char *token2; //don't worry about number, I used to have 2 token variables
    char shortHand[1000]; //Variable to be returned
    shortHand[0] = '\0'; //Set to null to avoid errors in memory, NULL dont work
    char tokenized[1000]; //Tokenized variable to be returned
    tokenized[0] = '\0';
    printf("Write a sring: ");
    fgets(tokenBase, 100, stdin); //to be changed to input text on phone
    strcpy(tokenBaseCopy, tokenBase);
    printf("\n%s\n", tokenBase);
    token2 = strtok(tokenBase,delim2);
    while( token2 != NULL ) {
        strcat(shortHand, token2);
     
       token2 = strtok(NULL, delim2);
    }
    printf("\n\n\n\n\n\n");
    token2 = strtok(tokenBaseCopy,&delim2[5]); // a copy of tokenBase is needed for the tokenization to work, because tokenbase is modified by fgets.
       while( token2 != NULL ) {
           strcat(tokenized, token2);
        
           token2 = strtok(NULL, &delim2[5]);//delim[5] is a space
       }
    printf("Your shorthand word is: %s", shortHand);
    printf("\nYour tokenized string is: %s \n\n", tokenized);
    return 0; //can return desired word by placing the two variables into a structure
}
