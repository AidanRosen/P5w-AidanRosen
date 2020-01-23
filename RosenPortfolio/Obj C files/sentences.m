//
//  sentences.m
//  RosenPortfolio
//
//  Created by Rosen, Aidan on 1/21/20.
//  Copyright © 2020 Rosen, Aidan. All rights reserved.
//
#include "manipulator.h" 
#import "sentences.h"

@implementation stringManipulator
@synthesize input2, latinWay, shortWay, reversedWay;
- (IBAction)stringManipulate:(id)sender {
    latinWay.text = [NSString stringWithFormat:@" "];
    shortWay.text = [NSString stringWithFormat:@" "];
    reversedWay.text = [NSString stringWithFormat:@" "];
    const char *inputUse = [input2.text UTF8String];
    char stringUse[1000];
    strcpy(stringUse,inputUse);
    tokenOrg(stringUse);
    char stringToLatinize[1000];
    latinWay.text = [NSString stringWithFormat:@"%s" , tokenPick(stringToLatinize)];
    char stringtoReverse[1000];
    reversedWay.text = [NSString stringWithFormat:@"%s" , tokenReverse(stringtoReverse)];
    char stringtoShortify[1000];
    shortWay.text = [NSString stringWithFormat:@"%s" , tokenShort(stringtoShortify)];
    
    
    
    
    /* reference code 
     
     printf("Please write a string to tokenize: \n");
     char stringIn[100];
     fgets(stringIn, 100, stdin); //MUST BE USED to work properly with tokenizing multiple strings with spaces
     
     strtok(stringIn, "\n");//removes new line caused by fgets
     
     //scanf("%s",stringIn);Creates errors with tokenizing spaces
     
     tokenOrg(stringIn);
     char stringtoReverse[100];
     strcpy(stringtoReverse,tokenReverse(stringtoReverse));
     char stringToUse[100];
     strcpy(stringToUse,tokenPick(stringToUse));//piglatins the string
     char stringtoShort[100];
     strcpy(stringtoShort,tokenShort(stringtoShort));
     printf("\n\nThis is the string LATINIZED: %s\n\n", stringToUse);//to be changed to input.text = [string, function] etc.
     printf("\n\nThis is the string SHORTHANDED: %s\n\n",stringtoShort);
     printf("\n\nThis is the string REVERSED: %s\n\n",stringtoReverse);
     printf("\n");
     return 0;
     */
}
@end
