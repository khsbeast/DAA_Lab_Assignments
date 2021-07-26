#include "bits/stdc++.h"

using namespace std;
int binary(int a[],int k,int l,int low,int high,int &index)
{
  if(low>high)
    return index;
  int mid = (high+low)/2;
  if(a[mid]==k)
  {
    if(l==0)
    {
      index=mid;
      binary(a,k,l,low,mid-1,index);
    }
    else
    {
      index=mid;
      binary(a,k,l,mid+1,high,index);
    }
  }
  else if(a[mid] < k)
    binary(a,k,l,mid+1,high,index);
  else
    binary(a,k,l,low,mid-1,index);
}
int main()
{
  int t;
  cin >> t;
  while(t--){
  int n;
  cin >> n;
  int a[n];
  for(int i = 0;i < n;i++)
    cin >> a[i];
  int k;
  cin >> k;
  int index=-1;
  int indexx=-1;
  int index1 = binary(a,k,0,0,n-1,index);
  int index2 = binary(a,k,1,0,n-1,indexx);
  if(index1==-1 && index2 == -1)
    cout << "Key not Present";
  else
    cout << k << " - " << index2-index1+1;
 }
}