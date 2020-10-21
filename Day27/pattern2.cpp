//class
#include<iostream>
using namespace std;
int main(){
    char c = 'A';
    for(int i=0;i<26;i++){
        for(int j=0;j<=i;j++){
            cout<<char(c+j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}