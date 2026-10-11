#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    if (n%5==0 && n%3==0){
        cout<<"divi by 5 and 3"<<endl;
    }
    else {
        cout<<"not divi by 5 and 3"<<endl;
    }
}

// #include <iostream>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     if ((n%5==0 || n%3==0) && (n%15!=0)){
//         cout<<"divi by 5 or 3 but not 15"<<endl;
//     }
//     else {
//         cout<< "not divi by 5 or 3 nor 15"<<endl;
//     }
// }