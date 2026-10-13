#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    for (int row=1; row<=n; row++) {
        for (int st=1; st<=row; st++) {
            cout<<"* ";
        }
        for (int sp=1; sp<=2*(n-row)-1; sp++) {
            cout<<"  ";
        }
        int ntbp=row;
        if(row==n) ntbp--;
        for (int st=1; st<=ntbp; st++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int row=n-1; row>=1; row--) {
        for (int st=1; st<=row; st++) {
            cout<<"* ";
        }
        for (int sp=1; sp<=2*(n-row)-1; sp++) {
            cout<<"  ";
        }
        int ntbp=row;
        if(row==n) ntbp--;
        for (int st=1; st<=ntbp; st++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}