/*
CHOCOLATE_LOVE
Problem Statement:
Jane bought chocolate bar (which contains N chocolate squares) for Rishabh and Neha. Each of the squares has a tastiness level which is denoted by an array A[].
Rishabh can eat the first or the last square of the chocolate at once and Neha demands the very last chocolate square. Now, Rishabh being greedy eats the tastier
squares first and gave the last one left to Neha.
Determine the tastiness level of the square which Neha gets.

Input:
First line of input contains a single integer T denoting the number of test cases.
The first line of each test case contains an integer N.
The second line contains N space-separated integers denoting the array A.


Output:
For each test case, print the required answer in a new line.

Constraints:
1 <= T <= 100
1 <= N <= 250
1 <= A[i] <= 1000

Time Limit:
1 sec

Example 1:
Input
3
5
5 3 1 6 9
6
2 6 4 8 1 6
4
2 2 2 2
Output
1
1
2

Sample I/O Explanation:
Case 1 : Initially : 5 3 1 6 9 5 3 1 6 5 3 1 3 1 1 Case 2 : Initially : 2 6 4 8 1 6 2 6 4 8 1 6 4 8 1 4 8 1 8 1 1 Case 3 : Initially : 2 2 2 2 2 2 2 2 2 2
*/


#include<bits/stdc++.h>
using namespace std;
int leastTasty(int *arr,int n){
    int min;
    for(int i=0;i<n;i++){
        if(i==0){
            min=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int size;
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++)
        cin>>arr[i];
        int minTasty=leastTasty(arr,size);
        cout<<minTasty<<endl;
    }
	return 0;
}

/*

*/
