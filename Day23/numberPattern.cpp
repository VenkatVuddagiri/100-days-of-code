//Print a pattern of numbers
//For n=5
// 1    
//    232   
//   34543  
//  4567654 
// 567898765
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(j=i;j<2*i;j++){
            cout<<j;
        }
        for(j=2*(i-1);j>=i;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}