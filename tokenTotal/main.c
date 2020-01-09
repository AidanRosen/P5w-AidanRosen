//
//  main.c
//  tokenTotal
//
//  Created by Rosen, Aidan on 1/7/20.
//  Copyright © 2020 Rosen, Aidan. All rights reserved.
//
#include <stdio.h>
#include "tokenMake.h"
int main(int argc, const char * argv[]) {
    int number;
    printf("Please write a string to tokenize: \n");
    char stringIn[1000];
    fgets(stringIn, 1000, stdin);
    tokenOrg(stringIn);
    printf("Please choose a word from the string you wrote above by it's number: ");
    scanf("%d", &number);

    tokenPick(number);
    return 0;
}
