/* 
Given an already sorted array of positive integers, design an algorithm and implement 
it using a program to find whether a given key element is present in the sorted array or not.
For an array arr[n], search at the indexes arr[0], arr[2], arr[4],. ,arr[2k] and so on. 
Once the interval (arr[2k] < key < arr[ 2k+1] ) is found, perform a linear search operation from the index 2k to find the element key.
(Complexity < O(n), where n is the number of elements need to be scanned for searching): Jump Search
*/
#include "bits/stdc++.h"
using namespace std;
int kount = 0;
int jumps(int a[], int index, int n, int key)
{
    int found = 0;
    while (index <= n)
    {
        if (a[index] >= key)
        {
            found = 1;
            break;
        }
        kount++;
        index *= 2;
    }
    if(index>n)
      index/=2;
    if (found || a[n-1] >= key)
    {
        for (int i = index; i < n; i++)
        {
            kount++;
            if (a[i] == key)
                return i;
        }
    }
    else
      return -1;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int key;
    cin >> key;
    int index = jumps(a, 1, n, key);
    if (index == -1)
        cout << "Present : ";
    else
        cout << "Not Present : ";
    cout << kount << endl;
  }
}