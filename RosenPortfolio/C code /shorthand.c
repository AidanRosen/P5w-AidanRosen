//
//  shorthand.c
//  RosenPortfolio
//
//  Created by Rosen, Aidan on 12/18/19.
//  Copyright © 2019 Rosen, Aidan. All rights reserved.
//

#include <stdio.h>
#include "Palindrome.h"
char *strtok(char *str, const char *delim);
#include <string.h>
char tokenized2[1000]; //Tokenized variable to be returned
char *shortHand(char tokenBase2[1000]) {
    //char tokenBase[1000];//variable to be set to text on phone
    const char delim2[100] = {'a','e','i','o','u',' '};
    char *token2; //don't worry about number, I used to have 2 token variables
    tokenized2[0] = '\0';
    //fgets(tokenBase, 100, stdin); //to be changed to input text on phone
    token2 = strtok(tokenBase2,delim2); // a copy of tokenBase is needed for the tokenization to work, because tokenbase is modified by fgets.
       while( token2 != NULL ) {
           strcat(tokenized2, token2);
        
           token2 = strtok(NULL, delim2);//delim[5] is a space
       }
    return tokenized2; //can return desired word by placing the two variables into a structure
}

