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
    char word[80];
    char reversed[80];
    char pigged[80];
    char shorted[80];
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

//char finalForm[1000];
//finalForm[0] = '\0';
char stringtoReturn[1000];
char *tokenPick(char string[1000]) { //need to change it so that it piglatins and shorthands
    PHRASE in;
    string[0] = '\0'; 
    int wordNumber = 0; //Need this variable outside the for loop
    for (;wordNumber < sizeCount; wordNumber++){
        char finalForm[1000];
        strcpy(finalForm, pigLatin(in.words[wordNumber].word));
       // strcpy(in.words[wordNumber].pigged; copy piglatin'd string into here
        strcpy(in.words[wordNumber].pigged,finalForm);
        strcat(string, in.words[wordNumber].pigged);//error may be in strcat?
        //strcat(string," "); 
        //strcat(in.words[wordNumber].pigged," ");
        //need to use strcpy to copy a string into a position
        
    }
    strcpy(stringtoReturn,string);
    return stringtoReturn;
}

int tolower(int argument); //Necessary definition for tlower function
#include <string.h>
char tempWord[100];
char *pigLatin(char latinBase[100]) {
    //char latinBase[100];
    /*printf("Write down your word to be latinized:\n");
    scanf("%s", latinBase); //latinBase is used silly*/
    int limiter = 0;
    tempWord[0] = '\0'; 
    char vowels[6] = {'a','e','i','o','u','y'};
    int consonant = 1;//To be set to whether a consonant is a consonant
    while (latinBase[limiter] != '\0') {
        limiter++;
    }
    for (int i = 0;i < 6;i++) {
        if (tolower(latinBase[0]) == vowels[i]) { //tolower includes capitals
            consonant = 0;// sets consonance to false, it proved true to be a vowel
            break;
        }
    }
    int pos = 1;
    if (consonant == 0) { //if its a vowel
        strcpy(tempWord,latinBase);
        strncat(tempWord, "yay", 3);
    }else { //if its a consonant
        for (int begin = 0; begin < limiter; begin++) {
            pos = begin+1;
            tempWord[begin] = latinBase[pos];
            pos++;
        }
        char endLetter = latinBase[0];
        strncat(tempWord, &endLetter, 1);
        strncat(tempWord, "ay", 2);
    }
   // printf("\n\nYour pig latina word is: %s\n\n", tempWord);//NOTICE: This print would be repeated
    return tempWord;
}


