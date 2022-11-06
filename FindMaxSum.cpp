#include<bits/stdc++.h>
using namespace std;
int findMinArray(int a[], int n){
    int min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}
int findMaxArray(int a[], int n){
    int max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int findMaxSum(int a[], int b[], int n){
    int suma=a[0]+a[1];
    int sumb=0;
    for(int i=0;i<n;i++){
        sumb=sumb+b[i];
    }
    if(suma>sumb)
    return suma;
    else 
    return sumb;
}
int partition(int A[],int N){
    int a1[2];
    a1[0]=findMinArray(A,N);
    a1[1]=findMaxArray(A,N);
    int a2[N-2];
    int j=0;
    for(int i=0;i<N;i++){
        if(A[i]!=a1[0] && A[i]!=a1[1]){
            a2[j]=A[i];
            j++;
        }
    }
    int power=findMaxSum(a1,a2,N-2);
    return power;
}

int main(){
    int A[5]={3,7,2,4,6};
    int power=partition(A,5);
    cout<<power;
}

/*
13
*/
