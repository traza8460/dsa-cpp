#include <iostream>
using namespace std;
void primefactor(int n) {
    for (int i=2; i<=n; i++) {
        while (n%i==0) {
            cout<<i<<" ";
            n=n/i;
        }
    }
}
int main() {
    int n; cin>>n;
    primefactor(n);
    return 0;
}
