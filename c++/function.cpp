#include<iostream>
using namespace std;

int square(int a){
    int b=a*a;
    //cout<<b;
    return b;
}
int main(){
    int a,k;
    cin>>a;
    //square(a);
    k=square(a);
    cout<<k;
}