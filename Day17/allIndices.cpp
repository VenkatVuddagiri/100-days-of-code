#include<iostream>
using namespace std;
void func(int a[],int n,int m){
	for(int j=0;j<n;j++){
		if(a[j]==m){
			cout<<j<<" ";
		}
	}
}
int main() {
	int N;
	cin>>N;
	int arr[N];
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	int M;
	cin>>M;
	func(arr,N,M);
	return 0;
}
/*
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, a number. Write a recursive function which returns an array containing indices of all items in the array which have value equal to M. Print all the values in the returned array.

Input Format
Enter a number N(size of the array) and add N more numbers to the array Enter number M to be searched in the array

Constraints
1 <= Size of array <= 10^5

Output Format
Display all the indices at which number M is found in a space separated manner

Sample Input
5
3
2
1
2
3
2
Sample Output
1 3 
Explanation
2 is found at indices 1 and 3.
*/