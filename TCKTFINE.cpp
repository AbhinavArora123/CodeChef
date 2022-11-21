#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,p,q;
	    cin>>x>>p>>q;
	    int m;
	    if(p>q){
	        m=x*(p-q);
	        cout<<m<<endl;
	    }
	    else{
	        m=x*(q-p);
	        cout<<m<<endl;
	    }
	    
	}
	return 0;
}
