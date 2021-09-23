/* Q1
Given an unsorted array of integers, design an algorithm and a program to sort the array using 
insertion sort. Your program should be able to find number of comparisons and shifts ( shifts - total 
number of times the array elements are shifted from their place) required for sorting the array.
*/
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include "bits/stdc++.h"

using namespace std;
using namespace __gnu_pbds;


 #define mod 1e9 + 7
#define FOR(a, c) for (long long(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (long long(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (long long(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<long long> vi;
typedef pair<long long, long long> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
typedef long long ll;
const ll INFL=1E18;
#define MP make_pair
#define MOD
typedef tree<pair<long long,long long>, null_type, less<pair<long long,long long>>, rb_tree_tag,
tree_order_statistics_node_update>
new_data_set;


void Insertion_Sort(int arr[], int n)
{
    int key, comp = 0, shifts = 0, i, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
            comp++;
            shifts++;
        }
        arr[j + 1] = key;
        shifts++;
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nComparisons=" << comp;
    cout << "\nShifts=" << shifts;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Insertion_Sort(arr, n);
    }
    return 0;
}
