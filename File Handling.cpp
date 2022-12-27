#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

class student
{
private:
    int roll;
    string name;
    long contact;

public:
    void getdata();
    void display();
};
void student::getdata()
{
    cout << "\n Enter Roll No: ";
    cin >> roll;
    cin.clear();
    cin.ignore();
    cout << "\n Enter Name: ";
    getline(cin, name);
    cin.clear();
    cin.ignore();
    cout << "\n Contact No: ";
    cin >> contact;
}
void student::display()
{
    cout << roll << setw(5) << name << setw(30) << contact << "\n";
}
int main()
{
    student s1[10], s2[10];
    int i, n, ch, ans;
    ofstream fout;
    ifstream fin;
    cout << "\n Enter No. of Records: ";
    cin >> n;
    do
    {
        cout << "\n 1: File Write.";
        cout << "\n 2: File Display.";
        cout << "\n Enter your Choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            fout.open("student_2", ios::binary | ios::out | ios::app);
            for (i = 0; i < n; i++)
            {
                s1[i].getdata();
                fout.write((char *)&s1[i], sizeof(student));
            }
            fout.close();
            break;
        case 2:
            fin.open("student_2", ios::binary | ios::in | ios::app);
            cout << "Roll No" << setw(5) << "Name" << setw(30) << "Contact No." << "\n";
            for (i = 0; i < n; i++)
            {
                fin.read((char *)&s2[i], sizeof(student));
                s2[i].display();
            }
            fin.close();
            break;
        }
        cout << "\n Do you want to continue: (1/0) ";
        cin >> ans;
    } while (ans == 1);
    return 0;
}
