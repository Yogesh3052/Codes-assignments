#include <iostream>
#include <algorithm>
#include <iterator>
#include <string.h>
#include <vector>

using namespace std;

class Person
{
    string name, dob;
    long int tele_no;
    int age;

public:
    bool operator==(Person p)
    {
        if(tele_no == p.tele_no)
            return true;
        else
            return false;
    }

    bool operator>(Person p)
    {
        return (age < p.age);
    }

    void getData();
    void displayData(vector <Person> v);
    void searchData(vector <Person> v);
    void sortData(vector <Person> v);
};

void Person::getData()
{
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your date of birth: ";
    cin >> dob;
    cout << "Enter your telephone number: ";
    cin >> tele_no;
    cout << "Enter your age: ";
    cin >> age;
}

void Person::displayData(vector <Person> v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout << "Name: " << v[i].name << endl;
        cout << "Date of birth: " << v[i].dob << endl;
        cout << "Telephone number: " << v[i].tele_no << endl;
        cout << "Age: " << v[i].age << endl;
    }
}

void Person::searchData(vector <Person> p)
{
    Person p1;
    cout << "\nEnter the telephone number you want to search: ";
    cin >> p1.tele_no;

    vector <Person>::iterator itr;
    itr = find(p.begin(), p.end(), p1);

    if(itr != p.end())
        cout << "Telephone number found!\n";
    else
        cout << "Telephone number not found :(\n";
}

void Person::sortData(vector <Person> p)
{
    sort(p.begin(), p.end());
}

int main()
{
    char ans, menu;
    int choice;
    vector <Person> v;
    Person p;

    do
    {
        cout << "\n\n***** MENU *****\n";
        cout << "1. Get records\n2. Display records\n3. Search a record\n4. Sort the records\5. Exit\n\nEnter your choice: ";
        cin >> choice;
        switch(choice)
        {
        case 1:
            do
            {
                p.getData();
                v.push_back(p);
                cout << "Do you want to continue? (y/n) ";
                cin >> ans;
            }while(ans == 'y');
            break;

        case 2:
            p.displayData(v);
            break;

        case 3:
            p.searchData(v);
            break;

        case 4:
            p.sortData(v);
            break;

        case 5:
            break;
        }
        cout << "Press 'm' to return to menu ";
        cin >> menu;
    }while(menu == 'm');

    return 0;
}

