#include<iostream>
using namespace std;
void sumOf(int n){
    cout<<"The sum of n numbers is: ";
    cout<<(n*(n+1))/2<<endl;
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    sumOf(n);
}