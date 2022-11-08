#include <iostream>

using namespace std;

struct node
{
    int data;
    node* next;
};

class Sll
{
    node *temp, *temp1, *head;

public:
    Sll()
    {
        head= NULL;
    }
    void create();
    void display();
    void insert_beg();
    void insert_end();
    void insert_in_between();
    void delete();
};

void Sll :: create()
{
    char val;
    do
    {
        temp = new node;
        cin>> temp -> data;
        temp->next = NULL;
        if (head == NULL)
            head = temp;
        else
        {
            temp1 = head;
            while(temp1->next != NULL)
                temp1 = temp1 -> next;
            temp1->next = temp;

        }
        cout<<"Do You Want more nodes to be added: ";
        cin>>val;
    }while(val == 'Y');
}

void Sll :: display()
{
    temp1 = head;
    while(temp1 != NULL)
    {
        cout<<temp1->data<<" ";
        temp1 = temp1->next;
    }
}

void Sll :: insert_beg()
{
    temp = new node;
    cout<<"\n"<<"Enter The Number to be added in beginning: ";
    cin>> temp -> data;
    temp->next = NULL;
    temp->next = head;
    head = temp;
}

void Sll :: insert_end()
{
    temp = new node;
    cout<<"\n"<<"Enter The Number to be added in End: ";
    cin>> temp -> data;
    temp->next = NULL;
    temp1 = head;
    while(temp1->next != NULL)
        temp1 = temp1 -> next;
    temp1->next = temp;
}

void Sll :: insert_in_between()
{
    int val;
    cout<<'\n'<<"Enter after which value you want to insert";
    cin>>val;

    temp = new node;
    cin>> temp -> data;
    temp->next = NULL;

    temp1 = head;
    while(temp1 -> next != NULL)
    {
        if(temp1->data == val)
        {
            temp->next = temp1->next;
            temp1->next = temp;
            break;
        }
        temp1 = temp1->next;
    }
}
void Sll::delete begn()
{
    temp=head;
    head=head->next;
    delete temp;

}
void Sll::delete_last()
{
    temp=head;
    while(temp->next!=NULL)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=NULL;
    delete temp;
}

int main()
{
    Sll s;
    s.create();
    s.display();
    s.insert_beg();
    s.display();
    s.insert_end();
    s.display();
    s.insert_in_between();
    s.display();

    return 0;
}
