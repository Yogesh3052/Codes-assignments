#include <iostream>
#include <string.h>
using namespace std;

class student
{
    char *name;
    string dob;
    int roll, lno;
    static int cnt; // Static Variable
public:
    student() // Default Constructor
    {
        name = new char[30];
        dob = "";
        lno = 0;
        roll = 0;
    }
    student(char name1[], int roll1, string dob1, int lno) // Parameterized Constructor
    {
        strcpy(name, name1);
        roll = roll1;
        dob = dob1;
        this->lno = lno; // USe of this pointer
    }
    student(student &s1) // Copy Constructor
    {
        strcpy(name, s1.name);
        roll = s1.roll;
        dob = s1.dob;
        lno = s1.lno;
    }
    inline void Heading() // Inline Function
    {
        cout << "\n\t\t\t********* Student Database ***************\n\n";
    }
    friend void displaydata(student s1[], int n); // Friend Function
    void getdata();
    void display();
    static int totalRecord();
    ~student() // Destructor
    {
        cnt--;
    }
};
int student::cnt = 1;
void student::getdata()
{
    cin >> name >> roll >> dob >> lno;
    cnt++;
}
void student::display()
{
    cout << name << "\t" << roll << "\t" << dob << "\t" << lno << "\n";
}
void displaydata(student s1[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << s1[i].name << "\t" << s1[i].roll << "\n";
    }
}
int student::totalRecord() // Display Total Records
{
    return cnt;
}
int main(int argc, char **argv)
{
    student s1[10];
    int n;
    cout << "Enter No. of Records to Be Added: ";
    cin >> n;
    cout << "\nEnter Name, Roll No, DOB, Liscence No";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Record No: " << i + 1;
        s1[i].getdata();
    }
    cout << "Name Roll No DOB Liscence No\n";
    for (int i = 0; i < n; i++)
    {
        s1[i].display();
    }
    cout << "Output After Copy Constructor. \n";
    cout << "Name Roll No DOB Liscence No\n";
    student s2(s1[0]); // Copy Constructor
    s2.display();
    cout << "Output of Friend Function Display of Name & Roll.No. \n\n";
    cout << "Name\t\t Roll. No \n";
    displaydata(s1, n); // Friend Function
    cout << "\nEnter Name, Roll No, DOB, Liscence No : ";
    student *s3 = new student(); // Dynamic Memory Allocation for student
    s3->getdata();
    s3->display();
    cout << "\n\t Total No. Of Records Are: " << s3->totalRecord();
    delete s3; // Memory Deallocation
    cout << "\n\t After DELETE........Total No. Of Records Are: " << student::totalRecord();
    return 1;
}
