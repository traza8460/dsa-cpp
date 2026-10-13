#include <iostream>
using namespace std;
bool isPrime(int n) {
    for (int j=2 ; j<n ; j++) {
        if (n%j==0)
            return false;
    }
    return true;
}
int main() {
    int n; cin>>n;
    for (int i=2; i<=n; i++) {
        if (isPrime(i))
            cout<<i<<" ";
    }
    return 0;
}