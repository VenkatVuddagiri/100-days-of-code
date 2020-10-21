/*
    

Take as input N, a number. Print the pattern as given in the input and output section.
Input Format

Enter value of N
Constraints

1 <= N < 10
Output Format

Print the pattern.
Sample Input

7

Sample Output

 1******
 12*****
 123****
 1234***
 12345**
 123456*
 1234567
*/
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j+1<=i+1)
				cout<<j+1;
			else
				cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}