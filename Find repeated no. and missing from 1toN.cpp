// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int findDouble(int a[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j])
                return a[i];
            
        }
    }
}
int findMissing(int a[],int n){
    int tobesum=((n)*(n+1))/2;
    for(int i=0;i<n;i++){
        tobesum=tobesum-a[i];
    }
    int doublenum=findDouble(a,n);
    int missing=tobesum+doublenum;
    return missing;
}
int main() {
    int a[8]={1,2,3,4,6,7,8,2};
    cout<<findMissing(a,8)<<endl;

    return 0;
}
