#include <iostream>
using namespace std;
int sod(int n) {
    int sum= 0;
    for (int i=n;i>0;i=i/10) {
        sum=sum+(i%10);
    }
    return sum;
}
int main() {
    int n; cin>>n;
    cout<<sod(n);
    return 0;
}