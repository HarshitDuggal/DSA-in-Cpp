// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;

// void selectionSort(int *arr,int n){
  
//   //base case
//   if(n==1){
//     return ;
//   }
//   //processing
//   int temp = 0;
//   for(int i = 1; i<n;i++){
//     if(arr[temp]>arr[i]){
//       temp = i;
//     }
//   }
  
//   swap(arr[0],arr[temp]);
//   selectionSort(arr+1,n-1);
// }

// int main(){
//   int arr[10]={10,8,7,123,23,1,2,4,0,12};
//   int n=10;
//   selectionSort(arr,n);
//   for(int i=0;i<n;i++){
//     cout << arr[i] << " ";
//   }
// }