#include<stdio.h>
int main(){
    int n;
    printf("enter number to check if its even or odd:- ");
    scanf("%d",&n);
    int check=n%2;
    if(check==0){
        printf("the given number is even ");
    }
    else{
        printf("the given number is odd ");
    }
    return 0;
}