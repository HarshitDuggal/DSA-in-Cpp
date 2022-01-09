// #include <iostream>
// #include <stdlib.h>
// using namespace std;
//time complexity is more
/*int main() {
  int x;
  cout << "enter your number";
  cin >> x;
  if(x%3==0 && x%5==0){
    cout << "fizzbuzz";
  }
  else if(x%5==0){
    cout << "buzz";
  }
  else if(x%3==0){
    cout << "fizz"; 
  }
  return 0;
} */

//time complexity is less
/*
int main(){
  for(int i=1; i<=100;i++){
    string d = "";
    if(i%3==0){
      d += "fizz";
    }
    if(i%5==0){
      d += "buzz";
    }
    if(d==""){
      cout << i << endl;
    }
    else{
      cout << d << endl;
    }
  }
}
*/

//time complexity is very less and no use of modulus
//optimal solution
// int main(){
//   int c3 = 0;
//   int c5 = 0;
//   for(int i=1;i<=100;i++){
//     c3++;
//     c5++;
//     string d = "";
//     if(c3 == 3){
//       d += "fizz";
//       c3 = 0;
//     } 
//     if(c5 == 3){
//       d += "buzz";
//       c5 = 0;
//     }
//     if(d==""){
//       cout << i << endl;
//     }
//     else {
//       cout << d << endl;
//     }
//   }
// }