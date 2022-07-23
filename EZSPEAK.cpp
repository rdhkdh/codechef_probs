#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	string word;
	while(t--)
	{
	    cin>>n;
	    cin>>word;
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u')
	        {
	            count=0;
	        }
	        else{count++;}
	        if(count==4) {cout<<"NO"<<endl; break;}
	        
	    }
	    if(count<4) {cout<<"YES"<<endl;}
	    
	}
	return 0;
}
