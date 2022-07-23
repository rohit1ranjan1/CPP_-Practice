/*
Prime Generator
Problem Statement:
Snowden wants to generate some prime numbers for his crypto-system. Help him please! Your task is to generate all prime numbers between two given numbers.

Input:
The first line contains t, the number of test cases . Followed by t lines which contain two numbers m and n separated by a space.

Output:
For every test case print all prime numbers p such that m <= p <= n, one number per line. Separate the answers for each test case by an empty line.

Constraints:
t <= 10
1 <= m <= n <= 1000000000
n-m<=100000


Time Limit:
1 sec

Example 1:
Input
2
1 10
3 5


Output
2
3
5
7

3
5
*/


#include<bits/stdc++.h>
using namespace std;
void checkPrime(int p){
    if(p==1)
        return;
    for(int i=2;i<p;i++){
        if(p%i==0)
        return;
    }
    cout<<p<<endl;
    
}
int main() {
    int t,m,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>m;
        cin>>n;
        for(int j=m;j<=n;j++){
            checkPrime(j);
        }
        cout<<endl;
    }
	return 0;
}
