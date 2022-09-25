#include<iostream>
using namespace std;

class Movie{
    public:
    string moviename;
    int price,sold;
    Movie(){
        moviename="RRR";
        price=20;
        sold=15;
    }

    Movie(string movie,int price2,int sold1){
        moviename=movie;
        price=price2;
        sold=sold1;
    }
    Movie(const Movie& obj){
        cout<<"copy"<<endl;
        moviename=obj.moviename;
        price=obj.price;
        sold=obj.sold;
    }

    ~Movie(){
        cout<<"Destructor"<<endl;
    }

    void print(){
        cout<<"movie"<<moviename<<endl;
        cout<<"price"<<price<<endl;
        cout<<"sold"<<sold<<endl;

    }
};

int main(){
    Movie m1;
    m1.print();

    Movie m2("PK",8,9);
    m2.print();

    Movie m3(m2);
    m3.print();

}