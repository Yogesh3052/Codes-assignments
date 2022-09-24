#include<iostream>
using namespace std;

int main()
{
    //declartion of number of rows & columns of matrix 1
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

    //printing of matrix 1
    for(int k=0;k<rows;k++)
    {
        cout<<"[";
        for(int l=0;l<cols;l++)
        {
            cout<<arr[k][l]<<" ";
        }
        cout<<"]"<<endl;
    }

//declartion of number of rows & columns of matrix 2
    int rows_2;
    cout<<"enter number of rows of second matrix:-  ";
    cin>>rows_2;
    int cols_2;
    cout<<"enter number of columns of second matrix:-  ";
    cin>>cols_2;
    int Arr_2[rows_2][cols_2];



    //input of each element in matrix 2
    for(int i=0;i<rows_2;i++){
        for(int j=0;j<cols_2;j++){
            cout<<"enter element "<<"["<<i<<"]"<<"["<<j<<"] :- ";
            cin>>Arr_2[i][j];
            
        }
    }

    //printing of matrix 2
    for(int k=0;k<rows_2;k++)
    {
        cout<<"[";
        for(int l=0;l<cols_2;l++)
        {
            cout<<Arr_2[k][l]<<" ";
        }
        cout<<"]"<<endl;
    }

    //addition of two matrix
    int Add[rows][cols];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++){
            Add[i][j]=arr[i][j]+Arr_2[i][j];
        }
    }

    cout<<"Addition of Matrix is:-  "<<endl;
    for(int i=0;i<rows;i++)
    {
        cout<<"[";
        for(int j=0;j<cols;j++){
            cout<<Add[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }




    //Subtraction of given matrix
    int Subt[rows][cols];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++){
            Subt[i][j]=arr[i][j]-Arr_2[i][j];
        }
    }

    cout<<"Subtraction of Matrix is:-  "<<endl;
    for(int i=0;i<rows;i++)
    {
        cout<<"[";
        for(int j=0;j<cols;j++){
            cout<<Subt[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }



    //multiplication of  two matrix
    int Mult[10][10];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols_2;j++){
            Mult[i][j]=0;
            for(int k=0;k<cols;k++){
                Mult[i][j]=Mult[i][j]+arr[i][k]*Arr_2[k][i];
            }
        }
    }
    

    cout<<"Multiplication of Matrix is:-  "<<endl;
    for(int i=0;i<rows;i++)
    {
        cout<<"[";
        for(int j=0;j<cols;j++){
            cout<<Mult[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }

    //Transpose of matrix 1
    int Trans[10][10];
    for(int i=0;i<rows_2;i++){
        for(int j=0;j<cols_2;j++){
            Trans[i][j]=arr[j][i];
            
        }
    }


    cout<<"Transpose matrix 1:-  "<<endl;
    for(int k=0;k<rows;k++)
    {
        cout<<"[";
        for(int l=0;l<cols;l++)
        {
            cout<<Trans[k][l]<<" ";
        }
        cout<<"]"<<endl;
    }


    //transpose of matrix 2
    int Trans2[10][10];
    for(int i=0;i<rows_2;i++){
        for(int j=0;j<cols_2;j++){
            Trans2[i][j]=Arr_2[j][i];
            
        }
    }


    cout<<"Transpose matrix 1:-  "<<endl;
    for(int k=0;k<rows;k++)
    {
        cout<<"[";
        for(int l=0;l<cols;l++)
        {
            cout<<Trans2[k][l]<<" ";
        }
        cout<<"]"<<endl;
    }
}