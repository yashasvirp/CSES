#include<iostream>
using namespace std;

int main(){

  long long n, i = 0;

  cin>>n;
  
  if(n < 4 and n > 1){
    cout<<"NO SOLUTION";
    return 0;
  }

  long long count = n;
  while(count){
    if(n%2)
      i = (i+1)%n+1;
    else
      i = (i+2)%(n+1);

    cout<<i<<" ";
    count--;
  }
  
  return 0;
}
