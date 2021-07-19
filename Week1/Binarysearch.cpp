/*  Given an already sorted array of positive integers, design an algorithm and implement it 
using a program to find whether given key element is present in the array or not.
Also, find total number of comparisons for each input case. 
(Time Complexity = O(logn), where n is the size of input). */
#include "bits/stdc++.h"
using namespace std;
int kount=0;
int bsearch(int a[],int l,int h,int key)
{
    if(l>h)
    return -1;
    int mid = (l+h)/2;
    kount++;
    if(a[mid] == key)
    return mid;
    else if(a[mid] < key)
     return bsearch(a,mid+1,h,key);
    else
     return bsearch(a,l,mid-1,key);

}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,key;
        cin >> n;
        int a[n];
        for(int i = 0;i < n;i++) cin >> a[i];
        cin >> key;
        int index=bsearch(a,0,n-1,key);
        if(index==-1)
        cout << "Element not found after ";
        else
        cout << "Element found after ";
        cout << kount << " Comparisions" << endl;
    }
}