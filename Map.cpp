#include <iostream>
#include <string>
#include <iomanip> // setw
#include <map>
using namespace std;

void get_data(map <string, int> &mp)
{
    int n;
    cout << "Enter Number of Entries : ";
    cin >> n;

    string name;
    int pop;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter State : ";
        cin >> name;
        cout << "Enter Population : ";
        cin >> pop;

        mp.insert(make_pair(name, pop));
        cout << "\n";
    }
}

void display(map <string, int> &mp)
{
    cout << "-----Details-----\n";
    cout << left;
    cout << setw(5) << "Sr ";
    cout << setw(15) << "State";
    cout << "Population ";
    cout << endl;

    int sr = 1;

    map<string, int> :: iterator itr;
    for(itr = mp.begin(); itr != mp.end(); itr++)
    {
        cout << left;
        cout << setw(5) << sr++;
        cout << setw(15) << itr->first;
        cout << itr -> second;
        cout << endl;
    }
}

void search(map <string, int> &mp)
{
    string key;
    cout << "Enter State : ";
    cin >> key;
    map<string, int> :: iterator itr;
    for(itr = mp.begin() ; itr != mp.end()  ; itr++)
    {
        if(itr -> first == key)
        {
            cout << "\nState Found :- \n";
            cout << left;
            cout << setw(15) << itr->first;
            cout << itr->second;
            cout << endl;
            break;
        }
    }
    if(itr == mp.end())
    {
        cout << "State Not Found... " << endl;
    }
}


int main()
{
    cout<<"\n========Population of states in India==========\n";
    map<string , int> mp;
    bool ans = true;
    int choice;
    while(ans)
    {
        cout << "\n=================== MENU ===================";
        cout << "\n1. Insert State's Details";
        cout << "\n2. Display State's Details";
        cout << "\n3. Search State's Details";
        cout << "\n4. Exit";

        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                get_data(mp);
                break;
            case 2:
                display(mp);
                break;
            case 3:
                search(mp);
                break;
            case 4:
                ans = false;
                break;
        
            default:
                cout << "\nEnter valid choice...!\n";
                break;
        }
    }
    return 0;
    return 0;
}
