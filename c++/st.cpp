#include<iostream>
using namespace std;
class k{
    public:
    int n1;
    void operator ++(){
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

int main()
{
    k o;
    o.getdata();
    ++o;
    o.display();
    
    return 0;
}