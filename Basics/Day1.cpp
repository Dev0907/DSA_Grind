#include<iostream>
using namespace std;
int main()
{
    int a;
    int rem;
    int rev = 0;
    
    cout << "Enter a number: ";
    cin >> a;
    int n = a;  // Store original number
    
    while(a > 0){
        rem = a % 10;
        rev = rev * 10 + rem;
        a = a/10;
    }
    
    cout << "Reversed number: " << rev << endl;
    
    if(rev == n){
        cout << "Palindrome";
    }
    else{
        cout << "Not palindrome";
    }
    
    return 0;
}