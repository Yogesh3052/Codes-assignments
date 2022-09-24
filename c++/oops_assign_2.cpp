#include<iostream>
#include<string.h>
using namespace std;
class Publication{
    protected:
    string title;
    float price;
    public:
    void getData1(){
         cout<<"\n Enter Title:";
         cin>>title;
          cout<<"\n Enter price:";
         cin>>price;
    }
    void display1(){
         cout<<"\n Title:"<<title;
          cout<<"\n Price:"<<price<<endl;
    }

};
class book: public Publication
{
    private:
    int pageCount;
    public:
    void getData2(){
        getData1();
        cout<<"pagecount:- ";
       cin>>pageCount;
       
    }
    void display2(){
        display1();
        cout<<"pagecount:- "<<pageCount<<endl;
    }
};
class tape:public Publication
{
    private:
    float playingTime;
    public:
    void getData(){
        cout<<"enter playing time";
        cin>>playingTime;
    }
    void display(){
        cout<<"playtime:-"<<playingTime<<endl;
    }

};
int main(){
    book b1;
    tape t1;
    b1.getData2();
    t1.getData();
    b1.display2();
    t1.display();

}