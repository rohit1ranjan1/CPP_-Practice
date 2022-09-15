

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int ifinList(int q, int* arr,int n){
    int flag=0;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    /*
    for(int i=0;i<n;i++){
        if(q==arr[i]){
            cout<<"YES!"<<endl;
            return 0;
        }
        flag=1;
        else if(q!=arr[i] && flag==0){
            cout<<"NO!"<<endl;
            cout<<arr[i+1];
            return 0;
        }
        flag=0;
    }
    */
    return 0;
}
int main() {
    // Write C++ code here
    //cout << "Hello world!";
    int n;
    cin>>n;
    int arr[n];
    for(int u=0;u<n;u++){
        cin>>arr[u];
    }
    cout<<"Array Taken!"<<endl;
    
    int q;
    cin>>q;
    
    ifinList(q,arr,n);

    return 0;
}

/*
5
1
2
3
4
5
Input done!
5
NO!
2
*/
