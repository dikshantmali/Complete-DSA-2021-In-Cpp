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
   bool flag = 0;
   for (int i = 2; i <= sqrt(n); ++i)
   {
   	if(n%i == 0)
   	{
   		flag = 1;
   	}
   }
   if (flag == 0)
   {
   	cout<<"Prime";
   }
   else
   {
   	cout<<"Non-Prime";
   }
  
 
  return 0;
}