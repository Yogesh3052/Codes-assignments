#include <iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

class transformation
{
    public:
        int rotat[3][3];
        int trans[3][3];
        int scal[3][3];

        void display(int tri[3][3]);
        void operator+(int tri[3][3]);   //translation
        void operator*(int tri[3][3]);   //scaling
        void operator-(int tri[3][3]);   //rotation
};

void transformation::display(int tri[3][3])
{
    line(tri[0][0] , tri[1][0] , tri[0][1] , tri[1][1]);
    line(tri[0][1] , tri[1][1] , tri[0][2] , tri[1][2]);
    line(tri[0][2] , tri[1][2] , tri[0][0] , tri[1][0]);
}

void transformation::operator+(int tri[3][3])
{
    int tx , ty;
    cout << "\nEnter translation factor(tx) : ";
    cin >> tx;
    cout << "Enter translation factor(ty) : ";
    cin >> ty;

    for(int i = 0 ; i < 3 ; i++)
    {
        trans[0][i] = tri[0][i] + tx;
        trans[1][i] = tri[1][i] + ty;
        trans[2][i] = 1;
    }
    display(trans);
}

void transformation::operator*(int tri[3][3])
{
    int sx , sy;
    cout << "Enter scaling factor(Sx) : ";
    cin >> sx;
    cout << "Enter scaling factor(Sy) : ";
    cin >> sy;

    for(int i = 0 ; i < 3 ; i++)
    {
        scal[0][i] = tri[0][i] * sx;
        scal[1][i] = tri[1][i] * sy;
        scal[2][i] = 1;
    }

    display(scal);
}

void transformation::operator-(int tri[3][3])
{
    float theta;
    cout << "Enter rotation angle(theta) : ";
    cin >> theta;

    theta = theta * (3.14/180);

    for(int i = 0 ; i < 3 ; i++)
    {
        rotat[0][i] = (tri[0][i]*cos(theta) - tri[1][i]*sin(theta));
        rotat[1][i] = (tri[0][i]*sin(theta) + tri[1][i]*cos(theta));
        rotat[2][i] = 1;
    }

    display(rotat);
}
int main()
{
    initwindow(600,600);
    int tri[3][3] = {{300,250,350},{200,300,300},{1,1,1}};
    cout << "******************** 2-D Tranformation ********************\n\n";
    transformation temp;
    temp.display(tri);

    bool ans = true;
    int choice;
    while(ans)
    {
        cout << "-------------- MENU --------------";
        cout << "\n1. Translation";
        cout << "\n2. Rotation";
        cout << "\n3. Scaling";
        cout << "\n4. Exit";
        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                temp + tri;
                break;
            case 2:
                temp - tri;
                break;
            case 3:
                temp * tri;
                break;
            case 4:
                ans = false;
                break;
            case 5:
                cout << "\nEnter valid choice ...!";
                break;
        }
    }
    getch();
    return 0;
}
