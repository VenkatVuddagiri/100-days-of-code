#include<iostream>
#include<queue>
using namespace std;
int max(int a[],int n){
    int m=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>m){
            m=a[i];
        }
    }
    return m;
}
void countingSort(int a[],int n,int d){
    int countArr[10]={0};
    int outputArr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        ++countArr[(a[i]/d)%10];
    }
    for(int j=1;j<10;j++){
        countArr[j]+=countArr[j-1];
    }
    for(int k=0;k<n;k++){
        outputArr[countArr[(a[k]/d)%10]-1]=a[k];
    }
    for(int l=0;l<n;l++){
        a[l]=outputArr[l];
    }
}
void radixSort(int a[],int n){
    int div;
    int arr[n];
    int m=max(a,n);
    for(div=1;m/div>0;div*=10){
        countingSort(a,n,div);
    }
}
int main(){
    int size;
    cout<<"Enter the size of array: "<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter array element"<<" ";
        cin>>arr[i];
    }
    radixSort(arr,size);
    cout<<"Sorted array elements are: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}