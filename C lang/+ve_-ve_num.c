#include<stdio.h>
int main(){
    int n;
    printf("enter a number to check its positive or negative:-  ");
    scanf("%d",&n);
    if(n>0){
        printf("the number is positve");
    }
    else if(n==0){
        printf("the nummber is nither negative nor positve");
    }
    else{
        printf("the number is negative");
    }
    return 0;
}