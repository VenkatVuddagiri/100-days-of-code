#include<iostream>
#include<vector>
using namespace std;
int main() {
	int sum=0;
    int newSum=0;
	vector<int> a;
	while(true){
		int n;
        cin>>n;
		a.push_back(n);
		sum+=n;
        if(sum<0){
            break;
        }
	}
    for(int i : a){
        newSum+=i;
        if(newSum<0){
            newSum-=i;
            break;
        }
    }
    cout<<newSum<<endl;
    for(int i : a){
        newSum-=abs(i);
        if (newSum>=0)
        {
            cout<<i<<endl;
        }
        
    }
	return 0;
}