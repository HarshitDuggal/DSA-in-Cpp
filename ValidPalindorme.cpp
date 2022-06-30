#include <iostream>
#include <string>
using namespace std;

bool isValid(char ch){
  if( (ch >= 'a' && ch<='z') || (ch >= 'A' && ch<='Z') || (ch>='0' && ch<='9') ){
        return 1;
    }
    return 0;
}
char toLowercase(char ch){
    if((ch >= 'a' && ch<='z') || (ch >= '0' && ch<='9')){
        return ch;
    }
    else{ 
        int temp = ch - 'A' +'a';
        return temp;
    }
}

int main(){
      string s = "c1 O$d@eeD o1c";
      string val = "";
    for(int i=0; i<s.length();i++){
    if(isValid(s[i])){
        val.push_back(s[i]);
    }        
      }
  //value in val is correct
      cout << val << endl;
    // //lowercase
  
    for(int i=0; i<val.length();i++){
    val[i]=toLowercase(val[i]);        
    }
    cout << "lowercase " << val << endl;

  // lowercase is working
  
    int start=0,end=val.length()-1;
    while(start<end){
        if(val[start] != val[end]){
            cout << "flase";            
        }
        else{
            start++;
            end--;
          
        }
    }
    cout <<  1;

}