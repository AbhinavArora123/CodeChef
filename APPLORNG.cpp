#include <iostream>
using namespace std;

int main() {
	int x,a,b;
	cin>>x>>a>>b;
	int m=x-(a+b);
	if(m>=0){
	    cout<<"Yes"<<endl;
	}
	else{
	    cout<<"No"<<endl;
	}
	return 0;
}
