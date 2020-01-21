//
//  pigLatin.c
//  pigLatin
//
//  Created by Rosen, Aidan on 12/11/19.
//  Copyright © 2019 Rosen, Aidan. All rights reserved.
//
 char tempWord[100];
#include "pigLatin.h"
int tolower(int argument); //Necessary definition for tlower function
#include <string.h>
char *pigLatin(char latinBase[100]) {
    //char latinBase[100];
    /*printf("Write down your word to be latinized:\n");
    scanf("%s", latinBase); //latinBase is used silly*/
    int limiter = 0;
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
        strcat(tempWord, "yay");
    }else { //if its a consonant
        for (int begin = 0; begin < limiter; begin++) {
            pos = begin+1;
            tempWord[begin] = latinBase[pos];
            pos++;
        }
        char endLetter = latinBase[0];
        strncat(tempWord, &endLetter, 1);
        strcat(tempWord, "ay");
    }
    printf("\n\nYour pig latina word is: %s\n\n", tempWord);
    return tempWord;
}
