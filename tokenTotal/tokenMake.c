//
//  tokenMake.c
//  tokenTotal
//
//  Created by Rosen, Aidan on 1/7/20.
//  Copyright © 2020 Rosen, Aidan. All rights reserved.
//
#include "string.h"
#include "tokenMake.h"
typedef struct language {
    char word[80], reversed[80], pigged[80], shorted[80];
} WORDS;
typedef struct phrases {
    char phrases[1000];
    WORDS words[1000];
} PHRASE;
int sizeCount = 0;
char *tokenOrg(char tokenBase[1000]) {
    
        PHRASE in;
       //char tokenBase[1000];//variable to be set to text on phone
       char *token; //don't worry about number, I used to have 2 token variables
       int listPos = 0;
       char tokenized[1000]; //Tokenized variable to be returned
       tokenized[0] = '\0';
       token = strtok(tokenBase," "); // a copy of tokenBase is needed for the tokenization to work, because tokenbase is modified by fgets.
       while( token != NULL ) { //removes spaces
              strcat(tokenized, token);//needed for when replacing tokenized strings into a new string
              sizeCount++; //Sets limiter for cycling through in.words
              strcpy(in.words[listPos].word,token);
              listPos++;
              token = strtok(NULL, " ");//delim[5] is a space
          }
     return tokenBase; //can return desired word by placing the two variables into a structure
}


int tokenPick(int wordSelect) { //need to change it so that it piglatins and shorthands
    PHRASE in;
    for (int wordNumber = 0; wordNumber < sizeCount; wordNumber++){
        
        printf("%s\n", in.words[wordNumber].word);
        
    }
    return 0;
}

