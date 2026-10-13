#include <iostream>
using namespace std;
long long fact(int n){
    long long ans=1;
    for (int i=1;i<=n;i++) ans*=i;
    return ans;
}
long long nCr(int n,int r){
    long long nfact=fact(n);
    long long rfact=fact(r);
    long long nrfact=fact(n-r);
    return nfact/(rfact*nrfact);
}
int main(){
    int n,r; cin>>n>>r;
    cout<<nCr(n,r)<<endl;
    return 0;
}