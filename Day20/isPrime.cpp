// Take as input a number N, print "Prime" if it is prime if not Print "Not Prime".
// Input Format
// Constraints
// 2 < N <= 1000000000
#include<iostream>
using namespace std;
bool isPrime(long long int n){
	long long int i=2;
	if(n==2){
		return true;
	}
	while(i*i<=n){
		if(n%2==0){
			return false;
		}
		if(n%i==0){
			return false;
		}
		i++;
	}
	return true;
}
int main() {
	long long int n;
	cin>>n;
	
	if(isPrime(n)){
		cout<<"Prime"<<endl;
	}
	else{
		cout<<"Not Prime"<<endl;
	}
	return 0;
}