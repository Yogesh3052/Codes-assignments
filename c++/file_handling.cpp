#include <iostream>
#include<fstream>




using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    char buffer[193];
    fout.open("data",ios::out);

    fout<<"hello\n";
    fout<<"all";
    fout.close();


    fin.open("data");
    fin.open("file");
    fout.open("file",ios::out);
    while(!fin.eof()){

    fin>>buffer;
    fout<<buffer;
    cout<<buffer;
    }
    fin.close();
    fout.close();

    return 0;
}
