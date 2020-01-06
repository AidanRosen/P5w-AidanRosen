//
//  Palindrome.c
//  4wayCoding
//
//  Created by Rosen, Aidan on 12/3/19.
//  Copyright © 2019 Rosen, Aidan. All rights reserved.
//
#include <string.h>
#include "Palindrome.h"
char reverse[1000];

void clearBuffer1() {
    for (int i = 0; i<1000; i++) {
        reverse[i] = '\0';
    }
}
char *Palindrome(char *cInput, long stringLength) {
    //code for array swapping
 //= " ";
    clearBuffer1(); 
    char input[1000];
    strcpy(input, cInput); //this is where I get the crashing error
   // printf("Please write down your string \n");
    //scanf("%s", input);

    long end = stringLength -1;
    for (long i = 0; i < stringLength; i++){
        char swap = input[i];
        reverse[i] = input[end];
        reverse[end] = swap;
        end--;
    }
   // printf("This is your reversed string: %s\n", reverse);
 
    //code for recursive method
    
   /* if (strcmp(&reverse,&input) == 0) {
        printf("The string is a palindome\n");
    } else {
        printf("The string is not a palindrome\n");
    }*/
    return reverse;
    
    
}
