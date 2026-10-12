#include <iostream>
using namespace std;
int main() {
    int n, sum=0;
    cin>>n;
    for (int i=n; i>0; i=i/10) {
        sum=sum+(i%10);
    }
    cout<<sum<<" ";
    return 0;
}

// #include <iostream>
// using namespace std;
// int main() {
//     int n; cin>>n;
//     int sum =0;
//     while(n!=0){
//         int ld=n%10;
//         n=n/10;
//         sum=sum+ld;
//     }
//     cout<<sum<<" ";
//     return 0;
// }