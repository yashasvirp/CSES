#include<iostream>
typedef long long ll;
using namespace std;

int main(){
  ll n,sum = 0;

  cin>>n;

  ll arr[n];

  for(int i = 0; i < n-1; i++){
    cin>>arr[i];
    sum += arr[i];
  }

  cout<<n*(n+1)/2 - sum;

  return 0;
}
    
  
