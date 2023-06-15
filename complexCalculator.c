#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "complexCalculator.h"

#define INPUT_SIZE 40

//First Objective: Sum two real numbers

int main(){
    
    char userInput[INPUT_SIZE]="";
    printf("Type a simple sum of numbers:");
    scanf("%s",userInput);

    char number1[INPUT_SIZE]="";
    char number2[INPUT_SIZE]="";
    char *charptr=strchr(userInput,'+');
    
    printf("%ld\n",charptr-userInput);

    getNumber(number1,userInput,0,(charptr-userInput)); //get first number of the sum
    printf("%s\n",number1);
    printUserInput(userInput);


}

void getNumber(char *number, char*input,int startPosition,int endPosition){
    int i =0;
    while((startPosition+i)< endPosition){
        number[startPosition+i]=input[startPosition+i];
        i++;
    }
}


void printUserInput(char *input){
    for(int i=0;i<INPUT_SIZE;i++){
        printf("%c",input[i]);
    }
}