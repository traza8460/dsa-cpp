#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    for (int row=1;row<=n;row++){
        for (int col=1;col<=n;col++){
            if(row==(n+1)/2||
               col==(n+1)/2||
             (col==1 && row<=n/2)||
             (row==1 && col>n/2)|| 
             (col==n && row>n/2)||
             (row==n && col<=n/2)){
             cout<<"*";
             }
            else cout<<" ";
        } 
        cout<<endl;
    }
    return 0;
}