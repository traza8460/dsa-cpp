#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    int m; cin>>m;
    for (int row=1; row<=n; row++) {
        for (int col=1; col<=m; col++) {
            cout <<"* ";
        }
        cout<<endl;
    }
    return 0;
}

// #include <iostream>
// using namespace std;
// int main() {
//     int n; cin>>n;
//     int m; cin>>m;
//     for (int i=1; i<=n; i++) {
//         for (int j=1; j<=m; j++) {
//             cout <<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }