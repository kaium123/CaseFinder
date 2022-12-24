#include <iostream>
#include <algorithm>
#include <random>
#include <bits/stdc++.h>
using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(int l, int r)
{
    return uniform_int_distribution<int>(l, r)(rng);
}
int vis[233];
const int mx=15;
int a[mx];
int main()
{
    /////freopen("input.txt", "w+", stdout);
   int n,t;
   cin>>n>>t;
   t=4;
   for(int i=1;i<=n;i++){
    cin>>a[i];
    vis[a[i]]++;
   }
   vector<int>v,val;
   int mn=1232434;
   int idx=0;
   
   for(int i=1;i<mx;i++){
    if(vis[i]) {
        for(int j=1;j<=vis[i];j++){
            v.push_back(abs(i-t));
            val.push_back(i);
        }
        
    }
    if(abs(i-t)<mn){
        mn=abs(i-t);
        idx=v.size()-1;
    }
   }
   int i=idx+1;
   int j=idx-1;
   cout<<val[idx]<<" ";
   while (i<v.size() && j>=0)
   {
        if((i<n && v[i]<v[j])){
           cout<<val[i]<<" ";
            i++;
        } else if(j>=0 && v[i]>v[j]){
            if(val[j]==0) cout<<"dfer";
           cout<<val[j]<<" ";
            j--;
        } else {
            if((i<n && val[i]<val[j])){
                cout<<val[i]<<" ";
                i++;
            } else {
                cout<<val[j]<<" ";
                j--;
            }
        }
   }
   while (i<n) 
   {
        cout<<val[i]<<" ";
        i++;
   }
   while (j>=0)
   {
    cout<<val[j]<<" ";
    j--;
   }
   
   
   

}