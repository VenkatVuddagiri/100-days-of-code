// Write a program to print given pattern by taking input N.

// Input Format
// The first line contains an integer N.
#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j<n-i-1){
				cout<<"  ";
			}
			else{
				cout<<"* ";
			}
		}
		cout<<endl;
	}
	// cout<<" ";
	return 0;
}