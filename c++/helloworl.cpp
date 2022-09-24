# include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter size of array";
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter number";
        cin>>num[i];
    } 
    for(int j=n;j>=0;j--)
        {
        cout<<num[j];
        }
    return 0;  
}
//return 0;