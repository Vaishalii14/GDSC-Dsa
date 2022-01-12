#include<iostream>
#include<vector>
using namespace std;
vector<string>answer;
void getPaths(int n,string ans){
if(n<=0){
    answer.push_back(ans);
    ans="";
    return;
}
for(int i=1;i<n;i++){
 getPaths(n-i,ans+to_string(i));
}

}
int main(){
    int n;
    cin>>n;
    getPaths(n,"");
    for(auto ele:answer){
        cout<<ele<<",";
    }
    return 0;
}
