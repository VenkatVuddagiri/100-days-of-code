#include <stdio.h>
#include<math.h>
#include<stdbool.h>
double numberOfDigits(int n){
    double count=0;
    while(n!=0){
        count++;
        n=n/10;
    }
    // printf("%d\n",count);
    return count;
}
bool armstrongNumber(int n){
    // printf("Inside armstrong number function %d\n",n);
    int originalNum = n;  
    double result=0;
    double remainder=0; 
    double digits=numberOfDigits(originalNum);
    while(n>0){
        remainder = n % 10;
        result += pow(remainder,digits);
        n=n/10;
    }
    return originalNum == result;
}
void isArmstrongNumber(int n){
    if(armstrongNumber(n)){
        printf("%d is an Armstrong number",n);
    }
    else{
        printf("%d is not an Armstrong number",n);
    }
}
int main() {
    int num;
    // printf("Enter an integer: ");
    scanf("%d", &num);
    isArmstrongNumber(num);
    return 0;
} 