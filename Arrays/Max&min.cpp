// #include<iostream>
// #include<climits>
// using namespace std;
// int getMax(int arr[],int n){
//   int maxi = INT_MIN;
//   for(int i =0; i<n; i++){
//     maxi = max(maxi,arr[i]);
//     // if(arr[i] > maxi){
//     //   maxi = arr[i];
//     // }
//   }
//   return maxi;
// }
// int getMin(int arr[],int n){
//   int mini = INT_MAX;
//   for(int i =0; i<n; i++){
//     mini = min(mini,arr[i]);
//     // if(arr[i] < mini){
//     //   mini = arr[i];
//     // }
//   }
//   return mini;
// }
// int main(){
//   int arr[100],n;
//   cin >> n;
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   cout << endl << "max no is " << getMax(arr,n) << endl;
//   cout << endl << "min no is " << getMin(arr,n) << endl;
// }