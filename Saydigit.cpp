#include <iostream>

using namespace std;

void sayDigit(int n){
  string arr[11] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten"};
  if(n==0){
    return ;
  }
  int digit = n % 10;
  n = n/10;  

  sayDigit(n);
  
  cout << arr[digit] << endl;  
  return ;
}

int main(){
  
  int no;
  cin >> no ;
  sayDigit(no);
}