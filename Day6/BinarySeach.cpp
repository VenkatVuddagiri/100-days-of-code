#include<iostream>
using namespace std;
int binarySearch(int array[],int left,int right,int x){
    while(left<=right){
        int mid=(left+(right-left))/2;
        if(array[mid]==x){
            return mid;
        }
        else if(array[mid]<x){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}
int main(){
    int size;
    cout<<"Enter the number of elements in the array"<<endl;
    cin>>size;
    int arr[size];
    int searchVal;
    int index;
    for(int i=0;i<size;++i){
        cout<<"Enter the "<<i+1<<"th element of the array"<<endl;
        cin>>arr[i];
    }
    cout<<"Enter the number to be searched for in the array"<<endl;
    cin>>searchVal;
    index=binarySearch(arr,0,size-1,searchVal);
    if(index==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element "<<searchVal<<" found at "<<index<<" index"<<endl;    
    }
    return 0;
}