// // Take as input N, a number. Print the pattern as given in the input and output section.
//  1******
//  12*****
//  123****
//  1234***
//  12345**
//  123456*
//  1234567
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j<=i){
				cout<<j;
			}
			else{
				cout<<'*';
			}
		}
		cout<<endl;
	}
	return 0;
}