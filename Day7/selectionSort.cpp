#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp;
    temp=b;
    b=a;
    a=temp;
}
void selectionSort(int arr[],int n){
    int min;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        if(min!=i){
            swap(arr[i],arr[min]);
        }
    }
    cout<<"Array sorted using selection sort algorithm"<<endl;
    for(int k=0;k<n;k++){
        cout<<arr[k]<<endl;
    }
}
int main(){
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int a[size];
    for(int i=0;i<size;++i){
        cout<<"Enter the element in the array"<<endl;
        cin>>a[i];
    }
    selectionSort(a,size);
    return 0;
}