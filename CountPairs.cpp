// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int countPairs(vector<int>& A, int X){
    int n=A.size();
    int pairs=0;
    int x,y,i,j;
    for(i=0;i<n-1;i++){
        for(j=1;j<n;j++){
            if(i<j && A[i]==A[j]){
            x=i+1;
            y=j+1;
            if((x*y)%X==0){
                pairs++;
                cout<<x<<" "<<y<<endl;
            }
            }
        }
    }
    return pairs;
}
int main() {
    vector<int> A{3,3,2,3,2,3,3};
    int pairs=countPairs(A,3);
    cout<<pairs<<endl;

    return 0;
}
/*
1 6
2 6
3 5
4 6
6 7
5

vector<int> A{3,3,3,2,3,2,2};
    int pairs=countPairs(A,2);
    
1 2
2 3
2 5
4 6
4 7
6 7
6
    
*/
