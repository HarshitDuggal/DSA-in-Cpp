// // { Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;

//  // } Driver Code Ends
// class Solution{
//     private:
//     bool isodd(int count){
//         if((count + 1)%2==0){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// 	public:
//     bool brainGame(vector<int>nums) {
//         if(nums.size()==0){
//             return false;
//         }
//         int count = 1;
//         vector<int> temp  = nums;
//         for(int i=0;i<nums.size();i++){
//          for(int j =2;j<nums[i];j++){
//             if(nums[i]%j==0){
//                 count++;
//                 nums[i] = nums[i]/j;
//             } 
//          }   
//         }
//         if(temp == nums){
//             if(isodd(count)){
//             return false;
//             }
//             else{
//                 return true;
//             }    
//         }
//         else{
//             brainGame(nums);
//         }
//     }
// };
// // { Driver Code Starts.
// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 		int n;
// 		cin >> n;
// 		vector<int>nums(n);
// 		for(int i = 0; i < n; i++)cin >> nums[i];
// 		Solution ob;
// 		bool ans = ob.brainGame(nums);
// 		if(ans)
// 			cout << "A\n";
// 		else cout << "B\n";
// 	}  
// 	return 0;
// }  // } Driver Code Ends