#include<stdio.h>
int main()
{
    int n,a1,a2,a3,a4,a5,a6,t,s1,s2;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        a1=n/100000;
        n=n%100000;
        a2=n/10000;
        n=n%10000;
        a3=n/1000;
        n=n%1000;
        a4=n/100;
        n=n%100;
        a5=n/10;
        n=n%10;
        a6=n;
        s1=a1+a2+a3;
        s2=a4+a5+a6;
        if(s1==s2) { printf("yes\n"); }
        else { printf("no\n"); }

    }
}