#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tn;
	cin>>tn;
	for(int ti=0;ti<tn;ti++)
	{
	    int s,x,y,z;
	    cin>>s>>x>>y>>z;
	    int a=s-x-y;
	    if(a>=z)
	    cout<<0<<endl;
	    else if(a<z)
	    {
	        if(s-y>=z||s-x>=z)
	        cout<<1<<endl;
	        else
	        cout<<2<<endl;
	    }
	    
	}
	
	return 0;
}
