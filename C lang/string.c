#include<strings.h>
#include<stdio.h>
#include<iostream>

int main(){
   char  string [20];
    char str[9]="do fun";
    
    gets(string);
    puts(string);
    char str1[10]= "myname";
    printf("the sting length is = %d",strlen(str1));
    printf("the compare %d",strcmp(string,str1));
    printf("the reverse of string is%s",strrev(string));
}