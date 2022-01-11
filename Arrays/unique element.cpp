#include<iostream>
using namespace std;
void printArray(int *arr,int size){
  for(int i=0;i<size;i++){
    cout << arr[i]; 
  }
  return ;
}
int findDuplicates( int nums[],int size) {
        int ans = 0;
        for(int i=0;i<size;i++){
            ans = ans ^ nums[i];
        }
        for(int i=0;i<size;i++){
            ans = ans ^ nums[i];
        }
         return ans;
    }
int main(){
  int arr[8] = {4,3,2,7,8,2,3,1};
  cout << findDuplicates(arr,8);

}