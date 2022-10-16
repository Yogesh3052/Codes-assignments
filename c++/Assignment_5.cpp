#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number of students"<<endl;
    cin>>n;
    int percent[n];
    for(int i=0;i<n;i++){
        cout<<"enter percent of marks of student "<<i+1<<" :- ";
        cin>>percent[i];
    }
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(percent[i]>percent[i+1]){
                int temp=percent[i];
                percent[i]=percent[i+1];
                percent[i+1]=temp;
            }
        }
        counter++;
    }
    int j=1;
    cout<<"----------------------"<<endl;
    cout<<"Top 5 students are:-"<<endl<<"----------------------"<<endl;
    for(int i=n-1;i>n-6;i--){
        
        cout<<"| "<<j<<" | "<<percent[i]<<"%"<<"            |"<<endl;
        j++;
    }
    cout<<"----------------------";
    return 0;
}