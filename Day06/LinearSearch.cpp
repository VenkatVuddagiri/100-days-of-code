#include<iostream>
using namespace std;
void linearSearch(int p[],int n,int e){
    int temp=-1;
    for(int i=0;i<n;++i){
        if(p[i]==e){
            temp=i;
        }
    }
    if(temp==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at "<<temp<<" position in the array"<<endl;
    }
}
int main(){
    int size;
    cout<<"Enter the number of elements in the array"<<endl;
    cin>>size;
    int arr[size];
    int searchVal;
    for(int i=0;i<size;++i){
        cout<<"Enter the "<<i+1<<"th element of the array"<<endl;
        cin>>arr[i];
    }
    cout<<"Enter the number to be searched for in the array"<<endl;
    cin>>searchVal;
    linearSearch(arr,size,searchVal);
    return 0;
}