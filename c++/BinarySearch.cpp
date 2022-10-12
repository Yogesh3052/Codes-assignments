#include<iostream>
using namespace std;
int binarySearch(int roll[],int n,int key){
    int s=0;
    int e=n;
    while(s<=n){
        int midterm=(s+e)/2;
        if(midterm==key){
            return midterm;
        }
        else if(midterm<key){
            e=midterm-1;
        }
        else if(midterm>key){
            s=midterm+1;
        }
        
        else{
            return -1;
            }
            
    }
    // return -1;
}

int main(){
    int n;
    cout<<"enter number of students:-";
    cin>>n;
    int roll[n];
    for(int i=0;i<n;i++){
        cout<<"enter roll number of student:-";
        cin>>roll[i];
    }

    //sorting of array
    /*int sort[n];
    int temp=0;;
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(roll[j]<roll[i]){
                temp=roll[j];
                roll[j]=roll[i];
                roll[i]=temp;
            }
        }
        
    }*/
    int key;
    cout<<"enter roll number you wnt to search:- ";
    cin>>key;
    int result=binarySearch(roll,n,key);
    if(result==-1){
        cout<<"student not found";
    }
    else{
        cout<<"the position of rolnumber is "<<result;
    }
    return 0;
}