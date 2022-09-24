#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the number a:- ");
    scanf("%d",&a);
    printf("enter number b:- ");
    scanf("%d",&b);
    printf("enter number c:- ");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("a");
        }
        else{
            printf("c");
        }
    }
    else if (a==b && a>c)
    {
        printf("a & b are greater");
    }else if (a==c && a>b)
    {
        printf("a & c are greater");
    }
    else if(b==c && b>c){
        printf("B & C are greater");
    }
    else if (a==b && b==c){
        printf("all number are equal");
    }
    else if (b>c)
    {
        printf("b");
    }
    else{
        printf("c");
    }
    return 0;
    
}