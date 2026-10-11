#include <iostream>
using namespace std;
int main (){
    int n; cin>>n;
    if (n>=81 && n<=100){
        cout<<"very good"<<endl;
    }
    else if (n>=61){
        cout<<"good"<<endl;
    }  
    else if (n>=41){
        cout<<"average"<<endl;
    }
    else {
        cout<<"fail"<<endl;
    }
}