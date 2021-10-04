#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;

	while(t--){
	int n;
	cin>>n;
	int arr[n];
	    for(int i=0;i<n;i++){
	       cin>>arr[i];
	    }
	    int start=0;
	    int end=n-1;

	    while(start<=end){
	        int temp=arr[start];
	        arr[start]=arr[end];
	        arr[end]=temp;
	        start++;
	        end--;
	    }
	    for(int j=0;j<n;j++){
	        cout<<arr[j]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
