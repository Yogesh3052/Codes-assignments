#include <iostream>
using namespace std;


int main()
{
    //input of total number of students and their marks//
    int n;
    
    cout<<"enter number of students:-";
    cin>>n;
    int marks[n];
    for(int i=0;i<n;i++){
        cout<<"enter marks of students (if absent enter -1):-";
        cin>>marks[i];
    }


    // averge score of class
    int sum=0;
    float average;
    int absent=0;
    for(int j=0;j<n;j++)
    {
        if(marks[j]!=-1)
        {
            sum=sum+marks[j];
        }
        else{
            absent=absent+1;
        }
    }
    average=sum/n;
    cout<<"the average score of class is:-  "<<average<<endl;

    //highest score in the class
    int temp=marks[0];
    for(int k=1;k<n;k++)
    {
        if(temp<marks[k]){
            if(marks[k]!=-1)
        {
            temp=marks[k];
        }
            
        }
    }
    cout<<"the highest score is:-  "<<temp<<endl;
    

    //lowest score in class
    int low=marks[0];
    for(int h=1;h<n;h++){
        if(low>marks[h]){
            if(marks[h]!=-1)
        {
            low=marks[h];
        }
            
        }
    }
    cout<<"the lowest score in the class is:-  "<<low<<endl;


    //count of absent student
    cout<<"The count of absent student is:-  "<<absent<<endl;


    //marks with highest frequency
    



    return 0;
}