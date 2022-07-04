// #include <iostream>
// #include<string>
// #include <vector>

// using namespace std;

// string reverse(string v){
//   int s=0,end=v.length()-1;
//   while(s<=end){
//     swap(v[s++],v[end--]);
//   }
//   v.push_back(' ');
//   return v;
// }

// int main(){
//   string s,x;
//   vector<string> v;
//   getline(cin,s);
//   int i=0;
//   int j=s.length()-1;
//   while(s[i] !='\0'){
//     if(s[i] != ' '){
//       x.push_back(s[i]);
//     }
//     else if(s[i] == ' '){
//       v.push_back(reverse(x));
//       x.clear();
//     }
//     i++;
//   }
//   v.push_back(reverse(x));
//   for(int i=0;i<v.size();i++){
//     cout << v[i] << endl;
//   }
// }
