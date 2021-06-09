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
  
  int lastdigit, originalnumber = n;
  int sum =  0;
  while(n>0)
  {
  	lastdigit = n%10;
  	sum += pow(lastdigit,3);
  	n = n/10;
  }

  if (sum == originalnumber)
  {
  	cout<<"Armstrong";
  }
  else
  {
  	cout<<"Not-Armstrong";
  }
 
  return 0;
}