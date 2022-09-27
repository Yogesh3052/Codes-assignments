#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"enter number of students:-";
    cin>>n;
    int roll[n];
    for(int i=0;i<n;i++){
        cout<<"enter roll number of student:-";
        cin>>roll[i];
    }

    int searchNo;
    cout<<"enter roll no you wnt to search:- ";
    cin>>searchNo;

    //linear search
    int loc=-1;
    for(int i=0;i<n+2;i++){
        if(searchNo==roll[i]){
            cout<<"we have found the student:-"<<endl;
            loc=i;
            cout<<"position of roll number is:- "<<++i;
        }
    }
     if(loc==-1){
        cout<<"student not found"<<endl;
    }
    


    //sentinal search
    n=n+1;
    int roll1[n];
    for(int i=0;i<n;i++){
        roll1[i]=roll[i];
    }
    int senSearch;
    
    cout<<"enter rollnumber you want to find through sentinal search:-";
    cin>>senSearch;
    roll1[n]=senSearch;
     for(int i=0;i<=n;i++){
        if(senSearch==roll1[i]){
            cout<<"we have found the student:-"<<endl;
            i++;
            cout<<"position of roll number is:- "<<i;
            
        }
        else if(i==n){
            cout<<"student not found";
        }
    }


}