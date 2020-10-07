#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool compare(int a,int b){
    return a>b;
}
int main(){
    vector<int> v;
    v.reserve(100);
    int size;
    cout<<"Enter size "<<endl;
    cin>>size;
    for(int i=0;i<size;++i){
        int temp;
        cout<<"Enter element"<<endl;
        cin>>temp;
        v.push_back(temp);
    }
    cout<<endl<<"Vector elements"<<endl;
    for(int j=0;j<size;j++){
        cout<<v[j]<<" ";
    }
    v.pop_back();
    cout<<endl<<"Vector elements after popping elements "<<endl;
    for(int j=0;j<size;j++){
        cout<<v[j]<<" ";
    }
    // cout<<"Sorting.."<<endl;
    // sort(v.begin,v.end);
    cout<<endl<<"The capacity of vector is "<<v.capacity()<<endl;
    cout<<"The max_size of the vector is "<<v.max_size()<<endl;
}