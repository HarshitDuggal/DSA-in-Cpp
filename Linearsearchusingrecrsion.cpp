// #include <iostream>

// using namespace std;

// bool getKey(int arr[],int size,int key){
//   if(size == 0){
//     return 0;
//   }
//   if(arr[0]==key){
//     return 1;
//   }
  
//   bool ans = getKey(arr+1,size-1,key);
//   return ans;
  
// }

// int main(){
//   int arr[5] = {2,3,1,4,9};
//   int key = 2;
//   bool ans = getKey(arr,5,key);
//   if(ans){
//     cout << "key is present" << endl;
//   }
//   else{
//     cout << "key is not present" << endl;
//   }
// }