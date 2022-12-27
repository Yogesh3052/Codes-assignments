#include<iostream>
#include<string.h>
using namespace std;

template < typename T >
void input(T * a, int size)
{
    cout << "\nEnter " << size << " elements in array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
}

template < typename T >
void sorting(T *a, int size)
{
    int min, i, j;
    for (i=0; i<size; i++)
    {
        min = i;
        for (j=i+1; j<size; j++)
        {
            if (a[j] < a[min])
            {
                T temp;
                temp = a[min];
                a[min] = a[j];
                a[j] = temp;
            }
        }
    }
        cout << "\n";
}

template < typename T >
void display(T * a, int size)
{
    for (int i = 0; i < size; i++)
        {
            cout << a[i] << "\t";
        }
}

int main()
{
    int size, ch;
    char ans;
    cout << "How many elements you want to sort: ";
    cin >> size;

    if (size < 1)
    {
        cout << "\nArray size can not be less than 0. Initializing size to 1";
        size = 1;
    }

    int a[size];
    float b[size];
    char c[size];
    string d[size];

    do
    {
        cout << "**SELECTION SORT**\n1. Integer\n2. Float\n3. Character\n4. String\nEnter your choice: ";
        cin >> ch;
        switch(ch)
        {
        case 1:
            input(a, size);
            cout << "\nElements before sorting\n";
            display(a, size);
            cout << "\nElements after sorting\n";
            sorting(a, size);
            display(a, size);
            break;

        case 2:
            input(b, size);
            cout << "\nElements before sorting\n";
            display(b, size);
            cout << "\nElements after sorting\n";
            sorting(b, size);
            display(b, size);
            break;

        case 3:
            input(c, size);
            cout << "\nElements before sorting\n";
            display(c, size);
            cout << "\nElements after sorting\n";
            sorting(c, size);
            display(c, size);
            break;

        case 4:
            input(d, size);
            cout << "\nElements before sorting\n";
            display(d, size);
            cout << "\nElements after sorting\n";
            sorting(d, size);
            display(d, size);
            break;
        }

        cout << "\nDo you want to continue? (y/n)";
        cin >> ans;
    }while (ans == 'y');

    return 0;
}
