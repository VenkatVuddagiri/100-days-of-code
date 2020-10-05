//pivot is in end
#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int partition(int a[],int start,int end){
    int pivot=a[end];
    int pIndex=start;
    for(int i=start;i<end;++i){
        if(a[i]<=pivot){
            swap(a[i],a[pIndex]);
            pIndex++;
        }
    }
    swap(a[pIndex],a[end]);
    return pIndex;
}
void quickSort(int a[],int s,int e){
    if(s<e){
        int p=partition(a,s,e);
        quickSort(a,s,(p-1));
        quickSort(a,(p+1),e);
    }
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
    cout<<"Unsorted array is: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,0,(size-1));
    cout<<"Sorted array is: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}