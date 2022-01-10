#include<iostream>
using namespace std;
int fibonaciNth(int n){
int a=0,b=1,ans;
for(int i=1;i<=n;i++){
  ans = a+b;
  a=b;
  b=ans;
}
return b;
}
int main(){
  int a;
  cin >> a;
  cout << "nth term of fibonaci series is " << fibonaciNth(a);
}