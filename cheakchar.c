#include<stdio.h>
#include<conio.h>

void main(){
    char ch;
    printf("Enter the input : ");
    scanf("%c",&ch);
    

    if(isdigit(ch)){
        printf("Given input is a number.");
    }else if (isalpha(ch)){
        printf("Given input is a alphabet.");
    }else{
        printf("Given input is special charachter");
    }
}