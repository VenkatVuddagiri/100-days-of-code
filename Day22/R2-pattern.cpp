/*Question:
Take as input N, a number. Print the pattern like this.

for N = 5

5

3

1

2

4
*/
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=n;i>0;i--){
		if(i%2!=0){
			cout<<i<<endl;
		}
	}
	for(int i=2;i<=n;i++){
		if(i%2==0){
			cout<<i<<endl;
		}
	}
	return 0;
}
