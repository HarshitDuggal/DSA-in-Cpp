// #include <iostream>

// using namespace std;

// void sortedArrays(int *arr,int s,int e){
//   int mid = (s+e)/2;
//   int len1= mid-s+1;
//   int len2 = e-mid;
//   int *arr1 = new int[len1];
//   int *arr2 = new int[len2];
//   int mainindex = s;
//   for(int i=0;i<len1;i++){
//     arr1[i] = arr[mainindex++];
//   }
//   mainindex = mid+1;
//   for(int i=0;i<len2;i++){
//     arr2[i] = arr[mainindex++];
//   }
//   int index1=0,index2=0;
//   mainindex = s;
//   while(index1 < len1 && index2 < len2) {
//         if(arr1[index1] < arr2[index2]) {
//             arr[mainindex++] = arr1[index1++];
//         }
//         else{
//             arr[mainindex++] = arr2[index2++];
//         }
//     }   

//     while(index1 < len1) {
//         arr[mainindex++] = arr1[index1++];
//     }

//     while(index2 < len2 ) {
//         arr[mainindex++] = arr2[index2++];
//     }

//     delete []arr1;
//     delete []arr2;
// }


// void mergeSort(int *arr,int s,int e){
//   if(s>=e){
//     return ;
//   }
//   int mid = (s + e)/2;
//   mergeSort(arr,s,mid);
//   mergeSort(arr,mid+1,e);
//   sortedArrays(arr,s,e);
// }
// int main(){
//   int arr[5] = {23,32,1,2,4};
//   int e = 4;
//   mergeSort(arr,0,e);
//   for(int i=0;i<5;i++){
//     cout << arr[i] << endl;
//   }
// }