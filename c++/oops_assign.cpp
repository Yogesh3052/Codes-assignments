# include<iostream>
using namespace std;


class student
{
    private:
    int roll;
    char div;
    string name;
    int adress[100];
    int contact;

    public:
    student(){
        roll=9;
        name='yogesh';
        div= 'b';
        contact=6646546464;
        adress[100]=43434343444;
    }
    void getData();
    void Display();
    


};



void student::getData()
{
    cout<<"enter rollno & div & name";
    cin>>roll>>div>>name>>adress[100]>>contact;
}


void student::Display()
{
    cout<<"roll"<<roll<<endl;
    cout<<"div"<<div<<endl;
    cout<<"name"<<name<<endl;
    cout<<"adress"<<adress[100]<<endl;
    cout<<"contact no:"<<contact<<endl;
    
    
}

int main()
{
    student s1;
    //s1.getData();
    s1.Display();
return 0;
}