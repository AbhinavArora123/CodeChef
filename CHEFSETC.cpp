#include <iostream>
using namespace std;
bool result(int a,int b,int c,int d)
{
    if(a==0||b==0||c==0||d==0){
        return true;
    }
    if(a+b==0||a+c==0||a+d==0){
        return true;
    }
    if(b+c==0||b+d==0||c+d==0)return true;
    if(a+b+c==0||a+b+d==0||b+c+d==0||a+c+d==0)return true;
    if(a+b+c+d==0)return true;
    
    return false;
}
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(result(a,b,c,d)){
	    cout<<"Yes"<<endl;
	    
	}
	else cout<<"No"<<endl;}
	return 0;
}