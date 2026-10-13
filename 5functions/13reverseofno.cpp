#include <iostream>
using namespace std;
int reverseofnum(int n) {
    int rev=0;
    while(n) {
        rev=rev*10;
        rev=rev+n%10;
        n=n/10;
    }
    return rev;
}
int main() {
    int n; cin>>n;
    cout<<reverseofnum(n)<<endl;;
    return 0;
}