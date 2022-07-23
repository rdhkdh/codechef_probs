#include<iostream>
using namespace std;
int main()
{
    int t,n,a1,a2,a3,a4,a5,a6,s1,s2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a1=n/(10^5);
        cout<<a1<<a2<<a3<<a4<<a5<<a6;
        n=n%(10^5);
        a2=n/(10^4);
        n=n%(10^4);
        a3=n%(10^3);
        n=n%(10^3);
        a4=n%(10^2);
        n=n%(10^2);
        a5=n%(10^1);
        a6=n%10;
        s1=a1+a2+a3;
        s2=a4+a5+a6;
        if(s1==s2) { cout<<"yes"<<endl; }
        else { cout<<"no"<<endl; }

    }
}