#include <iostream>
using namespace std;
void phr(int n){
    if(n==0) return;
    cout<<"Hello Raza !\n";
    phr(n-1);
}
int main() {
    int n;cin>>n;
    phr(n);
    return 0;
}
// no loop no multiple call function