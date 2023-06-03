#include<iostream>
using namespace std;

int main(){

  int n;

  cin>>n;

  if(n <= 1){
    cout<<0;
    return 0;
  }
  
  long long arr[n], m = 0;

  for(int i = 0; i < n; i++)
    cin>>arr[i];

  for(int i = 1; i < n; i++)
    if(arr[i] < arr[i-1]){
      m += arr[i-1] - arr[i];
      arr[i] = arr[i-1];
  }

  cout<<m;
  
  return 0;
}
