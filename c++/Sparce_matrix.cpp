#include<iostream>
using namespace std;

int main(){
    //code for matrix1
    int row,col;
    cout<<"enter row ";
    cin>>row;
    cout<<"enter cols ";
    cin>>col;
    int matrix[row][col];


    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"enter element"<<"["<<i<<"]"<<"["<<j<<"]";
            cin>>matrix[i][j];
        }
    }


    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           // cout<<"enter element"<<"["<<i<<"]"<<"["<<j<<"]";
            cout<<matrix[i][j];
        }
        cout<<endl;
    }

    int size=0;
    
    for(int i=1;i<row;i++){
        for(int j=0;j<3;j++){
            if(matrix[i][j]!=0){
                size++;
            }
        }
    }
     
    int sparce[size][3];
    int k=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<3;j++){
            if(matrix[i][j]!=0){
                sparce[k][0] = i;
                sparce[k][1] = j;
                sparce[k][2] = matrix[i][j];
                k++;
                   }
        }
    }
    
    char head[3][10]= { "row", "col", "value" };
    for (int i = 0; i < 4; i++){
    cout << head[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<=size;i++){
        for(int j=0;j<3;j++){
            cout<<sparce[i][j]<<"   ";
        }
        cout<<endl;
    }



}