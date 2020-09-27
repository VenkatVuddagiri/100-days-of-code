// Write a program that takes temperature input in Celsius and returns temperature measurements ,
//  after conversion to Fahrenheit and Kelvin.
#include<iostream>
using namespace std;
void tempConverter(float );
int main(){
    float a;
    cout<<"Enter the temp which you want  to convert"<<endl;
    cin>>a;
    tempConverter(a);
    return 0;
}
void tempConverter(float C){
    float K,F;
    K=273+C;
    F=C*(9/5)+32;
    cout<<"The temperature in kelvin scale is "<<K<<" kelvin"<<endl;
    cout<<"The temperature in Fahrenheit is "<<F<<" degrees"<<endl;
    }