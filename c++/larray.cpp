#include<iostream>
using namespace std;
void large(int n){
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp=0;
    for(int i=0;i<n;i++){
        
        if(arr[i]<arr[i+1]){
            temp=arr[i+1];
        }
        else{
            temp=arr[i];
        }
    }
    cout<<temp;
}

int main(){
    int n;
    cin>>n;
    large(n);
    
}