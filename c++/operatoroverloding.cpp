#include<iostream>
using namespace std;

class A{
    public:
    int n1;
    void operator -(){
        n1=-n1;

    }

    void getdata(){
        cout<<"input";
        cin>>n1;
    }
    void display(){
        cout<<n1;
    }
};

int main(){
    A o1;
    o1.getdata();
    -o1;
    o1.display();
}



