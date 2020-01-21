//
//  tokenizer.c
//  RosenPortfolio
//
//  Created by Rosen, Aidan on 12/16/19.
//  Copyright © 2019 Rosen, Aidan. All rights reserved.
//

#include <stdio.h>
#include "Palindrome.h"
char *strtok(char *str, const char *delim);
#include <string.h>
char tokenized[1000]; //Tokenized variable to be returned
char *tokenizer(char tokenBase[1000]) {
    //char tokenBase[1000];//variable to be set to text on phone
    const char delim2[100] = {'a','e','i','o','u',' '};
    char *token2; //don't worry about number, I used to have 2 token variables
    tokenized[0] = '\0';
    //fgets(tokenBase, 100, stdin); //to be changed to input text on phone
    token2 = strtok(tokenBase,&delim2[5]); // a copy of tokenBase is needed for the tokenization to work, because tokenbase is modified by fgets.
       while( token2 != NULL ) {
           strcat(tokenized, token2);
        
           token2 = strtok(NULL, &delim2[5]);//delim[5] is a space
       }
    return tokenized; //can return desired word by placing the two variables into a structure
}
