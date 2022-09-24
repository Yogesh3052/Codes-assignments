#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"enter number of rows:-  ";
    cin>>rows;
    int cols;
    cout<<"enter number of columns:-  ";
    cin>>cols;
    int arr[rows][cols];


    //input of each element in matrix 1
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<"enter element "<<"["<<i<<"]"<<"["<<j<<"] :- ";
            cin>>arr[i][j];
        }
    }
}