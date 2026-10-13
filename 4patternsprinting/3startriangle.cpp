#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    for (int row=1; row<=n; row++) {
        for (int col=1; col<=row; col++) {
            cout <<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// #include <iostream>
// using namespace std;
// int main() {
//     int n; cin>>n;
//     for (int row=1; row<=n; row++) {
//         for (int col=1; col<=row; col++) {
//             cout <<col<<" "; (char) (col+64)
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n; cin>>n;
//     for (int row=1; row<=n; row++) {
//         for (int col=1; col<=row; col++) {
//             cout <<row <<" "; (char) (row+64)
//         }
//         cout<<endl;
//     }
//     return 0;
// }