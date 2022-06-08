#include <iostream>
#include <array>
using namespace std;

int main(){
  array <int,10> arr= {10,1,23,99,76,54,2,13,22,14};
  for(int i=1;i<10;i++){
    for(int j=0;j<10-i;j++){
       if(arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
    }
  }
  for(int k=0;k<arr.size();k++){
    cout << arr[k] << endl;
  }
}