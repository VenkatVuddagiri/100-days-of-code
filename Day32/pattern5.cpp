/*
Take N (number of rows), print the following pattern (for N = 5).

     * * * * *
     * *   * *
     *       *
     * *   * *
     * * * * *
Input Format
Constraints
0 < N < 10 (where N is an odd number)

Output Format
Sample Input
5
Sample Output
*	*	*       *      *		  
*	*	        *      *
* 	                       *
* 	*               *      *
* 	*	*       *      *	
*/
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n/2+1;i++){
		for(int j=1;j<=n/2-i+2;j++){
			cout<<"*"<<"       ";
		}
		for(int j=1;j<i;j++){
			cout<<" "<<"       ";
		}
		for(int j=1;j<=i-2;j++){
			cout<<" "<<"       ";
		}
		for(int j=1;j<=n/2-i+2;j++){
			if(i==1 && j==1) continue;
			cout<<"*"<<"       ";
		}
		cout<<endl;
	}
	for(int i=1;i<=n/2;i++){
		for(int j=1;j<=i+1;j++){
			cout<<"*"<<"       ";
		}
		for(int j=1;j<=n/2-i;j++){
			cout<<" "<<"       ";
		}
		for(int j=1;j<=n/2-i-1;j++){
			cout<<" "<<"       ";
		}
		for(int j=1;j<=i+1;j++){
			if(j==1 && i==n/2) continue;
			cout<<"*"<<"       ";
		}
		cout<<endl;
	}
	return 0;
}