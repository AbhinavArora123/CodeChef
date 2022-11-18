#include <iostream>
#include<vector>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	ll n;
	cin>>n;
	ll rem = n % 6;
	if(rem == 0 || rem == 1 || rem == 3){
	    cout<<"yes\n";
	}
	else{
	    cout<<"no\n";
	}
    
	return 0;
}
