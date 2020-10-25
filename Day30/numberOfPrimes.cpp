#include<iostream>
using namespace std;
void numberOfPrimes(int n){
	if(n==1){
		cout<<2<<endl;
		return;
	}
	if(n==2){
		cout<<3<<endl;
		return;
	}
	int count=2;
	int i;
    bool flag;
	for(i=5;count<=n;i++){
		flag=true;
		for(int j=2;j<i;j++){
			if(i%j==0){
				flag=false;
				break;
			}
		}
		if(flag==false)
			continue;
		count++;
        if(count==n) break;
	}
	cout<<i<<endl;
}
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		numberOfPrimes(n);
	}
}