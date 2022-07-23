/*
Win
Problem Statement:
A bag initially contains R red balls and G green balls. Ramesh and Suresh plays this game. Each player draws a ball alternatively and never put it back. 
The person who is the first to draw a red balls wins. Suresh always draws first. If there are no more balls in the bag and nobody has drawn a red ball, Suresh wins.

What is the probability of the Suresh winning?


Input:
The first line will contain the number of test cases T.
The first line of each test case will contain a number R (number of red balls) and G(number of green balls )

Output:
For each testcase, print the desired probability.
Constraints:
1<=T<=10
0<=R,G<=10^3

Time Limit:
1 sec

Example 1:
Input
3
2 1
1 1
10 0



Output
0.666667
0.500000
1.000000
*/



#include<bits/stdc++.h>
using namespace std;
void win(){
    float r,g,win;
    cout<<"Enter the number of red balls and green balls respectively:";
    cin>>r;
    cin>>g;
    if(r==0){
    cout<<1<<endl;
    return;
    }
    win=r/(r+g);
    cout<<win<<endl;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        win();
    }
   
    return 0;
}

/*
3
Enter the number of red balls and green balls respectively:2
1
0.666667
Enter the number of red balls and green balls respectively:1
1
0.5
Enter the number of red balls and green balls respectively:10
0
1
*/
