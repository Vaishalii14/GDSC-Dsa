#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s[i]!='\0';i++){
        if(s[i]>='a'&& s[i]<='z'){
            s[i]=s[i]-32;
        }
        else if(s[i]>='A'&& s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }
    cout<<s;
    return 0;
}
