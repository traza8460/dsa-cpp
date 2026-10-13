#include <iostream>
using namespace std;
int gcd(int a,int b){
    while(a){
        int t=a;
        a=b%a;
        b=t;
    }
    return b;
}
int main(){
    int a,b; cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}