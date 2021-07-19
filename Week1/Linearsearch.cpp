/*  Given an array of nonnegative integers, design a linear algorithm and implement it using a
program to find whether given key element is present in the array or not. Also, find total number
of comparisons for each input case. (Time Complexity = O(n), where n is the size of input)  */
#include "bits/stdc++.h"
using namespace std;
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