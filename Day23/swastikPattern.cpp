/*
Take as input N, an odd number (>=5) . Print the following pattern as given below for N = 7.

*  ****
*  *
*  *
*******
   *  *
   *  *
****  *
*/
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j==n/2 || i==n/2) cout<<"* ";
			else if(j==0 && i<n/2) cout<<"* ";
			else if(i==0 && j>n/2) cout<<"* ";
			else if(j==n-1 && i>n/2) cout<<"* ";
			else if(i==n-1 && j<n/2) cout<<"* ";
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}