#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int y;
	    if(x>100){
	        y=x-10;
	        cout<<y<<endl;
	    }
	    else{
	        cout<<x<<endl;
	    }
	}
	return 0;
}
