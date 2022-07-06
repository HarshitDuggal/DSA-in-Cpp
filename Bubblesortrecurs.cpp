// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// void bubbleSort(int *arr,int n){
//   if(n==0 || n==1){
//     return ;
//   }
//   int count = 0;
//   for(int i=0;i<n;i++){
//   if(arr[i]>arr[i+1]){
//     swap(arr[i],arr[i+1]);
//     count++;
//   }  
//   }
//   if(count == 0){
//     return;
//   }
//   n--;
  
//   bubbleSort(arr,n);
  
// }

// int main(){
//   int arr[7] = {3,5,1,20,23,2,7};
//   int n = 7;
//   bubbleSort(arr,n-1);
//   for(int i=0;i<n;i++){
//   cout << arr[i] << " ";
//   }
// }