// Given an integer N, print Pascal Triangle upto N rows.
// Input Format

// Single integer N.
// Constraints

// N <= 10
// Output Format

// Print pascal triangle.
// Sample Input

// 4

// Sample Output

//            1
//          1   1
//        1   2   1
//      1   3   3   1


#include <bits/stdc++.h> 
using namespace std; 
void printPascal(int n) 
{ 
    for (int line = 1; line <= n; line++) 
    { 	
	    for(int j=0;j<2*(n-line);j++){
		    cout<<" ";
	    }
        int C = 1; // used to represent C(line, i) 
        for (int i = 1; i <= line; i++)  
        { 
            // The first value in a line is always 1 
            cout<<" "<<C<<"  ";  
            C = C * (line - i) / i;  
        } 
    cout<<"\n"; 
    } 
} 
// Driver code 
int main() 
{ 
    int n;
	cin>>n;
    printPascal(n); 
    return 0; 
} 