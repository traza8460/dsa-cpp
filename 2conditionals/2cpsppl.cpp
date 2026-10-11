#include <iostream>
using namespace std;
int main (){
    int cp; cin>>cp;
    int sp; cin>>sp;
    if (sp>cp){
        cout<<"profit"<<" "<<sp-cp<<endl;
    }
    else if (cp>sp){
        cout<<"loss"<<" "<<cp-sp<<endl;
    }
    else {
        cout<<"no profit no loss"<<endl;
    }
}