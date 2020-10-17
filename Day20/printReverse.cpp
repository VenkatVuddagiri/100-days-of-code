// Take N as input, Calculate it's reverse also Print the reverse.
// 
// Input Format
// Constraints
// 0 <= N <= 1000000000
#include<iostream>
#include<string>
using namespace std;
int main() {
	string n;
	cin>>n;
	for(int i=n.length()-1;i>=0;i--){
		cout<<n[i];
	}
	return 0;
}