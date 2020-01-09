//
//  recursivePalindrome.c
//  4wayCoding
//
//  Created by Rosen, Aidan on 12/9/19.
//  Copyright © 2019 Rosen, Aidan. All rights reserved.
//
#include <string.h>
#include "Palindrome.h"
char reverse2[1000];
int position = 0;
//char *strncat(char *dest, const char *src, size_t n);
int reversePos = 0;
void clearBuffer() {
    for (int i = 0; i<1000; i++) {
        reverse2[i] = '\0';
    }
}
char *realRecurse(char *cInput) {
    char foo[1000];
    //memset(reverse2, 0, sizeof(reverse2));
    strcpy(foo, cInput);
    clearBuffer(); 
    //memset(reverse2, 0, sizeof reverse2);
    recursePalin(foo);
    return reverse2;
}
char *recursePalin(char *foo) {
    //strcpy(recursor, cInput);
    //char c;
    //memset(reverse2, 0, sizeof reverse2);
    char character;
    character = foo[position];
    if (foo[position] != '\0')
     {
       position++;
       //strncat(reverse2, &character, 1);
       recursePalin(foo);
       //reversePos++;
       strncat(reverse2, &character, 1); //discovered on my own. 
       //reversePos++;
         
     }
     //printf("%c",*a);
    
    return reverse2;
}


