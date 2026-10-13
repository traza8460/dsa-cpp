#include <iostream>
using namespace std;
int nod(int n) {
    int count=0;
    for (int i=n;i>0;i=i/10) {
        count++;
    }
    return count;
}
int main() {
    int n; cin>>n;
    cout<<nod(n)<<endl;
    return 0;
}