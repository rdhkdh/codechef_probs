#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) 
	{
	    int L,R, count=0;
	    cin>>L>>R;
	    for(int i=L; i<=R; i++)
	    {
	        int m= i%10;
	        if(m==2||m==3||m==9) {count=count+1;}
	    }
	    cout<<count<<endl;
	}
	return 0;
}
