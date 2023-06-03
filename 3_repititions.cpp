#include<iostream>
using namespace std;

int main(){

  string s;

  getline(cin,s);

  int count = 1, max = 1, i = 0;
  int n = s.size();

  if(n == 0)
    cout<<n;

  
  while(i < n-1){
    if(s[i] == s[i+1]){
      count++;
      if(count > max)
	max = count;
    }
    else
      count = 1;

    i++;
    
  }

  cout<<max;

  
  return 0;
}
