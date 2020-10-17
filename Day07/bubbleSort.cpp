#include<iostream>
using namespace std;
void bubbleSort(int a[],int n){
    int temp;
    int swap_count;
    for(int i=0;i<n;i++){
        swap_count=0;
        for(int j=i+1;j<n;++j){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                swap_count++;
            }
        }
        if(!swap_count){
            cout<<"Array sorted"<<endl;
            break;
        }
    }
}
int main(){
    int size_arr;
    cout<<"Enter the size of array"<<endl;
    cin>>size_arr;
    int arr[size_arr];
    for(int i=0;i<size_arr;++i){
        cout<<"Enter array element"<<endl;
        cin>>arr[i];
    }
    bubbleSort(arr,size_arr);
    cout<<"The array elements are: "<<endl;
    for(int i=0;i<size_arr;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}