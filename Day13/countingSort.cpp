#include<iostream>
using namespace std;
void countingSort(int a[],int s,int e,int n){
    int range=e-s+1;
    int countArr[range]={0};
    int outputArr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        ++countArr[a[i]];
    }
    for(int j=0;j<range;j++){
        sum+=countArr[j];
        countArr[j]=sum;
    }
    for(int k=0;k<n;k++){
        outputArr[--countArr[a[k]]]=a[k];
    }
    for(int l=0;l<n;l++){
        a[l]=outputArr[l];
    }
}
int main(){
    int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter array element"<<endl;
        cin>>arr[i];
    }
    int Start;
    int End;
    cout<<"Enter start and end value of the array"<<endl;
    cin>>Start;
    cin>>End;
    countingSort(arr,Start,End,size);
    cout<<endl<<"The sorted array is: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}