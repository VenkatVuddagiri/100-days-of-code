/*
You have to given a data stream terminated by -1 and the size of sliding window. For each variation in sliding window you need to tell the average of data in current sliding window. Print 4 digits after the decimal point.

Input Format
First line contains an integer denoting the size of sliding window.
Second line has a data stream terminated by -1.

Constraints
None

Output Format
Print average of each sliding window.

Sample Input
5
51 62 24 51 79 33 72 78 84 42 -1
Sample Output
51.0000 56.5000 45.6667 47.0000 53.4000 49.8000 51.8000 
*/
#include <iostream>
#include<iomanip>
#include<queue>
using namespace std;
int main() {
    queue <int> g;
    double sum=0;
    int dummy;
    int size;
    cin>>size;
    int count=0;
    cout.setf(ios::fixed);
    while(true){
        cin>>dummy;
        if(dummy==-1)
            break;
        g.push(dummy);
        sum+=dummy;
        count++;
        if(count<=size){
            cout<<setprecision(4)<<sum/count<<" ";
        }
        else{
            count--;
            sum-=g.front();
            g.pop();
            cout<<sum/size<<" ";
        }
    }
    return 0;
}
