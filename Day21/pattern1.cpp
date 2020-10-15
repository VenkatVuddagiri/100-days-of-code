#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        int j;
        for(j=i;j<2*i;j++){
            cout<<j;
        }
        for(j=2*i-2;j>=i;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}