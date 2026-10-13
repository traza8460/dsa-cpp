#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    for (int row=1; row<=n; row++) {
        for (int col=1; col<=n; col++) {
            if( row==n/2+1 || col==n/2+1 )
            cout <<"* ";
            else cout <<"  ";
        }
        cout<<endl;
    }
    return 0;
} 