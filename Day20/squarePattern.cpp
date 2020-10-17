// Write a program to print square pattern by taking input N.

// Input Format
// The first line contains an integer N.
#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j>=i)
			cout<<j<<" ";
			else
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}