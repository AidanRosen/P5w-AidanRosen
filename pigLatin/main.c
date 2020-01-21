//
//  main.c
//  pigLatin
//
//  Created by Rosen, Aidan on 12/11/19.
//  Copyright © 2019 Rosen, Aidan. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "pigLatin.h"
int main(int argc, const char * argv[]) {
    printf("Write down your string to be latinized: ");
    char string[100];
    scanf("%s",string);
    pigLatin(string);
    return 0;
}
