#include <iostream>
using namespace std;
void primeornot(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) {cout<<"not prime"<<endl; return;}      
    }
    cout<<"prime"<<endl;
}
int main(){
    int n;cin>>n;
    primeornot(n);
    return 0;
}