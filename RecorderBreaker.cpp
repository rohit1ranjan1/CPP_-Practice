/*
Problem Statement:
Paul plays college volleyball and wants to go pro. Each season he maintains a record of his play. He tabulates the number of times he breaks his season record for most points and least points in a game. 
Points scored in the first game establish his record for the season, and he begins counting from there.

For example, assume his scores for the season are represented in the array scores = [10,20,15,20]. Scores are in the same order as the games played. He would tabulate his results as follows:

 Count

Game  Score  Minimum  Maximum   Min Max

 0      10     10       10       0   0

 1      20     10       20       0   1

 2      15     15       20       1   1

 3      20     15       20       1   1




Given Paul's scores for a season, find and print the number of times he breaks his records for most and least points scored during the season.
Input:
The first line contains an integer n , the number of games. 
The second line contains n  space-separated integers describing the respective values of scores

Output:
Print two space-seperated integers describing the respective numbers of times his best (highest) score increased and his worst (lowest) score decreased.

Constraints:
1<=n<=1000
0<=scores[i]<=10^8

Time Limit:
1 sec

Example 1:
Input
9
10 5 20 20 4 5 2 25 1

Output
2 4

Example 2:
Input
10
3 4 21 36 10 28 35 5 24 42

Output
4 0

Example 3:
Input
9
10 5 20 20 4 5 2 25 1
Output
2 4

Sample I/O Explanation:
He broke his best record four times (after games 1,2 ,3 , and 9) and his worst record zero times 
(no score during the season was lower than the one he earned during his first game), so we print 4 0 as our answer.
*/

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

/*
*/
