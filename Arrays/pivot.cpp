// #include<iostream>
// using namespace std;
// int pivotElement(int arr[],int n){
//   int e = n- 1;
//   int s = 0;
//   int mid = s + (e-s)/2;
//   while(s<e){
//     if(arr[mid]>=arr[0]){
//       s = mid +1;
//     }
//     else{
//       e=mid;
//     }
//     mid = s + (e-s)/2;
//   }
//   return s;
// }
// int main(){
//   int arr[5]={4,6,8,3,2};
//   cout << pivotElement(arr, 5);
// }