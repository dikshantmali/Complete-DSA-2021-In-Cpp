#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define testcase while(t--)
using namespace std;


int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin>>n;
  

  int lastdegit= 0, reverse = 0;
  while(n>0){
 lastdegit = n%10;
 reverse =reverse*10 + lastdegit;
  n /= 10;
  }

  cout<<reverse;

 
  return 0;
}