#include<iostream>
using namespace std;
void merge(int a[],int l,int m,int r){
    int i=l;
    int j=m+1;
    int k=l;
    int c[r-l];
    while(i<=m && j<=r){
        if(a[i]<=a[j]){
            c[k++]=a[i++];
        }
        else{
            c[k++]=a[j++];
        }
    }
    for(;i<=m;i++){
        c[k++]=a[i];
    }
    for(;j<=r;j++){
        c[k++]=a[j];
    }
    // Changing main array
    for(int s=l;s<=r;s++){
        a[s]=c[s];
    }
}
void mergeSort(int a[],int l,int r){
    if(l<r){
        int m=(l+(r-l)/2);
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
    // cout<<"Array sorted"<<endl;
}
int main(){
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int start=0;
    int end=size-1;
    int arr[size];
    for(int i=0;i<size;++i){
        cout<<"Enter array element"<<endl;
        cin>>arr[i];
    }
    mergeSort(arr,start,end);
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}