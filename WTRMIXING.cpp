#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,x,y,p;
        cin>>a>>b>>x>>y;
        if(a==b){
            cout<<"Yes"<<endl;
        }
        else if(a<b){
            p=a+x;
            if(b<=p){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else if(a>b){
            p=b+y;
            if(a<=p){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
            
    }
	return 0;
}
