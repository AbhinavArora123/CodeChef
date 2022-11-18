#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if((x%2!=0) || (x==0 && y%2!=0 )){
	        cout<<"No"<<endl;
	        
	    }
	    else{
	        cout<<"Yes"<<endl;
	    }
	}
	return 0;
}
