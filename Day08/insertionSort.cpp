#include<iostream>
using namespace std;
void insertionSort(int a[],int n){
    int temp;
    for(int i=1;i<n;++i){
        int j;
        int key=a[i];
        for(j=i-1;j>=0 && a[j]>key;j--){
            a[j+1]=a[j];
        }
        a[j+1]=key;
    }
    cout<<"Array sorted"<<endl;
}
int main(){
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter array element"<<endl;
        cin>>arr[i];
    }
    insertionSort(arr,size);
    cout<<"The contents of the sorted array are: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}