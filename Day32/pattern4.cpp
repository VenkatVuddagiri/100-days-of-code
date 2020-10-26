/*
Take N as input. For a value of N=5, we wish to draw the following pattern :

             5                   5 
             5 4               4 5 
             5 4 3           3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2 1 0 1 2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3           3 4 5 
             5 4               4 5 
             5                   5 
Input Format
Take N as input.

Constraints
Output Format
Pattern should be printed with a space between every two values.

Sample Input
5
Sample Output
5                   5 
5 4               4 5 
5 4 3           3 4 5 
5 4 3 2       2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2 1 0 1 2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2       2 3 4 5 
5 4 3           3 4 5 
5 4               4 5 
5                   5 
*/
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n+1;i++){
		for(int j=1;j<=i;j++){
				cout<<n-j+1<<" ";
		}
		for(int j=1;j<=2*(n-i)+1;j++)
			cout<<" "<<" ";
		for(int j=1;j<=i;j++){
			if(n-i+j==0){
				continue;
			}
			cout<<n-i+j<<" ";
		}cout<<endl;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
				cout<<n-j+1<<" ";
		}
		for(int j=1;j<=2*(i)-1;j++)
			cout<<" "<<" ";
		for(int j=1;j<=n-i+1;j++){
			cout<<j+i-1<<" ";
		}
		cout<<endl;
	}
	return 0;
}