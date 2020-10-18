// // https://hack.codingblocks.com/app/contests/1927
// Help Manmohan to print pattern of a given number. See the output pattern for given input n = 5.

// Input Format
// Single integer N denoting number of lines of the pattern.
// 1
// 11
// 202
// 3003
// 40004
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(i==1){
				cout<<1;
				continue;
			}
			if(j==1 || j==i){
				cout<<i-1;
			}
			else{
				cout<<0;
			}
		}
		cout<<endl;
	}
	return 0;
}