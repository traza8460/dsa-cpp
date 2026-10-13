#include <iostream>
using namespace std;
int gcd(int a,int b) {
    while (a!=b) {
        int t; 
        if (a>b) {
            t=a-b;
            a=t;
        } else {
            t=b-a;
            b=t;
        }
    }
    return a;
}
int main() {
    int a,b; cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}