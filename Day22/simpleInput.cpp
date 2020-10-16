// Given a list of numbers, stop processing input after the cumulative sum of all the input becomes negative.
#include<iostream>
#include<vector>
using namespace std;
int main() {
	int sum=0;
    int n;
	while(true){
		cin>>n;
		sum+=n;
		if(sum>=0){
			cout<<n<<endl;
		}
		else{
			break;
		}
	}
	return 0;
}