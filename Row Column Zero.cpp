#include<iostream>
using namespace std;
void display(int (*matrix)[3]){
    for(int i=0;i<3;i++){
        cout<<"\n";
        for(int j=0;j<3;j++)
        cout<<matrix[i][j]<<" ";
    }
}
int main(){
    int mat[3][3];
    cout<<"Enter the matrix:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        cin>>mat[i][j];
    }
    display(mat);
    //rowColumnZero();
    return 0;
}
