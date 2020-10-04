#include<iostream>
#include<algorithm>
using namespace std;
//uses randomized quick sort for sorting
bool swap(int a,int b){
    return a>b;
}
int main(){
    int size;
    cout<<"Enter the size"<<endl;
    cin>>size;
    int a[size];
    for(int i=0;i<size;++i){
        cout<<"ENter array element"<<endl;
        cin>>a[i];
    }
    sort(a,a+size);//Ascending order
    cout<<"Array in ascending order"<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"Array in descending order"<<endl;
    // sort(a,a+size,swap);//Descending order
    for(int i=size-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
}