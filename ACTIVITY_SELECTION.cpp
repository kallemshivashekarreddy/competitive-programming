/*
Given a set of activities with start time and finish time, find the maximum number of non-overlapping activities.

Input Format

First line of input contains T - number of test cases. Its followed by 3T lines. First line of each test case contains N - number of activities. The second line contains N integers - start time of the activities, ith element denotes start time of ith activity. The third line contains N integers - finish time of the activities, ith element denotes finish time of ith activity.

Constraints

1 <= T <= 1000
1 <= N <= 1000
0 <= S[i] < F[i] <= 86400

Output Format

For each test case, print the maximum number of non-overlapping activities, separated by newline.

Sample Input 0

3
8
49 20 44 23 9 65 42 3 
73 38 52 38 40 92 57 17 
5
1 25 33 0 17 
79 89 58 89 70 
6
10 40 15 1 5 20 
20 91 75 36 90 40 
Sample Output 0

4
1
3



*/
#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){
return a.second<b.second;
}
int main(){
int t;cin>>t;
    while(t-->0){
        int n; cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
         for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<pair<int ,int> > intval;
        for(int i=0;i<n;i++){
            intval.push_back(make_pair(a[i],b[i]));
        }
        sort(intval.begin(),intval.end(),sortbysec);
        int count=1;
//         for (int i=0; i<n; i++) 
//     { 
      
//         cout << intval[i].first << " "
//              << intval[i].second << endl; 
  
//     } 
        for(int i=0;i<n-1;i++){
            int j=i+1;
            while(j<n){
                if(intval[i].second<=intval[j].first)
                {
                    count++;
                    i=j-1; 
                    //cout<<count<<" "<<intval[i].second<<" "<<intval[j].first<<"  "<<i<<" "<<endl;
                    break;
                  
                }
            
                
                j++;
            }
            
        }
        cout<<count<<endl;
    }
}
