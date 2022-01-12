#include <iostream>
using namespace std;
int palindrome(string s,int i,int j){
    if(i>=j){
        return 1;
    }
    if(s[i]!=s[j]){
        return 0;
    }
    return palindrome(s,i+1,j-1);

}
int main() {
    string s;
    cin>>s;
    int n=s.length()-1;
    if(palindrome(s,0,n)){
        cout<<"yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
