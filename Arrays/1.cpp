#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;
    
    int arr[100];
    // Input array elements
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Check if array is sorted
    bool isSorted = true;
    for(int i = 0; i < n-1; i++) {
        if(arr[i] > arr[i+1]) {
            isSorted = false;
            break;
        }
    }
    
    if(isSorted)
        cout << "True" << endl;
    else
        cout << "False" << endl;
        
    // Print unique elements using set
    set<int> s;
    for(int i = 0; i < n; i++) {
        s.insert(arr[i]);
    }
    
    // Print set elements
    for(auto x : s) {
        cout << x << " ";
    }
    
    return 0;
}