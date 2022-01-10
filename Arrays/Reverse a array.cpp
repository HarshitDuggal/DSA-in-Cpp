#include<iostream>
using namespace std;
void printarray(int arr[] ,int size){
  for(int i =0; i<size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}
void reversearray(int arr[],int size){
  int start=0,end=size-1;
  while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}
int main(){
  int arr[5] = {1,2,3,4,5},brr[6]={7,4,0,9,3,1};
  cout << endl << "normal array" << endl;
  printarray(arr,5);
  printarray(brr,6);

  reversearray(arr,5);
  reversearray(brr,6);
  cout << endl << "reverse array" << endl;
  printarray(arr,5);
  printarray(brr,6);
}