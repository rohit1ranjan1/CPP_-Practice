/*
Problem Statement:
There are N+1 lights. Lights are placed at (0, 0), (1, 0), (2, 0) ... (N, 0). Initially all the lights are on. You want to turn off all of them one after one.
You want to follow a special pattern in turning off the lights.

You will start at (0, 0). First, you walk to the right most light that is on, turn it off. 
Then you walk to the left most light that is on, turn it off. Then again to the right most light that is on and so on. 
You will stop after turning off all lights. You want to know how much distance you walked in the process. Note that distance between (a,0) and (b,0) is |a-b|.


Input:
The first line of the input contains an integer T denoting the number of test cases. Each test case has a single integer N on separate line.

Output:
For each test case, output the distance you walked.

Constraints:
1 ≤ T ≤ 10^5
1 ≤ N ≤ 10^5

Time Limit:
1 sec

Example 1:
Input
2
1
2


Output
2
5

Sample I/O Explanation:
Testcase #2 You are initially at (0, 0) Right most on-light is (2, 0). Distance = 2. Now you are at (2, 0). Left most on-light is (0, 0). Distance = 2. 
Now you are at (0, 0) Right most on-light is (1, 0). Distance = 1. Now you are at (1, 0) and all lights are turned off. Total distance walked = 5.

*/
//Single test case input code

#include<bits/stdc++.h>
using namespace std;
void lightsoff(int n){
    int sum=0,i=0;
    sum=n+n;
    while(i<n){
        n--;
        sum=sum+(n-i);
        //cout<<" "<<sum;
        i++;
        if(i<n){
        sum=sum+(n-i);
        //cout<<" "<<sum;
        }
    }
    cout<<"Total distance travelled is: "<<sum<<endl;
}
int main(){
    int n;
    cout<<"Enter the number of street lights from origin: ";
    cin>>n;
    lightsoff(n);
    return 0;
}

/*
Enter the number of street lights from origin: 1
Total distance travelled is: 2

Enter the number of street lights from origin: 5
Total distance travelled is: 20
*/

//n test cases input code
 
#include<bits/stdc++.h>
using namespace std;
void lightsoff(int n){
    int sum=0,i=0;
    sum=n+n;
    while(i<n){
        n--;
        sum=sum+(n-i);
        //cout<<" "<<sum;
        i++;
        if(i<n){
        sum=sum+(n-i);
        //cout<<" "<<sum;
        }
    }
    cout<<"Total distance travelled is: "<<sum<<endl;
}
int main(){
    int n;
    cout<<"Enter the no. of test cases: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<i+1<<". ";
    cout<<"Enter the number of street lights from origin: ";
    cin>>n;
    lightsoff(n);
    }
    return 0;
}
/*
Enter the no. of test cases: 3
1. Enter the number of street lights from origin: 5
Total distance travelled is: 20
2. Enter the number of street lights from origin: 2
Total distance travelled is: 5
3. Enter the number of street lights from origin: 1
Total distance travelled is: 2
*/
