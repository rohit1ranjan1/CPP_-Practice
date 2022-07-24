#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,max,min,count_min=0,count_max=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++){
        if(i==0){
            min=arr[i];
            max=arr[i];
            //cout<<0<<endl;
        }
        else{
            //cout<<1<<endl;
            if(arr[i]>max){
                count_max++;
                max=arr[i];
                //cout<<"max\n";
            }
            else if(arr[i]<min){
            count_min++;
            min=arr[i];
            //cout<<"min\n";
            }
        }
    }
    cout<<count_max<<" ";
    cout<<count_min;
	return 0;
}
