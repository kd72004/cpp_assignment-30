#include<iostream>
using namespace std;
int main()
{
    char p[10];
    int count=0;
    cout<<"enter pin code of your area -> ";
    cin>>p;
    try{
        for(int i=0;p[i]!='\0';i++)
        {
            count++;
        }
        if(count!=6)
        throw "Invalid pincode number ";
    }
    catch(const char *p){
        cout<<p<<endl;
    }
}