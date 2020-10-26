/*
Take N (number of rows - only odd numbers allowed), print the following pattern (for N = 5).

      *
   *  *  *  
*  *  *  *  *  
   *  *  *
      *
Input Format
Constraints
0 < N < 10 (only odd numbers allowed)

Output Format
Sample Input
5
Sample Output
      *
    * * *
  * * * * *
    * * *
      *
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n/2+1;i++){
		for(int j=1;j<=n/2+1-i;j++){
			cout<<"  ";
		}
		for(int j=1;j<=2*i-1;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	for(int i=1;i<=n/2;i++){
		for(int j=1;j<=i;j++){
			cout<<"  ";
		}
		for(int j=1;j<=n-2*i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}

}