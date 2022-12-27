#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

class publication
{
protected:
    string title;
    int price;
};

class Book : public publication
{
    int pagecnt;
    static int cnt1;

public:
    void getBookDetails();
    void displayBookDetails();
    void reset()
    {
        title = "";
        price = 0;
        pagecnt = 0;
    }
};

int Book::cnt1;
class AudioC : public publication
{
    int playtime;

public:
    void getAudioCDetails();
    void displayAudioCDetails();
};

void AudioC::getAudioCDetails()
{
    try
    {
        cout << "\n Enter Title: " << title;
        cin >> title;
        if (!isalpha(title[0]))
            throw 1;

        cout << "\n Enter Price: ";
        cin >> price;
        if (price <= 0)
            throw 'a';

        cout << "\n Enter Play Time: ";
        cin >> playtime;
        if (playtime <= 0)
            throw 1.1f;
    }
    catch (int e1)
    {
        cout << "\n Wrong Book Title.";
    }
    catch (char e2)
    {
        cout << "\n Wrong Price.";
        title = "";
        price = 0;
        playtime = 0.0;
    }
    catch (float e3)
    {
        cout << "\n Wrong Play Time.";
        title = "";
        price = 0;
        playtime = 0.0;
    }
}

void AudioC::displayAudioCDetails()
{
    cout << "\t" << title << "\t" << price << "\t" << playtime << "\n";
}

void Book::getBookDetails()
{
    try
    {
        cnt1++;
        cout << "\n Enter Title: " << title;
        cin >> title;
        if (!isalpha(title[0]))
            throw 1;

        cout << "\n Enter Price: ";
        cin >> price;
        if (price <= 0)
            throw 2;

        cout << "\n Enter Page Count: ";
        cin >> pagecnt;
        if (pagecnt <= 0)
            throw 3;
    }
    catch (int e1)
    {
        cout << "\n Wrong Value Entered.";
        cout << "\n Wrong Record Entry at " << cnt1 << "Record";
        this->reset();
    }
}

void Book::displayBookDetails()
{
    cout << "\t" << title << "\t" << price << "\t" << pagecnt << "\n";
}

int main()
{
    Book b1[10];
    AudioC a1[10];
    int n, ch, ans;
    do
    {
        cout << "1: Book Details.\n";
        cout << "2: Audio C Details";
        cout << "\n Enter User's Choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\n Enter No. of Books: ";
            cin >> n;
            for (int i = 0; i < n; i++)
                b1[i].getBookDetails();
            cout << "\n Title" << "\t Price" << "\t Page Count\n\n";
            for (int i = 0; i < n; i++)
                b1[i].displayBookDetails();
            break;
        case 2:
            cout << "\n Enter No. of Audio C: ";
            cin >> n;
            for (int i = 0; i < n; i++)
                a1[i].getAudioCDetails();
            cout << "\n Title" << "\t Price" << "\t Page Count\n\n";
            for (int i = 0; i < n; i++)
                a1[i].displayAudioCDetails();
            break;
        }
        cout << "\n Do you want to continue : [1/0] ";
        cin >> ans;
    } while (ans == 1);
    return 0;
}
