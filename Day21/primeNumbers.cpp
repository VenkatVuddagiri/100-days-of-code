#include<iostream>
using namespace std;
bool isPrimeNumber(int n){
    int i=2;
    if(n==2){
        return true;
    }
    while (i*i<=n){
        if(n%2==0){
            return false;
        }
        if(n%i==0){
            return false;
        }
        i++;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(isPrimeNumber(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}