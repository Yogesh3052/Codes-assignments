#include<iostream>
using namespace std;
/*int wordLength(string a){
    int len_a=a.length();
    
}*/

int main(){

    string a,b,c;
    cout<<"enter string a"<<endl;
    cin>>a;
    cout<<"enter string b:- "<<endl;
    cin>>b;
    cout<<"enter string c:-  "<<endl;
    cin>>c;
    int len_a=a.length();
    int len_b=b.length();
    int len_c=c.length();

    //display of longest word
    if(len_a>len_b){
        if (len_a>len_c)
        {
            cout<<"the string with longest length:-  "<<a<<endl;
        }
        else if(len_c>len_a){
            cout<<"the string with longest length:-  "<<c<<endl;
        }
        else{
            cout<<"the longest string is:-  "<<a<<" "<<c<<endl;
        }
    }
    else if (len_a==len_b){
        cout<<"the longest string is :-  "<<a<<" "<<b<<endl;
    }
    else if (len_b==len_c)
    {
        cout<<"the longest string is:-  "<<b<<" "<<c<<endl;
    }
    
    else if (len_b>len_c)
    {
        cout<<"the string with longest length:-  "<<b<<endl;
    }
    if(len_a==len_b==len_c){
        cout<<"the longest string is:-  "<<a<<" "<<b<<" "<<c<<endl;
    }
    else{
        cout<<"the stirng with longest length:-  "<<c<<endl;
    }
    

    //calculate frequency of charectar
    int count=0;
    char ch;
    cout<<"enter the character to find freqency of character in string a:-   ";
    cin>>ch;
    for(int i=0;i<=len_a;i++){
        if (a[i]==ch)
        {
            count++;
        }
        
    }
    cout<<"the frequency of character is:-  "<<count<<endl;

    count=0;
    cout<<"enter the character to find freqency of character in string b:-   ";
    cin>>ch;
    for(int i=0;i<=len_b;i++){
        if (b[i]==ch)
        {
            count++;
        }
        
    }
    cout<<"the frequency of character is:-  "<<count<<endl;


    count=0;
    cout<<"enter the character to find freqency of character in string c:-   ";
    cin>>ch;
    for(int i=0;i<=len_c;i++){
        if (c[i]==ch)
        {
            count++;
        }
        
    }
    cout<<"the frequency of character is:-  "<<count<<endl;


    //To check whether given string is palindrone
    string pal_a;
    for(int i=0;i<len_a;i++)
    {
         pal_a[i]=a[len_a-1-i];
    }
    cout<<pal_a;
    if(pal_a==a){
        cout<<"the word is not palindrome"<<endl;
    }
    else{
        cout<<"the word is palindrome"<<endl;
    }
}