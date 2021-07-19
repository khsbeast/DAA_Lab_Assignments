#include "bits/stdc++.h"
using namespace std;
/*  Linear Search with no. of comparisions  */
int main()
{
  int n,key;
  cin >> n >> key;
  int a[n],found=0,kount=0;
  for(int i = 0;i < n;i++){
    cin >> a[i];
    kount++;
    if(a[i]==key)
    {
      found=1;
      cout << "Element found at : " << kount << " position";
      break;
    }
  }
  if(!found)
    cout << "Element not present checked " << kount << " indexes";
}