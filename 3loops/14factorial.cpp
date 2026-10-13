#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int pro=1;
    for (int i=1;i<=n; i++){
        pro=pro*i;
    }
    cout<<pro<<" ";
    return 0;
}

// #include <iostream>
// using namespace std;
// int main() {
//     int n; cin >> n;
//     int fact = 1;
//     for (int i=1; i<=n; i++) {
//         fact=fact*i;
//         cout<<i<<"! = "<<fact<<endl;
//     }
//     return 0;
// }
