#include<iostream>
using namespace std;
int main()
{
    char number[20];
    int count=0;
    cout<<"Enter mobile number -> "<<endl;
    cin>>number;
    for(int i=0;number[i]!='\0';i++)
    {
        count++;
    }
    cout<<endl;
    try{
        if(count!=10)
        throw "Invalid mobile number ";
    }
    catch(const char *p)
    {
        cout<<p<<endl;
    }
}