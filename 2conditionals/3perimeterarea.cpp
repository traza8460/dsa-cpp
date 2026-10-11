#include <iostream>
using namespace std;
int main (){
    int l; cin>>l;
    int b; cin>>b;
    cout<<l*b<<endl;
    cout<<2*(l+b)<<endl;
    if (l*b>2*(l+b)){
        cout<<"area>peri"<<endl;
    }
    else if (l*b<2*(l+b)){
        cout<<"area<peri"<<endl;
    }
    else cout<<"area=peri"<<endl;
}