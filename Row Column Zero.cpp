#include<iostream>
using namespace std;
void rowColumnZero(int (*matrix)[3]){
    int i,j;
    int row,column;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(matrix[i][j]==0){
                row=i;
                column=j;
            }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==row)
            matrix[i][j]=0;
            
            if(j==column)
            matrix[i][j]=0;
        }
    }
    
}
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
    rowColumnZero(mat);
    cout<<"\nNew Matrix after row and column 0:";
    display(mat);
    return 0;
}
/*
Enter the matrix:
1 2 3 4 0 5 6 7 8 9
1 2 3 
4 0 5 
6 7 8 
New Matrix after row and column 0 is:
1 0 3 
0 0 0 
6 0 8 
*/
