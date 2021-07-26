#include "bits/stdc++.h"
using namespace std;
int main()
{
  int t;
  cin >> t;
  while(t--){
  int n;
  cin >> n;
  int a[n];
  unordered_map<int,int> m;
  for(int i = 0;i < n;i++){
    cin >> a[i];
    m[a[i]]++;
  }
  int k;
  cin >> k;
  int kount = 0;
  for(int i =0;i < n;i++)
  {
    if(m[a[i]-k])
    {
      kount++;
      m[a[i]]--;
      m[a[i]-k]--;
    }
  }
  cout << kount << endl;
 }
}