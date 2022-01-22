// #include<iostream>
// using namespace std;
// unsigned long long int binarySearch(long long int N){
//     unsigned long long int s = 0;
//     unsigned long long int e = N;
//     unsigned long long int mid = s+ (e-s)/2;
//     unsigned long long int ans = -1;
//     while(s<=e){
//         unsigned long long int square = mid*mid;
//         if(square==N){
//             return mid;
//         }
//         else if(square>N){
//             e = mid -1;
//     }
//         else {
//             ans = mid;
//             s=mid+1;
//         }
//         mid = s + (e-s)/2;
        
// 	}
//     return ans;
// }
// double precision(int n,int precision,int temp_sol){
//   double floater = 1 ;
//   double ans = temp_sol;
//   for(double i=0; i<=precision;i++){
//     floater = floater/10;
//     for(double j=ans;j*j<n;j=j+floater){
//       ans =j;
//     }
//   }
//   return ans;
// }
// int main()
// {
//     int n;
//     cout << "Enter a no" << endl;
//     cin >> n;
//     int temp_sol= binarySearch(n);   
//     cout << "sqrt is " << precision(n,3,temp_sol) << endl;


// }