#include<iostream>
using namespace std;
void shellSort(int a[],int n){
    int temp;
    for(int gap=n/2;gap>0;gap/=2){
        for(int j=gap;j<n;j++){
            temp=a[j];
            int i;
            for(i=j;i>=gap && a[i-gap]>temp;i=i-gap){
                a[i]=a[i-gap];
            }
            a[i]=temp;
        }
    }

}
int main(){
    int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter array element"<<" ";
        cin>>arr[i];
    }
    shellSort(arr,size);
    cout<<"Array elements after sorting"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}