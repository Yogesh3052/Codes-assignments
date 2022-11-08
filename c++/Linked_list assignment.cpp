#include <iostream>

using namespace std;
    struct node
{
    int PRN;
    string Name;
    node* next;
};
class Sll
{
    node *temp, *temp1, *President;

public:
    Sll()
    {
        President= NULL;
    }
    void create();
    void create_president();
    void display();
    void Insert_president();
    void Insert_secretary();
    void insert_in_between();
    void delete_president();
    void delete_secretary();

};
void Sll::create_president()
{
        char val;
       temp = new node;
        cin>> temp -> PRN;
        cin>>temp->Name;
        temp->next = NULL;
        if (President == NULL)
            President = temp;
        else
        {
            temp1 = President;
            while(temp1->next != NULL)
                temp1 = temp1 -> next;
            temp1->next = temp;


}
void Sll :: create()
{
    char val;
    do
    {
        temp = new node;
        cin>> temp -> PRN;
        cin>>temp->Name;
        temp->next = NULL;
        if (President == NULL)
            President = temp;
        else
        {
            temp1 = President;
            while(temp1->next != NULL)
                temp1 = temp1 -> next;
            temp1->next = temp;

        }
        cout<<"Do You Want to add member details  ";
        cin>>val;
    }while(val == 'Yes');
}
void Sll :: Insert_president()
{
    temp = new node;
    cout<<"\n"<<"Enter The PRN Number of new president:-  ";
    cin>> temp -> PRN;
    cout<<"\n Enter Name of president:-  ";
    cin>>temp->Name;
    temp->next = NULL;
    temp->next = President;
    President= temp;
}
void Sll :: Insert_secretary()
{
    temp = new node;
    cout<<"\n"<<"Enter The PRN number of secretary:-  ";
    cin>> temp -> PRN;
    cout<<"\n Enter Name of secretary:-  ";
    cin>>temp->Name;
    temp->next = NULL;
    temp1 = President;
    while(temp1->next != NULL)
        temp1 = temp1 -> next;
    temp1->next = temp;
}
void Sll::delete_president()
{
    temp=President;
    President=President->next;
    delete temp;

}
void Sll::delete_secretary()
{
    temp=President;
    while(temp->next!=NULL)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=NULL;
    delete temp;
}
void Sll :: display()
{
    temp1 = President;
    while(temp1 != NULL)
    {
        cout<<"PRN NO"<<"  |  "<<"Name\n";
        cout<<temp1->PRN<<"  |  "<<temp1->Name<<"\n;
        temp1 = temp1->next;
    }
}


int main()
{
    Sll m;
    cout<<"Enter the President details :-  \n";
    m.create_president();
    cout<<"Enter the member details followed by secertary details:- \n";
    m.create();

}
