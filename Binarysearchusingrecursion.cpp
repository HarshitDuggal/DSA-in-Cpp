// #include <iostream>

// using namespace std;

// bool binarySearch(int arr[],int s,int e,int key){
//   if(s>e){
//     return false;
//   }
//   int mid = s + (e-s)/2;
//   if(arr[mid] == key){
//     return true;
//   }

//   if(arr[mid] < key){
//     return binarySearch(arr,mid+1,e,key);
//   }
//   else{
//     return binarySearch(arr,s,mid-1,key);
//   }
// }

// int main(){
//   int arr[5] = {2,3,4,8,10};
//   int key = 8;
//   int s=0,e=4;
//   bool ans = binarySearch(arr,s,e,key);
//   if(ans){
//     cout << "Key is present";
//   }
//   else{
//     cout << "key is not present";
//   }
// }