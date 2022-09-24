#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("enter  integers");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        
    }
     printf("the sum of array is=%d\n",sum);
     int average=sum/n;
     printf("average=%d",average);
    return 0;
}