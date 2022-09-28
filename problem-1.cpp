#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"ENTER TWO NUMBERS -> "<<endl;\
    cin>>a>>b;
    try{
        if(b==0)
        throw "zero division error ";
        throw (a/b);
    }
    catch(const char *p){
        cout<<p<<endl;
    }
    catch(int i)
    {
        cout<<"ANS -> "<<i<<endl;
    }
    cout<<"END OF PROGRAM "<<endl;
}