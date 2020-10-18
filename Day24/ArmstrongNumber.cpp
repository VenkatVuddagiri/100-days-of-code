// Take the following as input.

// A number
// Write a function which returns true if the number is an armstrong number and false otherwise, where Armstrong number is defined as follows.

// A positive integer of n digits is called an Armstrong number of order n (order is number of digits) if.

// abcd… = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + ….

// 1634 is an Armstrong number as 1634 = 1^4 + 6^4 + 3^4 + 4^4

// 371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3

// Input Format
// Single line input containing an integer

// Constraints
// 0 < N < 1000000000

#include<iostream>
#include<cmath>
using namespace std;
int numberOfDigits(int n){
	int count=0;
	while(n!=0){
		count++;
		n=n/10;
	}
	// cout<<"Count:"<<count<<endl;
	return count;
}
bool armstrongNumber(int n){
	int sum=0;
	int temp;
	int newN=n;
	int d=numberOfDigits(n);
	while(n!=0){
		temp=n%10;
		sum+=pow(temp,d);
		n=n/10;
	}
	// cout<<sum<<endl;
	return sum==newN;
}

int main() {
	int n;
	cin>>n;
	if(armstrongNumber(n)){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	return 0;
}