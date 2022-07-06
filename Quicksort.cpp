// #include <iostream>
// using namespace std;

// int partition(int *arr,int s,int n){
//   int pivot = arr[s];
//   int cnt =0;
//   for(int i=s+1;i<=n;i++){
//     if(arr[i]<pivot){
//       cnt++;
//     }
//   }
//   int pivotIndex = s+cnt;
//   swap(arr[s],arr[pivotIndex]);
//   //left & right sorting
//   int i=s,j=n;
//   while(i<pivotIndex && j>pivotIndex){
//     while(arr[i]<pivot){
//       i++;
//     }
//     while(arr[j]>pivot){
//       j--;
//     }
//     if(i<pivotIndex && j>pivotIndex){
//       swap(arr[i++],arr[j--]);
//     }
//   }
//   return pivotIndex;
// }

// void quickSort(int*arr,int s,int n){
//   if(s>=n){
//     return ;
//   }

//   int p = partition(arr,s,n);
//   quickSort(arr,s,p-1);
//   quickSort(arr, p+1,n);
// }

// int main(){
//   int arr[10] = {1,4,3,8,5,3,6,7,9,23};
//   int n=10;
//   quickSort(arr,0,n-1);
//   for(int i=0;i<n;i++){
//     cout << arr[i] << " ";
//   }
// }