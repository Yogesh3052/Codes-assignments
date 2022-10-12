#include<iostream>
#include<cmath>
using namespace std;

class complex{
    public:
    int real,img;
    int n;

    /*complex(){
         
        real=0;
        img=0;
        cout<<real<<"+"<<img<<"i";
    }*/
    complex operator +(complex c2){
        complex c3;
        c3.real=real+c2.real;
        c3.img=img+c2.img;
        return c3;
    }
    complex operator -(complex c2){
        complex c3;
        c3.real=real-c2.real;
        c3.img=img-c2.img;
        return c3;
    }
    complex operator *(complex c2){
        complex c3;
        c3.real=(real*c2.real)-(img*c2.img);
        c3.img=(real*c2.img)+(img*c2.real);
        return c3;
    }
    complex operator /(complex c2){
        complex c3;
        int d;
        d= (c2.real*c2.real)+(c2.img*c2.img);
        c3.real=(real*c2.real)+(img*c2.img)/d;
        c3.real=img*c2.real-real*c2.img/d;
        return c3;
    }
    friend void operator >>(istream &in,complex &c){
        cout<<"enter real part\n";
        in>>c.real;
        cout<<"enter imaniary part\n";
        in>>c.img;
    }
    friend void operator << (ostream &ot,complex &c){
        ot<<c.real;
        if(c.img<0){
            ot<<"";
        }
        else{
            ot<<"+";
        }
        ot<<c.img;
        ot<<"i";
    }
};


int main(){
    complex c1,c2,c3,n;
    
    cout<<"for addition of complex number press (1):- "<<endl;
    cout<<"for subtraction of complex nummbers press (2):- \n";
    cout<<"for multiplication of complex numbers press (3):- \n";
    cout<<"for division of complex numbers press (4):- \n";
    cin>>n.n;
    
    switch (n.n)
    {
    case 1:
        cin>>c1;
        cin>>c2;
        c3=c1+c2;
        cout<<c3;
        break;
    case 2:
        cin>>c1;
        cin>>c2;
        c3=c1-c2;
        cout<<c3;
        break;
    case 3:
        cin>>c1;
        cin>>c2;
        c3=c1*c2;
        cout<<c3;
        break;
    case 4:
        cin>>c1;
        cin>>c2;
        c3=c1/c2;
        cout<<c3;
        break;
    
    default:
        break;
    }

}