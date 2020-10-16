#include<iostream>
using namespace std;
void precise(float , float);
int main(){
    float num1=20.9896785;
    float num2=82.031;
    precise(num1,num2);
    return 0;
}
void precise(float a, float b)
{
    //perform a/b
    float res=a/b;
    
    cout<<res<<" "<</*use setprecision(3) here*/" "<</*use fixed here*/fixed<</*Output c here*/res<<endl;
    
    cout<<endl;
}