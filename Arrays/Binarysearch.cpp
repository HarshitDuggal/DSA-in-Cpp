// //increasing order array
// #include<iostream>
// using namespace std;
// int binarySearch(int arr[],int n,int key){
//   int start=0,end=n-1;
//   int mid = start + ((end - start)/2);
//   while(start < end){
//     if(arr[mid] == key){
//       return arr[mid];
//     }
//     else if(arr[mid]>key){
//       end = mid-1;
//     }
//     else{
//       start = mid+1;
//     }
//     mid = start + ((end - start)/2);
//   }
//   return -1;
// }
// int main(){
//   int arr[10] = {1,2,3,4,5,6,7,8,9,12};
//   int arra[9] = {1,2,4,6,9,10,13,16,22};

//   cout << "Key is at the index "<< binarySearch(arr,10,9) << endl;
//   cout << "Key is at the index "<< binarySearch(arra,9,2) << endl;

// }