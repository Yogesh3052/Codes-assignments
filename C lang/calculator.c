#include<stdio.h>
#include<conio.h>
int main(){

    printf("enter operator\n");
    printf("for addition press (w)\n");
    printf("for subtraction press (x)\n");
    printf("for multiplication press (y)\n");
    printf("for didvision press (z)\n");
    char op;
    
    scanf("%c",&op);
    int a,b;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    switch (op)
    {
    case 'w':
        printf("%d+%d=%d\n",a,b,a+b);
        break;
    case 'x':
        printf("%d-%d=%d\n",a,b,a-b);
        break;
    case 'y':
        printf("%d*%d=%d\n",a,b,a*b);
        break;
    case 'z':
        printf("%d / %d=%d\n",a,b,a/b);
        break;
    
    default:
        printf("invalid input");
        break;
    }
    return 0;
}