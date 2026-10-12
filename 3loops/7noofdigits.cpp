#include <iostream>
using namespace std;
int main() {
    int n, count=0;
    cin>>n;
    for (int i=n; i>0; i=i/10) {
        count++;
    }
    cout<<count<<endl;
    return 0;
}

// #include <iostream>
// using namespace std;
// int main() {
//     int n; cin>>n;
//     int count=0;
//     while(n!=0){
//         n=n/10;
//         count++;
//     }
//     cout<<count<<endl;
//     return 0;
// }