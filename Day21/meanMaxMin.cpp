#include<iostream>
using namespace std;
int main(){
    int size;
    // cout<<"Enter size of array"<<endl;
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++){
        // cout<<"Enter array element"<<endl;
        cin>>a[i];
    }
    int max,min,sum;
    max=a[0];
    min=a[0];
    sum=0;
    for(int i=0;i<size;i++){
        if(a[i]>max){
            max = a[i];
        }
        if(a[i]<min){
            min = a[i];
        }
        sum+=a[i];
    }
    cout<<"Mean of the array is "<<sum/(float)size<<endl;
    cout<<"Biggest number is "<<max<<endl;
    cout<<"Smallest number is "<<min<<endl;
    return 0;
}