/*
Take N (number of rows), print the following pattern (for N = 4).

                       1 
                     2 3 2
                   3 4 5 4 3
                 4 5 6 7 6 5 4
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"   ";
        }
        int j;
        for(j=i;j<2*i;j++){
            cout<<j<<"  ";
        }
        for(j=2*i-2;j>=i;j--){
            cout<<j<<"  ";
        }
        cout<<endl;
    }
    return 0;
}