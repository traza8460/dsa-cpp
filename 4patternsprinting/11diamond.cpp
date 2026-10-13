#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    for (int row = 1; row <= n; row++) {
        for (int sp = 1; sp <= n - row; sp++) {
            cout << " ";
        }
        for (int st = 1; st <= 2 * row - 1; st++) {
                cout << "*";
        }
        cout << endl;
    }
    for (int row = n - 1; row >= 1; row--) {
        for (int sp = 1; sp <= n - row; sp++) {
            cout << " ";
        }
        for (int st = 1; st <= 2 * row - 1; st++) {
                cout << "*";
        
        }
        cout << endl;
    }
    return 0;
}

// #include <iostream>
// using namespace std;
// int main() {
//     int n; cin >> n;
//     for (int row = 1; row <= n; row++) {
//         for (int sp = 1; sp <= n - row; sp++) {
//             cout << " ";
//         }
//         for (int st = 1; st <= 2 * row - 1; st++) {
//             if (st == 1 || st == 2 * row - 1) {
//                 cout << "*";
//             }
//             else {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     for (int row = n - 1; row >= 1; row--) {
//         for (int sp = 1; sp <= n - row; sp++) {
//             cout << " ";
//         }
//         for (int st = 1; st <= 2 * row - 1; st++) {
//             if (st == 1 || st == 2 * row - 1) {
//                 cout << "*";
//             }
//             else {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }