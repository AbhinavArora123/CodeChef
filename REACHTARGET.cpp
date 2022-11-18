#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x-y>=1){
	        cout<<x-y<<endl;
	    }
	    else{
	        cout<<y-x<<endl;
	    }
	}
	return 0;
}
