#include<iostream>
using namespace std;
int main()
{
  int a;
  int rem;
  int sum=0;
  int total=0;
  cin>>a;
  while(a>0){
    rem=a%10;
    sum+=rem;
    total++;
    a=a/10;
  }
  cout<<total;
  cout<<sum;
  return 0;
}