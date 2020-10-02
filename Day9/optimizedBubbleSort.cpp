#include<iostream>
using namespace std;
void optimizedBubbleSort(int a[],int n){
    int temp;
    bool flag;
    int iter_count=0;
    for(int i=0;i<n;i++){
        iter_count++;
        flag=false;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                flag=true;
            }
        }
        if(flag==false){
            cout<<"Array sorted"<<endl;
            break;
        }
    }
    cout<<"The number of iterations in optimized bubble sort are: "<<iter_count<<endl;
}
int main(){
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"ENter array element"<<endl;
        cin>>arr[i];
    }
    optimizedBubbleSort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}