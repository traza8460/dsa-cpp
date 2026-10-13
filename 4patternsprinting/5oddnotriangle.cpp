#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    for (int row=1; row<=n; row++) {
        for (int col=1; col<=row; col++) {
            cout <<2*col-1<<" ";
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
//        int a=1;
//         for (int col=1; col<=row; col++) {
//             cout <<a<<" ";
//             a++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }