#include <iostream>
using namespace std;
int main() {
    int n, rev=0;
    cin>>n;
    for (int i=n; i>0; i=i/10) {
        rev= rev*10 + (i%10);
    }
    cout<<rev;
    return 0;
}

// #include <iostream>
// using namespace std;
// int main() {
//     int n; cin>>n;
//     int r=0;
//     while(n!=0){
//         int ld=n%10;
//         r=r*10;
//         r=r+ld;
//         n=n/10;
//     }
//     cout<<r<<endl;
//     return 0;
// }