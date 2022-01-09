// #include <iostream>
// using namespace std;

// int main() {
//   int n;
//   cout << "Enter a no to complement"<<endl;
//   cin >> n;
//   int a = ~n;
//   int mask = 0;
//   //edge case
//   if(n==0){
//     return 1;
//   }
//   while(n!=0){
//     mask = mask<<1;
//     mask = mask | 1;
//     n = n >> 1;
//   }
//   n = a & mask;
//   cout << n << endl;
// }