#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=2; i<=n; i++){
        bool b=1;
        for(int j=2; j<i; j++){
                if(i%j==0){ b=0; break;}
                }
            if(b==1) cout<<i<<" ";
    }
    return 0;
}

// #include <iostream>
// using namespace std;
// int main() {
//     int n; cin>>n;
//     for (int i=2; i<=n; i++) {
//         bool flag = true;
//         for (int j=2; j*j<=i; j++) {
//             if (i%j==0) {flag = false; break;}
//         }
//         if (flag) cout<<i<<" ";
//     }
//     return 0;
// }