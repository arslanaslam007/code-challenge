#include<iostream>
using namespace std;

int main() {
    int t,a,b;
    cin>>t;
    
    for(int i=1;i<=t;i++){
        cin>>a>>b;
    
        // Both are Odd 
        if (a%2 !=0 and b%2 != 0)
             cout<<"No\n";
        else if (a==1 or b==1)
             cout<<"No\n";
        else
             cout<<"Yes\n";
    }
    
    return 0;
}