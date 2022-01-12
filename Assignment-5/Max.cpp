#include <iostream>
using namespace std;

int max(int arr[], int idx, int n){
    // write your code here
    if(n<0){
        return idx;
    }
    if(arr[n]>idx){
        idx=arr[n];
    }
    return max(arr,idx,n-1);

}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int p = max(arr, 0, n-1);
    cout << p << endl;
}
